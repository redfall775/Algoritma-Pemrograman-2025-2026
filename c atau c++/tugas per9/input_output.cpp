#include <iostream>
using namespace std;

int main() {
    string nama = "Buku";
    float harga = 10000;
    int jumlah = 3;

    float total = harga * jumlah;
    float diskon;

    if (total > 27600) { 
        diskon = total * 0.6;
    } else {
        diskon = 0;
    }

    float total_bayar = total - diskon;

    cout << "===== STRUK PEMBELIAN =====\n";
    cout << "Nama Barang    : " << nama << endl;
    cout << "Harga Satuan   : " << harga << endl;
    cout << "Jumlah Beli    : " << jumlah << endl;
    cout << "Total Harga    : " << total << endl;
    cout << "Diskon         : " << diskon << endl;
    cout << "Total Bayar    : " << total_bayar << endl;
    cout << "===========================\n";

    return 0;
}