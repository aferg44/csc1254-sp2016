<?php

function hex_of($n) {
       if ($n==0)  return "00";
  else if ($n< 9)  return (string)10*$n+$n;
  else if ($n==10) return "AA";
  else if ($n==11) return "BB";
  else if ($n==12) return "CC";
  else if ($n==13) return "DD";
  else if ($n==14) return "EE";
  else             return "FF";
}

function hex($r,$g,$b) {
  return hex_of($r) . hex_of($g) . hex_of($b);
}

echo "<html><table>\n";
for ($i=0; $i<16; $i++)
  for ($j=0; $j<16; $j++)
    for ($k=0; $k<16; $k++)
      echo "  <tr><td>".hex($i,$j,$k)."</td><td width=16px bgcolor=".hex($i,$j,$k)."></tr>\n";
echo "\n</table></html>\n";

?>
