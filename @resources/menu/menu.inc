[variables]

shutdownC=#color4#
rebootC=#color12#
sleepC=#color3#
logoffC=#color6#
lockC=#color8#
monitorC=#color7#

shutdownA=["#@#addons\nircmd.exe" exitwin shutdown]
rebootA=["#@#addons\nircmd.exe" exitwin reboot]
sleepA=["#@#addons\nircmd.exe" standby]
logoffA=["#@#addons\nircmd.exe" exitwin logoff]
lockA=["#@#addons\nircmd.exe" lockws]
monitorA=[!commandmeasure screenOff "run"]

afterAction=[!deactivateconfig]

animRate=300

shutdownStk=#iStroke#
rebootStk=#iStroke#
sleepStk=#iStroke#
logoffStk=#iStroke#
lockStk=#iStroke#
monitorStk=#iStroke#

hoverStk=(#iStroke#+#hStroke#)
