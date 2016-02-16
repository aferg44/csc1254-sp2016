<?php

function mul($i,$j) {
  return $i * $j;
}

echo "<html><table>\n\n";
for ($i=1; $i<=10; $i++) {
  echo "<tr>\n";
  for ($j=1; $j<=10; $j++)
    echo " <td>".mul($i, $j)."</td>\n";
  echo "</tr>\n\n";
}
echo "\n</table></html>\n";

?>
