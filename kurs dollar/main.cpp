#include <iostream>

using namespace std;

int main()
{
    // kurs dollar 
    int p;
    int jumlah;
    int hasil;
    while(true){
    cout<<"Selamat Datang di tempat penukaran rupiah"<<endl;
    cout<<"Silahkan pilih nominal uang yang kamu punya "<<endl;
    cout<<"Mata Uang Yang Tersedia : "<<endl;
    cout<<"1. USD"<<endl;
    cout<<"2. Yuan "<<endl;
    cout<<"3. Euro"<<endl;
    cout<<"4. Won"<<endl;
    cout<<"Masukan pilihan mata uang mu :";cin>>p;
    cout<<"Masukan Jumlah Uang mu :";cin>>jumlah;

    switch (p)
    {
    case 1 :
        hasil=jumlah*14300;
        break;
    case 2 :
        hasil =jumlah*2200;
        break;
    case 3: 
        hasil= jumlah*17000;
        break;
    case 4 :
        hasil= jumlah*12;
        break;
    default:
        cout<<"Maaf anda salah masukan pilihan, silahkan coba lagi :)";
        break;
    }
    cout<<"Total Uang kamu setelah di convert ke rupiah adalah : "<<endl;
    cout<<"Rp"<<hasil;
    }
    return 0;
}
