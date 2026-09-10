#include <iostream>
using namespace std;
int tambahNilai(int *nilai)
{
    *nilai = 80; 
    cout << nilai <<endl; 
    return 1; 
}

int main()
{
    int nilai = 100;
    cout << nilai << endl; // 100
    tambahNilai(&nilai);
    int nilaiBaru = nilai; 
    cout << &nilai << endl; // 80

    // int nilai = 80;
    // cout << nilai << endl;
    // cout << &nilai << endl;

    // int *ptr = &nilai;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;

    // *ptr = 95;
    // cout << *ptr << endl;

    // int *ptr = nullptr;
    // // int nilai = 80;
    // // ptr = &nilai;
    // // cout << *ptr << endl;
    // if (ptr != nullptr)
    // {
    //     cout << *ptr << endl;
    // }

    // struct Mahasiswa
    // {
    //     string nim;
    //     string nama;
    //     double ipk;
    // };

    // Mahasiswa mhs;

    // Mahasiswa* ptr = &mhs;
    // ptr->nim = "12345";
    // ptr->nama = "Bintang shada";
    // ptr->ipk = 4.00;

    // cout << ptr->nama << endl;
}