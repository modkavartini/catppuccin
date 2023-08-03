[variables]
menuIcon=E935
;EF93
mediaIcon=ED21
;EEAA
nextIcon=E95E
prevIcon=E954
timeIcon=EF04
dateIcon=E9E7
CPUIcon=EA8F
RAMIcon=ED76
batteryIcon=E992
criticalIcon=E91A
pluggedIcon=ED90
;EB8A
vMutedIcon=EF71
vB50Icon=EF6F
vA50Icon=EF73
brightIcon=EED0
wifiIcon=EF8E
likedIcon=EC1B
unlikedIcon=EC1C

noPacEmojiIcon=[\xEAFA]
;EAF8
noPacAppIcon=[\xEDBC]
;EDC4
;EC02
noPacFocusIcon=[\xEDBD]
;EDC5
;EC01

yesPacEmojiIcon=󰮯
yesPacFocusIcon=󰊠
yesPacAppIcon=
ghostHoverIcon=󱙝

;custom icons
;unassigned apps will use focusIcon

CodeIcon=[\xEB46]
chromeIcon=[\xEA3B]
firefoxIcon=[\xEB83]
msedgeIcon=[\xEAE6]
discordIcon=[\xEAC0]
spotifyIcon=[\xEABF]
notepadIcon=[\xEF0C]
;EEAA
explorerIcon=[\xEB96]
powershellIcon=[\xEEF3]
WindowsTerminalIcon=#powershellIcon#
rainmeterIcon=[\xEAE0]
GithubDesktopIcon=[\xEBE7]

;do not edit the following:

;initialise vars

programRunning0=0
programRunning1=0
programRunning2=0
programRunning3=0
programRunning4=0
programRunning5=0
programRunning6=0
programRunning7=0
programRunning8=0
programRunning9=0

[programName0]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName1]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName2]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName3]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName4]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName5]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName6]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName7]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName8]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1

[programName9]
measure=string
string=[#[#[#currentSection]]Icon]
regexpsubstitute=1
substitute="^\[#.*Icon\]$":"[#[&pacMode]appIcon]"
dynamicvariables=1
disabled=1
