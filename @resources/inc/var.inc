;manual editing of these values is not advised.
;use the included settings skin for customisation.
;if you still wish to proceed, do so with caution.

[variables]
@include=#@#inc\flavors.inc

accent=3
;0-13
;rosewater, flamingo, pink, mauve, red, maroon, peach, yellow, green, teal, sky, sapphire, blue, lavender

flavor=3
;0-4
;latte, frappe, macchiato, mocha, custom

font=JetBrains Mono
bTextSize=12
fontW=400
iconW=400
bCorner=15
pCorner=15
stkW=0

maxAppCount=10
;do not change

updateRate=2
sysIncDecVal=5
appIncDecVal=2

iconSize=14
xPadding=20
edgePadding=20
yPadding=20
bWidth=(#workAreaWidth#-(#xPadding#*2))
bHeight=60
reservedSpace=59

;dynamic vars, do not change
reservedAt=TOP
direction=0

infoGap=26
iconGap=7
spaces=\s

sensitivity=35
barWidth=8
maxBarHeight=(#bHeight#/3)
;if you add -ve to this value, the vis will be inverted :)
minHeight=0
barYPadding=#maxBarHeight#
bGap=1

visSmooth=10
avgSize=(#visSmooth#/2)

appGap=15
popupGap=10
childGap=#popupGap#

;do not change->
barY=0

bgColor=[#bg[#flavor]D]
bgColorL=[#bg[#flavor]L]
mColor=[#m[#flavor]]

sColor=[#c[#accent][#flavor]]

color0=[#c0[#flavor]]
color1=[#c1[#flavor]]
color2=[#c2[#flavor]]
color3=[#c3[#flavor]]
color4=[#c4[#flavor]]
color5=[#c5[#flavor]]
color6=[#c6[#flavor]]
color7=[#c7[#flavor]]
color8=[#c8[#flavor]]
color9=[#c9[#flavor]]
color10=[#c10[#flavor]]
color11=[#c11[#flavor]]
color12=[#c12[#flavor]]
color13=[#c13[#flavor]]

stkColor=#sColor#
noPacEmojiColor=#mColor#,90
yesPacEmojiColor=#color7#
runningAlpha=200
notRunningAlpha=90
pinAlpha=150
dUserID=944986926400811008
userName=modka

dNameType=1
useDiscord=1
pinnedApps=1
hideAnyRepeat=0
centerApps=1
replaceWin=0
hideTaskbar=0
pacMode=1
rSpace=0
tFormat=0
td=0
wifiName=0
iconHide=1
titleS=1
tPopup=1
monStart=1
shadow=1

mediaDisp=1
visDisp=0
wifiDisp=1
brightDisp=1
volumeDisp=1
batteryDisp=1
cpuDisp=1
ramDisp=0

pinIgnore=none|none
player=spotify|youtube
nullmTitle0=in my h3ad
nullmArtist=the voices
tAS=:\s

25.12=merry christmas!
1.1=happy new year!
31.12=new year's eve
