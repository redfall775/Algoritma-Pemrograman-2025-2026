#include <iostream> // Untuk cin, cout, endl (Sudah ada di baris 4)
#include <string>   // Tipe data char a[30] lebih baik diganti string di C++

using namespace std;

// HARUS pakai int main()
int main() {
    char a[30] = "---BELAJAR TIPE DATA---";

    short b;
    int c;
    long d;
    float e;
    double f;
    int g = 1;
    int h = 2;

    b = 10000;
    c = 1000000;
    d = 1000000000; // Pastikan angkanya tidak melebihi batas int biasa
    e = 3.12;
    f = 3.12345;

    // Menampilkan hasilnya
    cout << a << endl; // Mencetak string di char array
    cout << "Tipe data short : " << b << endl;
    cout << "Tipe data int : " << c << endl;
    cout << "Tipe data long : " << d << endl;
    cout << "Tipe data float : " << e << endl;
    cout << "Tipe data double : " << f << endl;
    cout << "Tipe data int g : " << g << endl;
    cout << "Tipe data int h : " << h << endl;
    
    // Program harus diakhiri dengan return
    return 0;
} // <--- KURUNG KURAWAL TUTUP WAJIB ADA