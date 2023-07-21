;manual editing of these values is not advised.
;use the included settings skin for customisation.
;if you still wish to proceed, do so with caution.

[variables]
@include=#@#inc\flavors.inc

accent=6
;0-13
;rosewater, flamingo, pink, mauve, red, maroon, peach, yellow, green, teal, sky, sapphire, blue, lavender

flavor=3
;0-3
;latte, frappe, macchiato, mocha

font=JetBrains Mono
bTextSize=12
fontW=500
iconW=400
bCorner=15
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
reservedSpace=100
reservedAt=TOP
;dynamic var

infoGap=26
iconGap=(#infoGap#-19)
spaces=\s

sensitivity=35
;the sensitivity of the visualiser
barWidth=8
maxBarHeight=20
;if you add -ve to this value, the vis will be inverted :)
minHeight=0
barYPadding=#maxBarHeight#
bGap=1
avgSize=5
div=3

appGap=15
popupGap=10
childGap=10

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

rSpace=0
direction=0
tFormat=0
td=0
wifiName=0
iconHide=0
titleS=1
tPopup=1

visDisp=1
wifiDisp=1
brightDisp=0
volumeDisp=1
batteryDisp=1
cpuDisp=1
ramDisp=1

nullmTitle0=in my h3ad
nullmArtist=the voices
tAS=:\s

25.12=merry christmas!
1.1=happy new year!
31.12=new year's eve
20.7=
21.7=click a date to add an event!
