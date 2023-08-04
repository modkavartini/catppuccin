function goBrrr {
    $githubName="modkavartini"
    $skinName="catppuccin"
    $latestVerRaw=Invoke-WebRequest -Uri "https://api.github.com/repos/$githubName/$skinName/releases/latest" -UseBasicParsing
    $latestVer=($latestVerRaw | ConvertFrom-Json).tag_name -replace "v",""
    $url="https://github.com/$githubName/$skinName/releases/download/v$latestVer/$skinName"+"_$latestVer.rmskin"
    $outPath="C:/Windows/Temp/$skinName"+"_$latestVer.rmskin"

    Write-Host "> Downloading $skinName..." -ForegroundColor "Yellow"
    $wc=New-Object System.Net.WebClient
    $wc.DownloadFile($url, $outPath)
    $shell=New-Object -ComObject Shell.Application
    $shell.minimizeall()
    Stop-Process -Name "Rainmeter"
    Write-Host "> Installing v$latestVer..." -ForegroundColor "Yellow"
    Start-Process $outPath

    if($null -notMatch (Get-Process "SkinInstaller" -ea 0)) {
        Start-Sleep 2
        $wshell=New-Object -ComObject wscript.shell
        $wshell.SendKeys('~')
    }
    Write-Host "> The $skinName suite was installed successfully." -ForegroundColor "Green"
}
goBrrr