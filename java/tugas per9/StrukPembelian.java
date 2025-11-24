import java.util.Scanner;

public class StrukPembelian {
    public static void main(String[] args) {

        String nama = "Buku";
        int harga = 10000;
        int jumlah = 3;

        int total = harga * jumlah;

        double diskon;
        if (total > 27600) {
            diskon = total * 0.06;  // 6% → 1 angka terakhir NIM = 6
        } else {
            diskon = 0;
        }

        double total_bayar = total - diskon;

        System.out.println("\n===== STRUK PEMBELIAN =====");
        System.out.println("Nama Barang   : " + nama);
        System.out.println("Harga Satuan  : " + harga);
        System.out.println("Jumlah Beli   : " + jumlah);
        System.out.println("Total Harga   : " + total);
        System.out.println("Diskon        : " + diskon);
        System.out.println("Total Bayar   : " + total_bayar);
        System.out.println("===========================");
    }
}