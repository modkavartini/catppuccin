function setInline {
    $RmAPI.Bang("!setoptiongroup date inlinesetting none")
    $inline=$RmAPI.VariableStr("iSetting")
    for($d=0; $d -lt 43; $d++) {
        $date=$RmAPI.VariableStr("$d")
        $sDate=$RmAPI.Measure("setDate")
        $mEnd=$RmAPI.Measure("mEnd")
        $mMonth=$RmAPI.Variable("mMonth")
        $eText=$RmAPI.VariableStr("$date" + ".$mMonth")
        if($null -notMatch [regex]::escape($eText)) {
            $RmAPI.Bang("!setoption $d inlinesetting $inline")
            if((($d-$sDate) -ge $mEnd) -or (($d-$sDate) -gt 31) -or (($d-$sDate) -lt 1)) {
                $RmAPI.Bang("!setoption $d inlinesetting none")
            }
        }
    }
}