#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    menu :
    int gunting,kertas,batu;
    int comp = 1+(rand()%3);
    string hasil;
    int user;
    cout<<"selamat datang di game suit jawa"<<endl;
    cout<<"Silahkan Memilih Pilihannya"<<endl;
    cout<<"1. gunting\n";
    cout<<"2. kertas\n";
    cout<<"3. batu\n";
    cout<<"Silahkan pilih: ";cin>>user;
    //algorithm pilihan comp
    if(user==comp){
        hasil="SERI!";
    }
    else if(comp>user){
        hasil="KOMPUTER MENANG!";
    }
    else if(comp<user){
        hasil="PLAYER MENANG!";
    }
    //cout
    cout<<"HASILNYA ADALAH: "<<hasil<<endl;





}
