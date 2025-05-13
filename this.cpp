#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
    string setget(string jdl)
    {
        this->judul = jdl;
        return this->judul;
    }
};

int main()
{
    buku bukunya;
    cout<<bukunya.setget("matematika");
    return 0;
}