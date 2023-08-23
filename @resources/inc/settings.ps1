$snippetsPath=$RmAPI.VariableStr("@") + "inc\snippets.inc"

function getInfos {
    $s=1
    $currentPage=$RmAPI.Variable("currentPage")
    get-Content $snippetsPath | select-String "^\[.*Disp\]$" -context 1 | where-Object { ($_.Context.PostContext -notmatch "measure") } | forEach-Object {
        $found=$_.Line -replace '\[|Disp\]',''
        $RmAPI.Bang("!setvariable snip$s $found")
        $RmAPI.Bang("!setoption snip$s group `"all|display`"")
        $RmAPI.Bang("!setvariable snip$($s)Disp `"$($found)Disp`"")
        $RmAPI.Bang("!setoption snip$($s)Disp group `"all|display`"")
        $s++
    }
    if($currentPage -ne 2) { break }
    $RmAPI.Bang("!update")
    $RmAPI.Bang("!redraw")
    $RmAPI.Bang("!showmetergroup display")
}
