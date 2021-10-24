#include <iostream>

using namespace std;


//fungsi faktorial
int faktorial (int a){
 if (a<=1){
    cout<<a;
    return a;
 }
 else{
 cout<<a<<"*";
 return a*faktorial(a-1);
 }
}

int main (){
    int angka;
    int hasil;
    int angka1,angka2;
    cout<<"silahkan masukan angka yang ingin di faktorialkan: ";cin>>angka;
    hasil=faktorial(angka);
    cout<<"\nhasilnya adalah "<<hasil<<endl;
}
