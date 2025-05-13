#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa (int iNim, string iNama);
    void cetak ();

};

mahasiswa::mahasiswa(){
}

mahasiswa::mahasiswa(int iNim){
    nim = iNim;
}

mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama){
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak(){

    cout << endl << "Nim = " << nim <<endl;
    cout << "Nama = " << nama <<endl;
}

int main(){
    mahasiswa mhs1(102030);
    mahasiswa mhs2("kyy");
    mahasiswa mhs3(102003, "Mas");

    cout << "mahasiswa 1:"; mhs1.cetak();
    cout << "mahasiswa 2:"; mhs2.cetak();
    cout << "mahasiswa 3:"; mhs3.cetak();

    return 0;
}