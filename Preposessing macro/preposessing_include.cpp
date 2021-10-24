/*
seperti sebelumnya bahwa fungsi include itu mengambil 
library yang di tulis berupa preposessing maupun fungsi atau main baru 
*/
#include<iostream>
#include "library.h"
// mengambil preposessing dari library.h
/*
alur include / program c++ itu 
[buat library yg isinya fungsi2 atau preposessing]--> diinclude kan #include --> lalu dipanggil kembali pada jendela utama/ fungsi int main()
---> agar bisa dikompile di compiler c++
*/
using namespace std;

int main (){
    // panggil dari preposessing dari library.h
    cout<<"Nama: "<<NAMA<<endl;
    cout<<"Kuadrat: "<<KUADRAT(5)<<endl;
    cout<<"Angka: "<<ANGKA(5,6)<<endl;
    // cout<<"halo dunia"<<endl;
};
