#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
mahasiswa(int nim, string nama);
};

mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor dengan parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}