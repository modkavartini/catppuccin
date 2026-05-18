$rainmeterPath = "C:\Program Files\Rainmeter\Rainmeter.exe"
$skinName = "catppuccin"

function Log-Rainmeter {
    param (
        [string]$message,
        [string]$type = "Notice"
    )
    $command = "& `"$rainmeterPath`" !Log `"$message`" `"$type`"" 
    Invoke-Expression $command
}

function Refresh-RainmeterSkin {
    if (Test-Path $rainmeterPath) {
        Log-Rainmeter "Refreshing catppuccin to reset reserved space..."
        $command = "& `"$rainmeterPath`" !RefreshApp `"$skinName`"" 
        Invoke-Expression $command
    } else {
        Log-Rainmeter "Rainmeter not found at path: $rainmeterPath" "Error"
    }
}

$initialExplorerProcess = Get-Process -Name explorer -ErrorAction SilentlyContinue

if ($initialExplorerProcess) {
    $initialExplorerProcessId = $initialExplorerProcess.Id
    Log-Rainmeter "Initial explorer.exe process ID: $initialExplorerProcessId"
} else {
    Log-Rainmeter "explorer.exe is not running." "Error"
    exit
}

Log-Rainmeter "Monitoring explorer.exe restarts."

$explorerNotRunningCount = 0
while ($true) {
    Start-Sleep -Seconds 1

    $currentExplorerProcess = Get-Process -Name explorer -ErrorAction SilentlyContinue

    if ($currentExplorerProcess) {
        $currentExplorerProcessId = $currentExplorerProcess.Id

        if ($currentExplorerProcessId -ne $initialExplorerProcessId) {
            Log-Rainmeter "explorer.exe has been restarted."
            Start-Sleep -Seconds 5
            Refresh-RainmeterSkin
            $initialExplorerProcessId = $currentExplorerProcessId
        }
        $explorerNotRunningCount = 0
    } else {
        $currentExplorerProcess = Get-Process -Name explorer -ErrorAction SilentlyContinue

        if ($currentExplorerProcess) {
            $currentExplorerProcessId = $currentExplorerProcess.Id

            if ($currentExplorerProcessId -ne $initialExplorerProcessId) {
                Log-Rainmeter "explorer.exe has been restarted."
                Refresh-RainmeterSkin
                $initialExplorerProcessId = $currentExplorerProcessId
            }
            $explorerNotRunningCount = 0
        } else {
            Log-Rainmeter "explorer.exe is not running." "Warning"
            $explorerNotRunningCount++
            if ($explorerNotRunningCount -ge 6) {
                Log-Rainmeter "explorer.exe has not been running for 1 minute. Exiting script." "Error"
                exit
            }
        }
    }
}