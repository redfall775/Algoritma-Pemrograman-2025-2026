<?php
$nim = readline("Masukan NIM: ");

$digit = str_split($nim);
$digit = array_map('intval', $digit);

$total = array_sum($digit);

$maks = max($digit);
$minim = min($digit);

$rata = $total / count($digit);

$rev = array_reverse($digit);

echo "digit        : ";
print_r($digit);
echo "total        = $total\n";
echo "maksimum     = $maks\n";
echo "minimum      = $minim\n";
echo "rata-rata    = $rata\n";
echo "reverse array: ";
print_r($rev);
?>