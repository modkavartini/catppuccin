
$script:destPath=$RmAPI.VariableStr("@")+ "\pinned"

function pin {
    $pinnedApps=$RmAPI.Variable("pinnedApps")
    if($pinnedApps -eq 0) { break }
    clearDest
    $pinnedPath="$env:AppData\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar"
    $pinIgnore=$RmAPI.VariableStr("pinIgnore") -replace '^$','thiswillnevermatchanythingoktrustmebro'
    get-ChildItem $pinnedPath -filter *.lnk -r | forEach-Object {
        $itemPath=$_.fullName
        $itemName=$_.baseName
        if("$itemName" -notmatch "Rainmeter|$pinIgnore") { copyPinned "$itemPath" }
    }
    hideAnyRepeat
    $RmAPI.Bang("!updateMeterGroup apps")
    $RmAPI.Bang("!redraw")
}

function copyPinned {
    param([string] $itemPath)
    $obj=new-Object -ComObject WScript.Shell
    $lnk=$obj.createShortcut($itemPath)
    $lnkTargetPath=$lnk.targetPath
    $lnkArguments=$lnk.arguments
    $lnkName=try { (split-Path -path $lnkTargetPath -leaf) -replace '.exe','' } catch { 'N/A' }
    $copyLnk=1

    if(($lnkName -match "N/A") -and ($itemPath -match "File Explorer")) {
        $newLnk=$obj.createShortcut("$destPath\explorer.lnk")
        $newLnk.targetPath="%windir%\explorer.exe"
        $newLnk.save()
        $copyLnk=0
    }
    if(($lnkName -match "chrome_proxy") -and ($lnkTargetPath -match "Chrome\\Application")) {
        $lnkName=try { (split-Path -path $itemPath -leaf) -replace '.lnk','' } catch { 'N/A' }
    }
    
    if($lnkArguments -match "-processStart") {
        $lnkName=([regex]::match($lnkArguments, "\s(.*).exe").groups[1].value)
        $inPath=$lnk.workingDirectory
        $newLnk=$obj.createShortcut("$destPath\$lnkName.lnk")
        $newLnk.targetPath="$inPath" + "\$lnkName.exe"
        $newLnk.save()
        $copyLnk=0
    }

    if($copyLnk -eq 1) { copy-Item -path "$itemPath" -destination "$destPath\$lnkName.lnk" }
}

function clearDest {
    get-ChildItem $destPath -filter *.lnk -r | forEach-Object { $_.Delete() }
}

function hideAnyRepeat {
    $pinnedApps=$RmAPI.Variable("pinnedApps")
    if($pinnedApps -eq 0) { break }
    $hideAnyRepeat=$RmAPI.Variable("hideAnyRepeat")
    if($hideAnyRepeat -eq 0) { break }
    $processCount=$RmAPI.Variable("processCount")
    for($i=0; $i -lt $processCount; $i++) {
        $iProgramName=$RmAPI.VariableStr("programName$i")
        for($j=($i+1); $j -lt $processCount; $j++) {
            $jProgramName=$RmAPI.VariableStr("programName$j")
            if(($iProgramName -match $jProgramName) -or ($iProgramName -match "empty")) {
                #$RmAPI.Bang("!setOption $i hidden `"`"`"(([#programsCount$i]<1?1:0))`"`"`"")
            }
        }
    }
}