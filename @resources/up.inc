[variables]
currentVer=1.1

[latestVer]
measure=webparser
url=https://raw.githubusercontent.com/modkavartini/catppuccin/main/latest.txt
regexp=(?siU)version=(.*)\n(.*)$
stringindex=1
substitute="":"?"
updaterate=3000
finishaction=[!enablemeasure hasUpR]

[hasUpR]
measure=string
string=[&latestVer]
regexpsubstitute=1
substitute="^((?!#currentVer#).)*$":"1","^#currentVer#$":"0"
dynamicvariables=1

[hasUp]
measure=calc
formula=[&hasUpR]
dynamicvariables=1
disabled=1
