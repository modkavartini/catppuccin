function Initialize()

	measureNumMonitors = SKIN:GetMeasure('numMonitors')
	
end

function Update()
	
	currentMonitor = 1
	numMonitors = measureNumMonitors:GetValue()
	
	currentSkinX = tonumber(SKIN:GetVariable('CURRENTCONFIGX'))
    currentSkinY = tonumber(SKIN:GetVariable('CURRENTCONFIGY'))

	for i = numMonitors, 1, -1 do
		if currentSkinX >= tonumber(SKIN:GetVariable('SCREENAREAWIDTH@'..i)) or currentSkinY >= tonumber(SKIN:GetVariable('SCREENAREAHEIGHT@'..i)) then
			currentMonitor = i
			break
		end
	end
	SKIN:Bang('!SetVariable', 'monIndex', currentMonitor)
	
end