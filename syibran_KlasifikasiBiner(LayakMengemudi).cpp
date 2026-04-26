#include <iostream>
using namespace std;

string cekKelayakan(int umur, string punyaSIM, string sehat) {
    if (umur >= 17 && punyaSIM == "ya" && sehat == "ya") {
        return "Layak Mengemudi";
    } else {
        return "Tidak Layak Mengemudi";
    }
}

int main() {
    int umur;
    string punyaSIM, sehat;
    
    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "Apakah punya SIM? (ya/tidak): ";
    cin >> punyaSIM;

    cout << "Apakah sehat? (ya/tidak): ";
    cin >> sehat;

    string hasil = cekKelayakan(umur, punyaSIM, sehat);
    cout << "Hasil: " << hasil << endl;

    return 0;
}