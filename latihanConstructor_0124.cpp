#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void tampilkanData() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    Barang barang1("Pulpen", "JHGT17");
    Barang barang2("Motor", "YHEU12");


    cout << "Data Barang 1:" << endl;
    barang1.tampilkanData();

    cout << "Data Barang 2:" << endl;
    barang2.tampilkanData();

    return 0;
}
