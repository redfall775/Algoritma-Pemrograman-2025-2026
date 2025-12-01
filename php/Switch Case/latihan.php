<?php

// Nama & NIM langsung tercantum di kode
$nama = "M Rizki Abdullah";
$nim  = "2510276";
$saldo = (int)$nim; // Saldo = 2.510.276

echo "=== DATA AWAL ===\n";
echo "Nama : $nama\n";
echo "NIM  : $nim\n";
echo "Saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";

while (true) {
    echo "===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";
    echo "Pilih: ";

    $pil = trim(fgets(STDIN));

    switch ($pil) {

        case 1:
            echo "Saldo kamu: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case 2:
            echo "Nominal tarik: ";
            $tarik = trim(fgets(STDIN));
            if ($tarik <= $saldo) {
                $saldo -= $tarik;
                echo "Tarik tunai berhasil!\n\n";
            } else {
                echo "Saldo tidak cukup!\n\n";
            }
            break;

        case 3:
            echo "Nominal setor: ";
            $setor = trim(fgets(STDIN));
            $saldo += $setor;
            echo "Setor tunai berhasil!\n\n";
            break;

        case 4:
            echo "Nominal transfer: ";
            $tf = trim(fgets(STDIN));
            if ($tf <= $saldo) {
                $saldo -= $tf;
                echo "Transfer berhasil!\n\n";
            } else {
                echo "Saldo tidak cukup!\n\n";
            }
            break;

        case 5:
            echo "Terima kasih telah menggunakan ATM!\n";
            exit;

        default:
            echo "Pilihan tidak valid!\n\n";
    }
}
?>