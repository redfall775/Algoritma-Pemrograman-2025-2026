#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nim;
    cout << "masukan nim: ";
    cin >> nim;

    vector<int> digit;
    for (char c : nim) {
        digit.push_back(c - '0');
    }

    // total
    int total = 0;
    for (int d : digit) total += d;

    // max
    int maks = digit[0];
    for (int d : digit)
        if (d > maks) maks = d;

    // min
    int minim = digit[0];
    for (int d : digit)
        if (d < minim) minim = d;

    // rata
    double rata = (double) total / digit.size();

    // reverse
    vector<int> rev;
    for (int i = digit.size() - 1; i >= 0; i--) {
        rev.push_back(digit[i]);
    }

    cout << "digit        : [";
    for (int i = 0; i < digit.size(); i++) {
        cout << digit[i];
        if (i < digit.size() - 1) cout << ", ";
    }
    cout << "]\n";

    cout << "total        = " << total << endl;
    cout << "maksimum     = " << maks << endl;
    cout << "minimum      = " << minim << endl;
    cout << "rata rata    = " << rata << endl;

    cout << "reverse array: [";
    for (int i = 0; i < rev.size(); i++) {
        cout << rev[i];
        if (i < rev.size() - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}