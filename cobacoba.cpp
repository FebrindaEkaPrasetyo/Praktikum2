#include <iostream>

using namespace std;

int main()

{
    double harga = 10000;
    double diskon = 35;
    double jumlahDiskon;
    int harga_setelah_diskon;

    cout << "Input :" << endl;
    cout << "Harga barang (Rp) = " << harga << endl;
    cout << "Diskon barang (%) = " << diskon << endl;

    jumlahDiskon = harga * (diskon / 100);
    harga_setelah_diskon = harga - jumlahDiskon;

    cout << "\nOutput :" << endl;
    cout << "Jumlah diskon      = Rp " << jumlahDiskon << endl;

    return 0;
}