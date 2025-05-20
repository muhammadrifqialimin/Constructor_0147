#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string NamaBarang;
    string KodeBarang;

public:
    Barang(string nama, string kode) {
        NamaBarang = nama;
        KodeBarang = kode;
    }

    void display() {
        cout << "Nama Barang : " << NamaBarang << endl;
        cout << "Kode Barang : " << KodeBarang << endl;
    }
};

int main() {
    // Membuat objek dengan parameter string
    Barang Barang1("MesinCuci", "BRG010");
    Barang Barang2("BomCar", "BRG020");

    cout << "Barang 1:" << endl;
    Barang1.display();

    cout << "\nBarang 2:" << endl;
    Barang2.display();

    return 0;
}