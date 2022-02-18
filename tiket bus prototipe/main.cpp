#include <iostream>;
#include <string>;

using namespace std;

struct bus {

string merk;
string tipe;
string karoseri;
string body;
string cc;
string bobot;

};

struct nama_po{

string nama;
string asal;
string tujuan;
int harga;
bus nama_bis1;
bus nama_bis2;
};


int main(){

//deklasrasi data1

bus RK8, OH1626;

RK8.merk ="HINO";
RK8.tipe="R260";
RK8.karoseri="Laksana";
RK8.body="Legacy Sr2";
RK8.bobot="16 TON";
RK8.cc="6000";

OH1626.merk="MERCEDES-BENZ";
OH1626.tipe="OH1626-NG";
OH1626.karoseri="ADI PUTRO";
OH1626.body="JB3-VOYAGER";
OH1626.bobot="16 TON";
OH1626.cc="7000";

nama_po gunung_harta;

gunung_harta.nama ="PO. Gunung Harta";
gunung_harta.asal="Jakarta";
gunung_harta.tujuan="Bali";
gunung_harta.harga=450000;
gunung_harta.nama_bis1=RK8;
gunung_harta.nama_bis2=OH1626;


//tampilin
cout<<"Nama po: "<<gunung_harta.nama<<endl;
cout<<"Asal: "<<gunung_harta.asal<<endl;
cout<<"Tujuan: "<<gunung_harta.tujuan<<endl;
cout<<"Harga: Rp "<<gunung_harta.harga<<endl<<endl;
cout<<"Merk Bus: "<<gunung_harta.nama_bis1.merk<<endl;
cout<<"Tipe Bus: "<<gunung_harta.nama_bis1.tipe<<endl;
cout<<"Karosei Bus: "<<gunung_harta.nama_bis1.karoseri<<endl;
cout<<"Jenis Body Bus: "<<gunung_harta.nama_bis1.body<<endl;
cout<<"CC Bus: "<<gunung_harta.nama_bis1.cc<<endl;
cout<<"Bobot Bus: "<<gunung_harta.nama_bis1.bobot<<endl;

}
