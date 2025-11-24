<?php
$nama = "Buku";
$harga = 10000;
$jumlah = 3;

$total = $harga * $jumlah;

if ($total > 27600) {
    $diskon = $total * 0.6;
} else {
    $diskon = 0;
}

$total_bayar = $total - $diskon;

echo "===== STRUK PEMBELIAN =====<br>";
echo "Nama Barang    : $nama<br>";
echo "Harga Satuan   : $harga<br>";
echo "Jumlah Beli    : $jumlah<br>";
echo "Total Harga    : $total<br>";
echo "Diskon         : $diskon<br>";
echo "Total Bayar    : $total_bayar<br>";
echo "===========================<br>";
?>