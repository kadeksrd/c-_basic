#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
    struct Data_mahasiswa{
    string nama;
    int nim;
    string jurusan;
    };




    ofstream myfile;
    //menulis data binary dengan struct
    myfile.open("data.bin",ios::out|ios::binary);
    unsigned int ukuran_nama1;
    unsigned int ukuran_jurusan1;
    Data_mahasiswa mahasiswa1;
    cout<<"masukan nama: ";
    getline(cin,mahasiswa1.nama);
    ukuran_nama1 = mahasiswa1.nama.size();
    cout<<"masukan nim: ";
    cin>>mahasiswa1.nim;
    cout<<"masukan jurusan: ";
    cin>>mahasiswa1.jurusan;
    ukuran_jurusan1 = mahasiswa1.jurusan.size();

   // Pelemparan data NIM ke file 'data.bin', nanti disana jadi biner.
    myfile.write(reinterpret_cast<char*>(&mahasiswa1.nim),sizeof(int));
    //pelemparan ukuran nama dan jurusan ke file 'data.bin', diubah jadi biner.
    myfile.write(reinterpret_cast<char*>(&ukuran_nama1),sizeof(unsigned int));
    myfile.write(reinterpret_cast<char*>(&ukuran_jurusan1),sizeof(unsigned int));
    // Pelemparan data Nama dan jurusan ke file 'data.bin', nanti disana jadi biner.
    myfile.write(reinterpret_cast<char*>(&mahasiswa1.nama[0]),ukuran_nama1);
    myfile.write(reinterpret_cast<char*>(&mahasiswa1.jurusan[0]),ukuran_jurusan1);
    // myfile.write(reinterpret_cast<char*>(&mahasiswa2),sizeof(Data_mahasiswa));
    myfile.close();
}

