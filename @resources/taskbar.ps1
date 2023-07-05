function setWindowName { # Sets the subprocess names.
    $processCount=$RmAPI.Variable("processCount")
    for($i=0; $i -lt $processCount; $i++) {
        $programCount=$RmAPI.Variable("programsCount$i")
        if($programCount -gt 0) {
            for($j=0; $j -lt $programCount; $j++) {
                $RmAPI.Bang("!setvariable wName0$j$i `"`"`"$null`"`"`" ")
                $RmAPI.Bang("!commandmeasure programOptions SetVariable|wName0$j$i|ChildWindowName|$i|$j")  
            }  
        }
    }
}