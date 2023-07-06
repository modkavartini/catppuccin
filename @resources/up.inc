[variables]
currentVer=1.1.5

[latestVer]
measure=webparser
url=https://raw.githubusercontent.com/modkavartini/catppuccin/main/latest.txt
regexp=(?siU)version=(.*)\n(.*)$
stringindex=1
substitute="":"#currentVer#"
updaterate=3000
dynamicvariables=1

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
