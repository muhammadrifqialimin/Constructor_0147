#include <iostream>
using namespace std;

class mahasiswa{ //class
public: //akses modifier
mahasiswa(); //constructor
};


mahasiswa::mahasiswa(){
    cout<<"Constructor Terpanggil"<<endl;  //definisi constructor
};

int main(){
    mahasiswa mhs;
    return 0;
}