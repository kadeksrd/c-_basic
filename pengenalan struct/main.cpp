#include <iostream>
#include <string>

using namespace std;

struct mobil{
    string warna;
    string tipe;
    int harga;
    string jenis;
};

int main (){
    mobil suzuki;
    suzuki.jenis="ertiga";
    suzuki.tipe="GX";
    suzuki.warna="Abu-Metalik";
    suzuki.harga=220;

    cout<<"suzuki"<<endl;
    cout<<"-"<<suzuki.jenis<<endl;
    cout<<"-"<<suzuki.tipe<<endl;
    cout<<"-"<<suzuki.warna<<endl;
    cout<<"-"<<suzuki.harga<<" Juta"<<endl;

    cout<<endl;
    mobil wuling;
    wuling.jenis="almaz";
    wuling.tipe="RS";
    wuling.warna="Abu-Hitam";
    wuling.harga=320;

    cout<<"wuling"<<endl;
    cout<<"-"<<wuling.jenis<<endl;
    cout<<"-"<<wuling.tipe<<endl;
    cout<<"-"<<wuling.warna<<endl;
    cout<<"-"<<wuling.harga<<" Juta"<<endl;


}

