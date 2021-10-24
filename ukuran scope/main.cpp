#include <iostream>

using namespace std;

int x =10;

int ambil_angka_global(){
return x;
}

int ambil_angka_lokal(){
int x =2;
return x;
}


int main (){
    cout<<"angka global"<<endl;
    cout<<x<<endl;
    cout<<"dalam main tapi sebelum tipe data baru"<<endl;
    cout<<x<<endl;
    cout<<"dalam main tapi suda ada tipe data baru"<<endl;
    int x = 8;
    cout<<x<<endl;
    cout<<"ambil nilai fungsi angka global"<<endl;
    cout<<ambil_angka_global()<<endl;
    cout<<"ambil nilai fungsi angka lokal"<<endl;
    cout<<ambil_angka_lokal()<<endl;
    {
        cout<<"angka lokal main di block"<<endl;
        cout<<x<<endl;
        cout<<"angka lokal pada block "<<endl;
        int x = 2;
        cout<<x<<endl;
    }



}
