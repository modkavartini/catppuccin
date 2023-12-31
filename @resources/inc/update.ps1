
$nirPath = ($PSScriptRoot -replace 'inc','addons') + "\nircmd.exe"

function nirPS {
    param(
        [string]
        $a,
        [string]
        $p = ""
    )
    if (test-Path $nirPath) {
        $nirAction = "$nirPath win $a ititle `"powershell`" $p"
        invoke-Expression $nirAction
    }
}

nirPS -a setsize -p "0 0 618 610"
nirPS -a center
nirPS -a settopmost -p 1

function update {
    $API = invoke-WebRequest -uri "https://api.github.com/repos/modkavartini/catppuccin/releases/latest" -useBasicParsing
    $URL = ($API | convertFrom-Json).assets.browser_download_url
    $lV = ($API | convertFrom-Json).name
    write-Host "  ⟋|、" -foregroundColor red
    write-Host "（ﾟ､ ｡７" -foregroundColor green
    write-Host "　|、~ ヽ" -foregroundColor blue
    write-Host "　ししf_,)ノ`n" -foregroundColor yellow
    write-Host "> killing obstructive processes..." -foregroundColor red
    cmd.exe /c "taskkill /f /im hidetaskbar.exe >nul 2>&1 && taskkill /f /im explorer.exe >nul 2>&1 && start explorer.exe"
    cmd.exe /c "taskkill /f /im replaceWin.exe >nul 2>&1"
    stop-Process -name "Rainmeter" -eA 0
    write-Host "> downloading catppuccin $lV..." -foregroundColor yellow
    $outPath = "C:/Windows/Temp/cat_bussin.rmskin"
    $WC = new-Object System.Net.WebClient
    $WC.downloadFile($URL, $outPath)
    write-Host "> installing catppuccin $lV..." -foregroundColor green
    start-Sleep 1
    $shell = new-Object -ComObject Shell.Application
    $shell.minimizeAll()
    start-Process $outPath
    if (get-Process "SkinInstaller" -eA 0) {
        start-Sleep 2
        $wShell = new-Object -ComObject WScript.Shell
        $wShell.sendKeys('~')
    }
    nirPS -a settopmost -p 0
}

update
