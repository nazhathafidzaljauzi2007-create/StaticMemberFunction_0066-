#include <iostream>
using namespace std;

class Mahasiswa // membuat class mahasiswa
{
public:
    static int nim; // deklarasi variabel static yaitu variabel nim
    // deklarasi variabel memeber
    int id;
    string nama;

    // deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

    // pembuatan construct
    {
        cout << "ID : " << id << endl;
        cout << "Nama : " << nama << endl;
        cout << "NIM : " << nim << endl;
    }
}