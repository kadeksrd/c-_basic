#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct barang{
    string nama_barang;
    string jenis_barang;
    string berat;
    int harga;

};



int main()
{
    barang mesran_super;
    ofstream barang_bengkel;
    barang_bengkel.open("data.txt", ios::app);
    cout<<"masukan barang: ";getline(cin,mesran_super.nama_barang);
    cout<<"jenis barang: ";cin>>mesran_super.jenis_barang;
    cout<<"masukan harga: ";cin>>mesran_super.harga;
    cout<<"masukan berat: ";cin>>mesran_super.berat;

    barang_bengkel<<mesran_super.nama_barang<<endl;
    barang_bengkel<<mesran_super.jenis_barang<<endl;
    barang_bengkel<<mesran_super.harga<<endl;
    barang_bengkel<<mesran_super.berat<<endl;


    barang_bengkel.close();

    return 0;
}


