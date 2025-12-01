import java.util.Scanner;

public class ATM {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String nama, cek; 
        String nim;
        int saldo;

        // ==== INPUT NAMA + VALIDASI TRUE / FALSE ====
        while (true) {
            System.out.print("Masukkan nama: ");
            nama = in.nextLine();

            System.out.print("Apakah nama sudah benar? (TRUE/FALSE): ");
            cek = in.nextLine();

            if (cek.equalsIgnoreCase("TRUE")) {
                break;
            } else {
                System.out.println("Nama salah! Masukkan lagi...\n");
            }
        }

        // ==== INPUT NIM → KONVERSI MENJADI SALDO ====
        System.out.print("Masukkan NIM (angka saja): ");
        nim = in.nextLine();
        saldo = Integer.parseInt(nim);  // saldo = NIM

        // ==== TAMPILKAN DATA AWAL ====
        System.out.println("\n=== DATA AWAL ===");
        System.out.println("Nama : " + nama);
        System.out.println("Saldo: Rp " + saldo + "\n");

        // ==== MENU ATM (SWITCH–CASE) ====
        while (true) {
            System.out.println("===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");
            System.out.print("Pilih: ");

            int pil = in.nextInt();

            switch (pil) {
                case 1:
                    System.out.println("Saldo kamu: Rp " + saldo + "\n");
                    break;

                case 2:
                    System.out.print("Nominal tarik: ");
                    int tarik = in.nextInt();
                    if (tarik <= saldo) {
                        saldo -= tarik;
                        System.out.println("Tarik tunai berhasil!\n");
                    } else {
                        System.out.println("Saldo tidak cukup!\n");
                    }
                    break;

                case 3:
                    System.out.print("Nominal setor: ");
                    int setor = in.nextInt();
                    saldo += setor;
                    System.out.println("Setor tunai berhasil!\n");
                    break;

                case 4:
                    System.out.print("Nominal transfer: ");
                    int tf = in.nextInt();
                    if (tf <= saldo) {
                        saldo -= tf;
                        System.out.println("Transfer berhasil!\n");
                    } else {
                        System.out.println("Saldo tidak cukup!\n");
                    }
                    break;

                case 5:
                    System.out.println("Terima kasih telah menggunakan ATM!");
                    return;

                default:
                    System.out.println("Pilihan tidak valid!\n");
            }
        }
    }
}