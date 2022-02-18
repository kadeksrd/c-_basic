#include <iostream>
#include <string>

using namespace std;


int main (){

int angka;
string output;

/*
if (angka<10){
    output=hasil_1;
}
else{
    output=hasil_2;
}
cout<<output<<endl;
*/

//ternary operation
//hasil = (Kondisi) ? IF TRUE : ELSE FALSE

for (int i=1; i<=10; i++){
cout<<"masukan angka: ";
cin>>angka;
output = (angka>10) ? "benar" : "salah";

cout<<output<<endl;

}

}
