#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // Nama & NIM asli yang tertulis dalam kode
    string nama_default = "M Rizki Abdullah";
    string nim_default  = "2510276";

    string nama_input, cek;
    long long nim_input;
    long long saldo;

    // ===== Input nama + TRUE/FALSE =====
    while (true) {
        cout << "Masukkan nama: ";
        getline(cin, nama_input);

        cout << "Apakah nama kamu sudah benar? (TRUE/FALSE): ";
        getline(cin, cek);

        if (cek == "TRUE" || cek == "true" || cek == "True") {
            break;
        } else {
            cout << "Nama salah! Masukkan lagi...\n\n";
        }
    }

    // ===== Input NIM =====
    cout << "Masukkan NIM (angka saja): ";
    cin >> nim_input;

    saldo = nim_input; // Saldo awal dari NIM

    cout << "\n=== DATA AWAL ===\n";
    cout << "Nama Sesuai Input : " << nama_input << endl;
    cout << "Nama Asli (Tertulis di Kode) : " << nama_default << endl;
    cout << "NIM  (Dari Input) : " << nim_input << endl;
    cout << "NIM Asli (Tertulis di Kode) : " << nim_default << endl;
    cout << "Saldo: Rp " << fixed << setprecision(0) << saldo << "\n\n";

    // ===== MENU ATM =====
    while (true) {
        cout << "===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Tarik Tunai\n";
        cout << "3. Setor Tunai\n";
        cout << "4. Transfer\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";

        int pil;
        cin >> pil;

        switch (pil) {

        case 1:
            cout << "Saldo kamu: Rp " << saldo << "\n\n";
            break;

        case 2: {
            long long tarik;
            cout << "Nominal tarik: ";
            cin >> tarik;
            if (tarik <= saldo) {
                saldo -= tarik;
                cout << "Tarik tunai berhasil!\n\n";
            } else {
                cout << "Saldo tidak cukup!\n\n";
            }
            break;
        }

        case 3: {
            long long setor;
            cout << "Nominal setor: ";
            cin >> setor;
            saldo += setor;
            cout << "Setor tunai berhasil!\n\n";
            break;
        }

        case 4: {
            long long tf;
            cout << "Nominal transfer: ";
            cin >> tf;
            if (tf <= saldo) {
                saldo -= tf;
                cout << "Transfer berhasil!\n\n";
            } else {
                cout << "Saldo tidak cukup!\n\n";
            }
            break;
        }

        case 5:
            cout << "Terima kasih telah menggunakan ATM!\n";
            return 0;

        default:
            cout << "Pilihan tidak valid!\n\n";
        }
    }
}