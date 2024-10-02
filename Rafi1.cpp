#include <iostream>

using namespace std;

int main() {
    string nama;
    int nilai;

    cout << "Seleksi Nilai Murid Yang Gak Ikut Remidial";
    cout << endl << endl;

    cout << "Masukkan Nama Kamu: ";
    getline(cin, nama);
    cout << endl;
    cout << "Masukkan nilai kamu: ";
    cin >> nilai;

   
    if (nilai >= 75) {
        cout << "Selamat, " << nama << " Nilai Kamu bagus " << endl;
    } else {
        cout << "Maaf " << nama << " nilai Kamu jelek jadi  harus mengikuti remidi untuk perbaiki nilai" << endl;
    }

    return 0;
}
