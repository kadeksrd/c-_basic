#include <iostream>
#include <string>
using namespace std;



/*
auto merupakan suatu tipe data yang menyatukan semua tipe data 
yang ada di c++ 

fungsinya mirip dengan var pada javascript


*/
template <typename I, typename J>

I perkalian (I bil1, J bil2){
    return bil1*bil2;
}

template <typename A, typename B>

A max(A angka1, B angka2){
    return (angka1>angka2) ? angka1 : angka2;
}


int main (){
    auto angka = perkalian(3.14,2);
    // kalo ditulis d maka tipe data jadinya double
    cout<<"tipe data angka"<<typeid(angka).name()<<endl;
    cout<<"perkalian 2 bil: "<<angka<<endl;
    float a = 2.32312;
    double b= 2.2323;
    auto j= max(a,b);
    cout<<"tipe data:"<<typeid(j).name()<<endl;
    // kalo ditulis f maka float
    cout<<"perbadingan 2 bil float 2.32 dan double 2.23 : "<<j<<endl;
    // kenapa pilih float karna float nilainya lebih besar dibanding double.
    auto nama("kadek");
    cout<<"tipe data pada nama: "<<typeid(nama).name()<<endl;
    // kalo ditulis pkc berarti string 
    cout<<"nama: "<<nama<<endl;
}
