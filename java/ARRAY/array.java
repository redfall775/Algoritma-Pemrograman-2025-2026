import java.util.Scanner;
import java.util.ArrayList;

public class array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.print("Masukan NIM: ");
        String nim = in.nextLine();

        ArrayList<Integer> digit = new ArrayList<>();

        for(char c : nim.toCharArray()) {
            digit.add(c - '0');
        }

        int total = 0;
        for(int d : digit)
            total += d;

        int maks = digit.get(0);
        for(int d : digit)
            if(d > maks) maks = d;

        int minim = digit.get(0);
        for(int d : digit)
            if(d < minim) minim = d;

        double rata = (double) total / digit.size();

        ArrayList<Integer> rev = new ArrayList<>();
        for(int i = digit.size() - 1; i >= 0; i--)
            rev.add(digit.get(i));

        System.out.println("digit        : " + digit);
        System.out.println("total        = " + total);
        System.out.println("maksimum     = " + maks);
        System.out.println("minimum      = " + minim);
        System.out.println("rata-rata    = " + rata);
        System.out.println("reverse array: " + rev);
    }
}
