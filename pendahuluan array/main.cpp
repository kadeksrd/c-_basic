#include <iostream>

using namespace std;

int main(){
int a;
//mengurutkan array;
int angka[5];
angka[0] = 0;
angka[1] = 1;
angka[2] = 2;
angka[3] = 3;
angka[4] = 4;
cout<<"alamat array"<<endl;
//alamat ketika menggunakan array
cout<<&angka[0]<<endl;
cout<<&angka[1]<<endl;
cout<<&angka[2]<<endl;
cout<<&angka[3]<<endl;
cout<<&angka[4]<<endl;
cout<<endl;
//array ketika diberi nilai
cout<<"nilai array"<<endl;
cout<<angka[0]<<endl;
cout<<angka[1]<<endl;
cout<<angka[2]<<endl;
cout<<angka[3]<<endl;
cout<<angka[4]<<endl;

//mengubah nilai array menggunakan addres/ pointer
cout<<endl;
int *bil=angka;
*(bil+3)=10;
cout<<angka[0]<<endl;
cout<<angka[1]<<endl;
cout<<angka[2]<<endl;
cout<<angka[3]<<endl;
cout<<angka[4]<<endl;

//mengubah nilai array dengan array
cout<<endl;
angka[1] = 20;
cout<<angka[0]<<endl;
cout<<angka[1]<<endl;
cout<<angka[2]<<endl;
cout<<angka[3]<<endl;
cout<<angka[4]<<endl;
cout<<endl;
//mengukur ukuran array
cout<<"mengukur jumlah array"<<endl;
cout<<"jumlah array (dalam byte): "<<sizeof(angka)<<endl;
cout<<"jumlah ukuran array: "<<sizeof(angka)/sizeof(int)<<endl;





}
