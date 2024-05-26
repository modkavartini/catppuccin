[units]
measure=calc
formula=[#useImperial]
substitute="0":"m","1":"e"

[Variables]

; NOTE that Location Codes like USVA0944 or other types of codes are no longer supported.

; You must use location Latitude and Longitude.

; You can right click the skin and select "Choose location" to use a litle skin I wrote.
; Simply type any search string into "Search For Location", hit Enter, then click
; the magnifying glass at the bottom left.
; Once you have found the location you want, click on the Latitude,Longitude numbers
; on the right to set that value and refresh the main weather skin.
; Click the Name of the location on the left to see the location on a map in your browser.
; 
; These values can also be found manually for your location at:
; https://nominatim.openstreetmap.org/search.php?q=Your Address Text&format=json
; Where "Your Address Text" can be pretty much anything that can zero in on the location you want.
; https://nominatim.openstreetmap.org/search.php?q=Fort Hunt, Virginia&format=json
; https://nominatim.openstreetmap.org/search.php?q=22308&format=json
; https://nominatim.openstreetmap.org/search.php?q=The White House, Washington D.C.&format=json
; Then copy the lat: and lon: values from that site and paste them below.
; Other alternative sites to get the latitude / longitude are:
; https://support.google.com/maps/answer/18539
; https://www.latlong.net/
; https://www.mapcoordinates.net

InputSearch=ohio
Latitude=9.599438
Longitude=76.553999

;Center of the US
;Latitude=39.50
;Longitude=-98.35
;Alexandria
;Latitude=38.714
;Longitude=-77.067
;Fort Hunt, Virginia
;Latitude=38.723249
;Longitude=-77.069950
;Auburn, Alabama
;Latitude=32.5971687
;Longitude=-85.5565993
;Tokyo, Japan
;Latitude=35.682838
;Longitude=139.759454

; Language used for string and date values returned in the data.
; If another language is desired the correct code can be found at:
; https://admin.rainmeter.net/LanguageCodes.php
; For example, French as used in France would be Language=fr-FR

Language=en-US
;Language=fr-FR
;Language=hu-HU

; Units of measure. This must be one of the following lower case letters:
; e		This is "Imperial", using Fahrenheit for temperatures.
; m		This is "Metric", using Celsius for temperatures.
; h		This is "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.

Units=[&units]
;Units=e
;Units=h

; How often to update the weather information. Default and recommended is 600, which would be 10 minutes.

UpdateRate=6000

; Date and time formats you desire.
; See https://docs.rainmeter.net/manual/measures/time/#FormatCodes 
; For formatting codes to use.

DateFormat=%A, %B %#d, %Y
TimeFormat=%#I:%M %p

; Don't change any below here.

APIKey=71f92ea9dd2f4790b92ea9dd2f779061
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.131 Safari/537.36 Edg/92.0.902.67

CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://api.weather.com/v3/aggcommon/v3-wx-observations-current;v3-wx-forecast-daily-15day;v3alertsHeadlines;v3-location-point?format=json&geocode=#Latitude#,#Longitude#&units=#Units#&language=#Language#&apiKey=#APIKey#
