#NoEnv
#SingleInstance Force

global rainmeterPath := A_Args[1]
global config := A_Args[2]
inputText := ""
lastKeyPress := A_TickCount
startTime := A_TickCount
inactivityCheckStarted := false

SetTimer, CheckInactivity, 100

CaptureInput()

CaptureInput() {
    global inputText, lastKeyPress, inactivityCheckStarted
    Input, userInput, L1
    if (userInput != "") {
        inputText .= userInput
        lastKeyPress := A_TickCount
        inactivityCheckStarted := true
        Run, "%rainmeterPath%" !Log "%inputText%"
        CaptureInput()
    }
}

CheckInactivity:
    global lastKeyPress, inputText, inactivityCheckStarted, startTime
    if (A_TickCount - startTime > 10000 && !inactivityCheckStarted) {
        ExitApp
    }
    if (inactivityCheckStarted) {
        if (A_TickCount - lastKeyPress > 500) {
            if (inputText != "") {
                clipboard := inputText
                Send, <#s
                Sleep, 50
                Send, ^v
                ExitApp
            }
        }
    }
return
