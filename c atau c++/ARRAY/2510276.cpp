#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    // Ubah tiap karakter jadi digit
    vector<int> digit;
    for (char c : nim) {
        digit.push_back(c - '0');
    }

    // Hitung total
    int total = 0;
    for (int d : digit) total += d;

    // Cari maks & min
    int maks = digit[0];
    int mins = digit[0];
    for (int d : digit) {
        if (d > maks) maks = d;
        if (d < mins) mins = d;
    }

    // Rata-rata
    float rata = (float)total / digit.size();

    // Tampilkan
    cout << "Array digit: ";
    for (int d : digit) cout << d << " ";
    cout << endl;

    cout << "Total digit = " << total << endl;
    cout << "Digit maksimum = " << maks << endl;
    cout << "Digit minimum = " << mins << endl;
    cout << "Rata-rata = " << rata << endl;

    // Reverse array
    cout << "Reverse array: ";
    for (int i = digit.size()-1; i >= 0; i--)
        cout << digit[i] << " ";
    cout << endl;

    return 0;
}
