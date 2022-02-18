#include <iostream>


using namespace std;

// tempalate adalah fungsi untuk mengubah tipe data agar bisa digunakan di tipe data lain 


// template <typename I>
// void input(I write){
//     cin>>write;
// }

template <typename var>

void print(var objek){

cout<<objek<<endl;

}

template <typename bil1, typename bil2>
// kenapa di fungsinya ditulis bil1 karna kita ingin menggunakan fungsi yang bertipe data bukan fungsi kosong karna tidak ada
// tipe data maka di inisiasikan dengan salah satu template 
bil1 ternary(bil1 a, bil2 b){
    return (a>b) ? a:b;
};

int main (){

print('a');
string b;
cout<<"a dan b besaran mana a:11.9 b:11 ? "<<ternary<double,int>(11.9,11)<<endl;
/*
kenapa pake nama_fungsi<double,int>

karena fungsi ternary pada template 

hanya dibaca int secara default agar bisa membaca tipe data lain maka kita inisialkan templatenya dengan
menulisan fungsi<tipedat1,tipedata2> 

template <typename bil1, typename bil2>

bil1 ternary(bil1 a, bil2 b){
    return (a>b) ? a:b;
};

*/


}