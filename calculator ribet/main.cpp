#include <iostream>

using namespace std;

int main(){
float a,b, hasil;
char aritmatika;

cout<<"=====Selamat datang di calculator apa adanya====="<<endl;
cout<<"\nSilahkan Masukan Nilai yang kamu ingin kan\t\t\t\t\t"<<endl;
cout<<"\nMasukan angka pertama: ";cin>>a;
cout<<"\npilih operatornya (+,-,*,/): ";cin>>aritmatika;
cout<<"\nMasukan angka kedua: ";cin>>b;

cout<<"\nHasilnya adalah: \n\n";

  switch(aritmatika){
case '+':
    hasil = a+b;
    break;
case '-':
    hasil = a-b;
    break;
case '*':
    hasil = a*b;
    break;
case '/':
    hasil = a/b;
    break;
default :
  cout<<"anda salah memasukan operasi bilangan"<<endl;
  }
cout<<"===================="<<endl;
cout<<" "<<a<<aritmatika<<b<<" = "<<hasil<<endl;
cout<<"===================="<<endl;
return 0;
}
