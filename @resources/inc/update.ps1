function goBrrr {
    $githubName="modkavartini"
    $skinName="catppuccin"
    $latestVer=$RmAPI.MeasureStr("latestVer")
    $url="https://github.com/$githubName/$skinName/releases/download/v$latestVer/$skinName"+"_$latestVer.rmskin"
    $outPath="C:/Windows/Temp/$skinName"+"_$latestVer.rmskin"

    $wc=New-Object System.Net.WebClient
    $wc.DownloadFile($url, $outPath)
    $shell=New-Object -ComObject Shell.Application
    $shell.minimizeall()
    Start-Process $outPath

    if($null -notMatch (Get-Process "SkinInstaller" -ea 0)) {
        Start-Sleep 2
        $wshell=New-Object -ComObject wscript.shell
        $wshell.SendKeys('~')
    }
}
