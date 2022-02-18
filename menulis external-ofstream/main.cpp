#include <iostream>
/*
iostream itu di dalam c++
kyk input output
int , string dll
*/

#include <fstream>
/*
untuk membaca file external
bagiannya ofstream ifstream
*/

using namespace std;

int main (){


/*
cara menulis ofstream

nama_ofstream.open("masukan datanya", masukan jenis outputnya)

masukan aksinya disini

contoh mau mengouputkan seperti cout

nama_ofstream<<"namafile";

nnti file seketika di tambahkan


nama_ofstream.close


ios::out = default, operasi output;
ios::app= menuliskan pada akhir baris/menambahkan;
ios::trunc= default, membuat file jika file itu sedang kosong;

cara tulisnya di open("nama_data", ios::out);
*/



ofstream filebaru;

filebaru.open("data1.txt",ios::out);
filebaru<<"menulis file"<<endl;
cout<<"tampilan console"<<endl;
filebaru.close();
// ada close agar file yang sudah dibuka bisa dilewatkan saja gitu atau di hapus memorinya agar tidak ngelag pada ram
filebaru.open("data2.txt",ios::app);
filebaru<<"menulis file"<<endl;
cout<<"tampilan console"<<endl;
filebaru.close();

filebaru.open("data3.txt",ios::trunc);
filebaru<<"menulis file"<<endl;
cout<<"tampilan console"<<endl;
filebaru.close();

}
