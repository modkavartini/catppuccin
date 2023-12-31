; Styles and background
[AllStyle]
X=(#Padding#*2)
FontSize=11
FontColor=191,242,196,255
FontFace=#font#
ClipString=2
ClipStringH=50
AntiAlias=1
DynamicVariables=1

[MeterBack]
Meter=Image
X=#Padding#
Y=#Padding#
W=#Width#
H=(82 + 0)
SolidColor=#BackgroundColor#

; Controls

[MeterClose]
Meter=String
Group=Controls
MeterStyle=AllStyle
X=(#Width#)
Y=(#Padding#*2)
FontFace=icomoon custom
FontSize=16
FontColor=#mColor#
StringAlign=Right
Text=[\xEA45]
MouseOverAction=[!SetOption MeterClose FontColor "#color4#"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterClose FontColor "#mColor#"][!UpdateMeter *][!Redraw]
LeftMouseUpAction=[!DeactivateConfig]

; Search

[MeterSearchLocationLabel]
Meter=String
MeterStyle=AllStyle
Y=(#Padding# * 2)
FontColor=#Yellow#
FontSize=14
FontWeight=600
Text=Search For Location

[searchContain]
meter=shape
X=(#Padding#*2)
Y=(#Padding# * 2)R
shape=rectangle 0,0,(#Width# - (#Padding# * 3)),21,10 | strokeWidth 0

[MeterSearchBox]
Meter=String
MeterStyle=AllStyle
Text=#InputSearch#
SolidColor=#Yellow#
StringAlign=LeftCenter
X=r
Y=#Padding#r
Padding=10,0,0,0
W=(#Width# - (#Padding# * 3))
H=21
FontColor=0,0,0
LeftMouseUpAction=[!CommandMeasure "MeasureSearchInput" "ExecuteBatch 1"]
container=searchContain

[MeasureSearchInput]
Measure=Plugin
Plugin=InputText
X=([MeterSearchBox:X] + 10)
Y=([MeterSearchBox:Y] + 1)
W=([MeterSearchBox:W] - 25)
H=([MeterSearchBox:H] - 2)
SolidColor=#Yellow#
FontColor=#bgColor#
FontSize=9
FontFace=#font#
DefaultValue=#InputSearch#
FocusDismiss=1
UpdateDivider=-1
Command1=[!WriteKeyValue Variables InputSearch "$UserInput$" "#FileToWrite#"][!Refresh]
