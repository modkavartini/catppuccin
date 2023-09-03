[@EntireSiteSuperParent]
Measure=WebParser
URL=#URLSite#
UpdateRate=#UpdateRate#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
RegExp=(?s)^(.*)$
StringIndex=1
FinishAction=[!EnableMeasureGroup Parents]
Disabled=(1-#weatherDisp#)
DynamicVariables=1

[@CurrentConditionsParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-observations-current":.*"cloudCoverPhrase":(.*),.*"iconCode":(.*),.*"precip24Hour":(.*),.*"pressureAltimeter":(.*),.*"pressureChange":(.*),.*"pressureTendencyCode":(.*),.*"pressureTendencyTrend":(.*),.*"relativeHumidity":(.*),.*"sunriseTimeLocal":(.*),.*"sunsetTimeLocal":(.*),.*"temperature":(.*),.*"temperatureDewPoint":(.*),.*"temperatureFeelsLike":(.*),.*"temperatureMaxSince7AM":(.*),.*"uvDescription":(.*),.*"uvIndex":(.*),.*"validTimeLocal":(.*),.*"visibility":(.*),.*"windDirection":(.*),.*"windDirectionCardinal":(.*),.*"windGust":(.*),.*"windSpeed":(.*),.*"wxPhraseLong":(.*),.*"wxPhraseMedium":(.*),"wxPhraseShort":(.*)}

[@LocationParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-location-point":.*"latitude":(.*),.*"longitude":(.*),.*"adminDistrict":(.*),.*"adminDistrictCode":(.*),.*"country":(.*),.*"countryCode":(.*),.*"displayName":(.*),

[@CurrentTemperature]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@UnitsTemperature]
Measure=String
String=#useImperial#
Substitute="0":"C","1":"F"

[@CurrentIcon]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^$|44|^na$":"loading","^0$":"tornado","^1$|^2$":"hurricane","^3$|^4$":"thunder","^5$|^7$|13|14|16|41|42|43|46":"ice","^6$|^8$|10|17|18|35":"balls","^9$|11|39|45":"2drops","12|40":"3drops","15|23|24|25":"windy","19|20|21|22":"hazy","26|44":"cloud","27|29|47":"moonC","28|30|34|37|38":"sunC","31":"moonS","32|36":"sun","33":"moon"

[@CurrentConditions]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=23
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^Cloudy$":"Cloudy, with a Chance of Meatballs :O"

[@CurrentFeelsLike]
Measure=WebParser
URL=[@CurrentConditionsParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationName]
Measure=WebParser
URL=[@LocationParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@LocationCountry]
Measure=WebParser
URL=[@LocationParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#