[variables]
@include=#@#Inc\flavors.inc

accent=4
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
maxAppCount=10
;can only be reduced

;bar variables

updateRate=2
incDecVal=5

iconSize=(#bTextSize#+2)
xPadding=20
edgePadding=#xPadding#
yPadding=#xPadding#
bWidth=(#workAreaWidth#-(#xPadding#*2))
bHeight=60
infoGap=27
iconGap=7

sensitivity=35
;increase this by very law
barWidth=8
maxBarHeight=(#bHeight#-40)
minHeight=0
barYPadding=#maxBarHeight#
gap=(#barWidth#+1)
avgSize=5

nextAnim=0

appGap=15
menuSpawnGap=#yPadding#
childSpawnGap=(#yPadding#/2)

;do not change->

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

stkW=0
stkColor=#sColor#

tFormat=0
td=0
wifiName=0
iconHide=1

visDisp=1
wifiDisp=1
brightDisp=1
volumeDisp=1
batteryDisp=1
cpuDisp=1
ramDisp=1
