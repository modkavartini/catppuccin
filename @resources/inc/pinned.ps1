
$destPath=$RmAPI.VariableStr("@") + "\pinned"
$appsDisp=$RmAPI.Variable("appsDisp")
$pinnedApps=$RmAPI.Variable("pinnedApps")

function pin {
    if($appsDisp -eq 0) { break }
    if($pinnedApps -eq 0) { break }
    clearDest
    $pinnedPath="$env:AppData\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar"
    $pinIgnore=$RmAPI.VariableStr("pinIgnore") -replace '^$','thiswillnevermatchanythingoktrustmebro'
    get-ChildItem $pinnedPath -filter *.lnk -r | forEach-Object {
        $itemPath=$_.fullName
        $itemName=$_.baseName
        if("$itemName" -notmatch "Rainmeter|$pinIgnore") { copyPinned "$itemPath" }
    }
    $RmAPI.Bang("!updateMeterGroup apps")
    $RmAPI.Bang("!redraw")
}

function copyPinned {
    param([string] $itemPath)
    $obj=new-Object -ComObject WScript.Shell
    $lnk=$obj.createShortcut($itemPath)
    $lnkTargetPath=$lnk.targetPath
    $lnkArguments=$lnk.arguments
    $lnkName=try { (split-Path -path $lnkTargetPath -leaf) -replace '.exe','' } catch { 'NA' }
    $copyLnk=1

    if(($lnkName -match "NA") -and ($itemPath -match "File Explorer")) {
        $newLnk=$obj.createShortcut("$destPath\explorer.lnk")
        $newLnk.targetPath="%windir%\explorer.exe"
        $newLnk.save()
        $copyLnk=0
    }
    if(($lnkName -match "chrome_proxy") -and ($lnkTargetPath -match "Chrome\\Application")) {
        $lnkName=try { (split-Path -path $itemPath -leaf) -replace '.lnk','' } catch { 'NA' }
    }
    
    if($lnkArguments -match "-processStart") {
        $lnkName=([regex]::match($lnkArguments, "processStart\s(.*).exe").groups[1].value)
        $inPath=$lnk.workingDirectory
        $newLnk=$obj.createShortcut("$destPath\$lnkName.lnk")
        $newLnk.targetPath="$inPath" + "\$lnkName.exe"
        $newLnk.save()
        $copyLnk=0
    }

    if($copyLnk -eq 1) { copy-Item -path "$itemPath" -destination "$destPath\$lnkName.lnk" }
}

function clearDest {
    get-ChildItem $destPath -filter *.lnk -r | where-Object { $_.baseName -notmatch "explorer" } | forEach-Object { $_.Delete() }
}

function setVersion {
    $currentVer = $RmAPI.VariableStr("currentVer")
    $currentFilePath = $RmAPI.VariableStr("currentPath") + $RmAPI.VariableStr("currentFile")
    $mondPath = $RmAPI.VariableStr("@") + "mond.inc"
    get-Content $currentFilePath | select-String "^version=" | forEach-Object {
        $barVersion = $_.line -replace '.*=',''
        if ($currentVer -ne $barVersion) { $RmAPI.Bang("!writekeyvalue metadata version `"$currentVer`"") }
    }
    get-Content $mondPath | select-String "^Version=" | forEach-Object {
        $mondVersion = $_.line -replace '.*=',''
        if ($currentVer -ne $mondVersion) { $RmAPI.Bang("!writekeyvalue MonD Version `"$currentVer`" `"$mondPath`"") }
    }
}

setVersion