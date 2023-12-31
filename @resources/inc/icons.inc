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

loadingIcon=EC89
tornadoIcon=EF10
skullIcon=EE7F
hurricaneIcon=#skullIcon#
thunderIcon=EF02
iceIcon=EE93
ballsIcon=EC0B
2dropsIcon=EADC
3dropsIcon=EC1D
windyIcon=EF95
hazyIcon=ECFB
cloudIcon=EA4F
moonCIcon=ED0F
sunCIcon=EECE
moonSIcon=ED0D
sunIcon=EED0
moonIcon=ED11

;thunder EB8A
;loading EC89, EC8A
;loading less EC91, EC92
;location on map EDEA 
;location pin icon ECCF, ECC5
;search icon EE20, EE24, EE25
;skull EE7F, EE80
;x button round EA45
;x button no bg EA47, EA48

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
pacHoverIcon=󱙝

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
