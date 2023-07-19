function setInline {
    $RmAPI.Bang("!setoptiongroup date inlinesetting2 none")
    $inline=$RmAPI.VariableStr("iSetting")
    for($d=0; $d -lt 43; $d++) {
        $date=$RmAPI.VariableStr("$d")
        $sDate=$RmAPI.Measure("setDate")
        $mEnd=$RmAPI.Measure("mEnd")
        $calc=($d-$sDate)
        $mMonth=$RmAPI.Variable("mMonth")
        $eText=$RmAPI.VariableStr("$date" + ".$mMonth")
        if($null -notMatch [regex]::escape($eText)) {
            if(($calc -ge $mEnd) -or ($calc -gt 31) -or ($calc -lt 1)) {
                $RmAPI.Bang("!setoption $d inlinesetting2 none")
            }
            else {
                $RmAPI.Bang("!setoption $d inlinesetting2 $inline")
            }
        }
    }
}