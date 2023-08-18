[programOptions0]
measure=plugin
plugin=programoptions
indexes=#maxAppCount#
updatedivider=-1
disabled=(#appsDisp#=1?([#pinnedApps]):1)

[programOptions1]
measure=plugin
plugin=programoptions
indexes=#maxAppCount#
additionaldependencies=#@#pinned
updatedivider=-1
disabled=(1-([#appsDisp]*[#pinnedApps]))