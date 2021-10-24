#include <iostream>
#include <string>

using namespace std;

int main (){

string kalimat_a("aku naik gunung");
string kalimat_b("dia naik juga");

cout<<"menampilkan string"<<endl;
cout<<kalimat_a<<endl;
cout<<kalimat_b<<endl;
cout<<"\n";
//substring mengambil string di tengah(.substr)
//nama_string.substr(index,panjang)
cout<<"mengambil string"<<endl;
cout<<kalimat_a.substr(4,4)<<endl;
cout<<kalimat_b.substr(9,4)<<endl;
cout<<"\n\n";
//mencari posisi dari substring (.fing)
//nama_string.find(nama string yang ingin dicari posisinya)
cout<<"mencari posisi substring"<<endl;
cout<<"kalimat \"gunung\" ada di posisi: "<<kalimat_a.find("gunung")<<endl;
cout<<"kalimat \"dia\" ada di posisi: "<<kalimat_b.find("dia")<<endl;
//note : posisi yang terbaca hanya huruf awalnya aja misal posisi g pada gunung ada di 9 maka itu hasilnya
cout<<endl;
//mencari posisi yang hurufnya double
cout<<"mencari posisi huruf yang double"<<endl;
int j=kalimat_a.find("n");
//mencari huruf n pertama
cout<<"mencari huruf n pertama"<<endl;
cout<<j<<endl;
//mencari huruf n kedua
//kalimat_a.find(huruf yang dicari, nilai sebelumnya+1)
cout<<"mencari huruf n kedua"<<endl;
cout<<kalimat_a.find("n",j+1)<<endl;

//mencari string dari belakang jadi saat kata double yang di cari yang kedua terlebih dahulu yang utama di lewati
cout<<"mencari kata dari belakang dahulu"<<endl;
cout<<kalimat_a.rfind("u");
return 0;
}
