function setInline {
    $RmAPI.Bang("!setoptiongroup date inlinesetting none")
    $inline=$RmAPI.VariableStr("iSetting")
    $sDate=$RmAPI.Measure("setDate")
    $mEnd=$RmAPI.Measure("mEnd")
    $mMonth=$RmAPI.Variable("mMonth")
    for($d=0; $d -lt 43; $d++) {
        $date=$RmAPI.VariableStr("$d")
        $eText=$RmAPI.VariableStr("$date" + ".$mMonth")
        if($null -notMatch [regex]::escape($eText)) {
            $RmAPI.Bang("!setoption $d inlinesetting $inline")
            if((($d-$sDate) -ge $mEnd) -or (($d-$sDate) -gt 31) -or (($d-$sDate) -lt 1)) {
                $RmAPI.Bang("!setoption $d inlinesetting none")
            }
        }
    }
}

$varPath=$RmAPI.VariableStr("@") + "inc\var.inc"
set-Content $varPath (get-Content $varPath | select-String -pattern "^(\d|\d\d)\.(\d|\d\d)=$" -notMatch)
