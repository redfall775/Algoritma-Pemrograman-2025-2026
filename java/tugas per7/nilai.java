importjava.util.Scanner;

public class main{
    public static void main(string{}args) {
        scanner sc = new scanner(System.in);
        System.out.print("Masukan Nilai Tugas:");
        double tugas = sc.nextDouble();
        System.out.print("Masukan nilai UTS:");
        double uts = sc.nextDouble();
        system.out.print("Masukannilai UAS:");
        double UAS = sc.nextDouble();

        double nilai akhir = (0,3*tugas) + (0,3*uts) + (0,4 * uas);

        system.out.println("nilai akhir ="+nilaiAkhir);
        if(nilaiAkhir>=60)
          system.out.println("Status:LULUS");
          else
           system.out.println("Status:TIDAKLULUS");
    }

}