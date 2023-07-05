$githubName="modkavartini"
$skinName="catppuccin"
$latestVerRaw=Invoke-WebRequest -Uri "https://api.github.com/repos/$githubName/$skinName/releases/latest" -UseBasicParsing
$latestVer=($latestVerRaw | ConvertFrom-Json).tag_name -replace "v",""
$url="https://github.com/$githubName/$skinName/releases/download/v$latestVer/$skinName"+"_$latestVer.rmskin"
$outPath="C:/Windows/Temp/$skinName"+"_$latestVer.rmskin"

    Write-Host "> Downloading $skinName..." -ForegroundColor "Yellow"
    $wc=New-Object System.Net.WebClient
    $wc.DownloadFile($url, $outPath)
    $shell = New-Object -ComObject Shell.Application
    #$shell.minimizeall()
    Start-Process $outPath

    if($null -ne (Get-Process "SkinInstaller" -ea SilentlyContinue)) {
        
        Write-Host "> Installing v$latestVer..." -ForegroundColor "Yellow"
        Start-Sleep -s 1
        $wshell=New-Object -ComObject Wscript.Shell
        $wshell.AppActivate('Rainmeter Skin Installer') 
        Start-Sleep -s 1
        $wshell.SendKeys('~')
        Write-Host "> The $skinName suite was installed successfully." -ForegroundColor "Green"
        exit
    }
