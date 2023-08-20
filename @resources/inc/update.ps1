function goBrr {
    stop-Process -name "Rainmeter"
    write-Host "  /|、" -foregroundColor red
    write-Host "（ﾟ､ ｡７" -foregroundColor yellow
    write-Host "　|、~ ヽ" -foregroundColor green
    write-Host "　じしf_,)ノ" -foregroundColor blue
    $ProgressPreference = 'SilentlyContinue'
    $API=invoke-WebRequest -uri "https://api.github.com/repos/modkavartini/catppuccin/releases/latest" -useBasicParsing
    $URL=($API | convertFrom-Json).assets.browser_download_url
    $lV=($API | convertFrom-Json).tag_name
    $outPath="C:/Windows/Temp/cat_bussin.rmskin"
    write-Host "> downloading catppuccin $lV..." -foregroundColor red
    $WC=new-Object System.Net.WebClient
    $WC.downloadFile($URL, $outPath)
    write-Host "> installing catppuccin $lV..." -foregroundColor green
    start-Sleep 1
    start-Process $outPath
    if($null -notmatch (get-Process "SkinInstaller" -ea 0)) {
        start-Sleep 2
        $wShell=new-Object -ComObject WScript.Shell
        $wShell.sendKeys('~')
    }
}

goBrr