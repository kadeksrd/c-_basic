#include <iostream>

using namespace std;

int main(){
// aplikasi gaji karyawan
    char pilihan;
    int jam,penghasilan,total_upah;
    string nama;
    menu;
    cout<<"Selamat datang di aplikasi hitung gaji\n\n\n";
    cout<<"silahkan masukan nama: ";
    getline(cin,nama);
    cout<<"Silahkan pilih golongan karyawan (A,B,C): ";cin>>pilihan;
    cout<<"Silahkan Masukan Banyaknya jam kerja: ";cin>>jam;
    cout<<"\n\n";

    switch (pilihan){
    case 'A':
        penghasilan=jam*5000;
    break;
    case 'B':
        penghasilan=jam*8000;
    break;
    case 'C':
        penghasilan=jam*10000;
    break;
    default :
     cout<<"Anda salah memasukan data silahkan coba kembali!";
     goto menu;
    }
   if(jam>=50){
    total_upah= penghasilan+(jam-48)*4000;
    }
    else if(jam<50){
    total_upah= penghasilan;
    }
    else{
        cout<<"ANDA SALAH MENGIMPUT DATA SILAHKAN COBA LAGI";
        goto menu;
    }
    cout<<"Nama"<<"||"<<"Golongan "<<"||"<<"Penghasilan"<<endl;
    cout<<nama<<"||\t"<<pilihan<<"\t||"<<"Rp. "<<total_upah<<endl;

   }


