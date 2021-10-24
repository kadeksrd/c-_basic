#include <conio.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    //variabelnya
    int bil1, bil2, pilihan;
    string user;
    float hasil;
    string operasi;
    //tabel pilihan untuk user
    cout<<"\n";
    cobalagi:
    cout<<"\t\t\t=================================\t\t"<<"\n";
    cout<<"\t\t\tSelamat datang di kalkulator hitz\t\t"<<endl;
    cout<<"\t\t\t=================================\t\t"<<"\n\n";
    cout<<"silahkan pilih operatornya\n"<<endl;
    cout<<"1) penjumlahan (+)"<<endl;
    cout<<"2) pengurangan (-)"<<endl;
    cout<<"3) pembagian   (:)"<<endl;
    cout<<"4) perkalian   (x)"<<endl;
    cout<<"5) modulus     ()"<<endl;
    //pilihan user
    cout<<"masukan operator yang kamu pilih: ";
    cin>>pilihan;
    cout<<"\nmasukan angka pertama: ";
    cin>>bil1;
    cout<<"masukan angka kedua: ";
    cin>>bil2;
    //algoritmanya
    switch(pilihan){
    case 1 :
        hasil=bil1+bil2;
        operasi="+";
        break;
    case 2 :
        hasil=bil1-bil2;
        operasi="-";
        break;
    case 3 :
        hasil=bil1/bil2;
        operasi=":";
        break;
    case 4 :
        hasil=bil1*bil2;
        operasi="x";
        break;
    case 5 :
        hasil=bil1%bil2;
        operasi="%";
        break;
   default :
        cout<<"maaf anda salah memasuki angka :("<<endl;
    }
    //hasilnya
    cout<<"\t\t\t=============================="<<endl;
    cout<<"\t\t\t"<<bil1<<" "<<operasi<<" "<<bil2<<" hasilnya adalah:  "<<hasil<<endl;
    cout<<"\t\t\t=============================="<<endl<<"\n\n\n\n";
    cout<<"mau hitung lagi?"<<endl<<"ketik [y] jika ya dan ketik [n] jika tidak"<<endl<<"ketik disini: ";
    cin>>user;
    if(user=="y"||user=="Y"){
        goto cobalagi;
    }
    else if(user=="n"||user=="N"){
        return 0;
    }
}
