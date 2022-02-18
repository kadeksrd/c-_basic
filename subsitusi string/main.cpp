#include <iostream>
#include <string>

using namespace std;

int main (){

string kalimat_a("aku suka siapa ? dia?");
string kalimat_b("nippon pain!");
cout<<"kalimat awal"<<endl;
cout<<"1: "<<kalimat_a<<endl;
cout<<"2: "<<kalimat_b<<endl;

cout<<endl;
//menganti posisi kalimat
//dengan nama_string1.swap(nama_string2);
kalimat_a.swap(kalimat_b);
cout<<"kalimat swap"<<endl;
cout<<"1: "<<kalimat_a<<endl;
cout<<"2: "<<kalimat_b<<endl;

cout<<endl;
//note posisi nya kalimat_a jadi kalimat_b begitu juga sebalikanya


//replace/mengganti string
//nama_string.replace(index,panjang kalimat sebelumnya, string kalimat yang diganti)
cout<<"mengganti kalimat"<<endl;
cout<<"1: "<<kalimat_b.replace(17,3,"puput")<<endl;
//replace and find string
//cara 1

/*
int ganti =kalimat_a.find("pain");
cout<<"2: "<<kalimat_a.replace(ganti,4,"cat ")<<endl;
*/

//cara 2

cout<<"2: "<<kalimat_a.replace(kalimat_a.find("pain"),4,"cat ")<<endl;
cout<<endl;
//insert string
//nama_string(index,"kata yang di insert")
cout<<"Kalimat insert"<<endl;

kalimat_b.insert(23," ah masa?");
cout<<"1: "<<kalimat_b<<endl;

kalimat_a.insert(12," pain kali!");
cout<<"2: "<<kalimat_a<<endl;

}
