;do not for the love of god change anything in here.
;thank you.

[variables]
currentVer=1.2.0

[latestVer]
measure=webparser
url=https://raw.githubusercontent.com/modkavartini/catppuccin/main/latest.txt
regexp=(?siU)version=(.*)\n(.*)$
stringindex=1
substitute="":"#currentVer#"
updaterate=3000
dynamicvariables=1

[cVerNum]
measure=string
string=#currentVer#
regexpsubstitute=1
substitute="\.":""
dynamicvariables=1

[lVerNum]
measure=string
string=[&latestVer]
regexpsubstitute=1
substitute="\.":""
dynamicvariables=1

[hasUp]
measure=calc
formula=[&lVerNum]>[&cVerNum]?1:0
dynamicvariables=1
