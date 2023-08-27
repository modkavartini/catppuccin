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

;meneww

p0.Name=GH
p1.Name=YT
p2.Name=RD
p3.Name=DA

p0.Action=https://github.com/
p1.Action=https://www.youtube.com/
p2.Action=https://www.reddit.com/
p3.Action=https://www.deviantart.com/

folder1=home
folder2=downloads
folder3=music
folder4=pictures
folder5=wallpapers

folder1Path=Shell:MyComputerFolder
folder2Path=Shell:Downloads
folder3Path=Shell:My Music
folder4Path=Shell:My Pictures
folder5Path=Shell:Downloads\Wallpapers