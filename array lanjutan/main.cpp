#include <iostream>
#include <array>

using namespace std;

int main(){
    //membuat array menggunakan standart library
    //array<int, jumlah array>nama array;
    array<int, 5>nilai;
    //manngil array dengan looping
    for(int i=0; i<=4; i++){
        nilai[i]=i+1;
        cout<<"nilai ["<<i<<"] = "<<nilai[i];
        cout<<" address: "<<&nilai[i]<<endl;
    }
    //ukuran array
    cout<<"ukuran: "<<nilai.size()<<endl;
    //nilai awal array
    cout<<"address awal array : "<<nilai.begin()<<endl;
    //kenapa hasilnya 04 karena akhirnya adalah diujung address array jadi dia 10 geser dikit jadinya 04 dalam hexadesimal
    cout<<"address akhir array : "<<nilai.end()<<endl;
    //nilai dengan memasukan indexnya
    cout<<"address yang dicari adalah: "<<nilai.at(1)<<endl;





}
