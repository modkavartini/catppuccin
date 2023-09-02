[programOptions0]
measure=plugin
plugin=programoptions
indexes=#maxAppCount#
updatedivider=-1
group=seconds
disabled=(#appsDisp#=1?([#pinnedApps]):1)

[programOptions1]
measure=plugin
plugin=programoptions
indexes=#maxAppCount#
additionaldependencies=#@#pinned
updatedivider=-1
group=seconds
disabled=(1-([#appsDisp]*[#pinnedApps]))