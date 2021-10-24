#include <iostream>

using namespace std;

//membuat luas dan keliling persegi panjang
//luas persegi panjang
double luas_persegipanjang(double p, double l){
 double luas;
 luas=p*l;

 return luas;
}
//keliling persegi panjang
double keliling_persegipanjang(double p, double l){
double keliling;
keliling = 2*(p+l);

return keliling;
}

void tampilkan_luas(double p, double l){
cout<<"tampilkan menggunakan void"<<endl<<endl;
cout<<"luasnya adalah ";
cout<<luas_persegipanjang(p,l)<<endl;
}
void tampilkan_keliling(double p, double l){
cout<<"tampilkan menggunakan void"<<endl<<endl;
cout<<"keliling adalah ";
cout<<keliling_persegipanjang(p,l)<<endl;
}
int main (){

double hasil_luas, hasil_keliling,p,l;
cout<<"Hitung luas dan keliling persegi\n\n";
cout<<"Hitung luas"<<endl<<endl;
cout<<"masukan panjangnya: ";cin>>p;
cout<<"masukan lebarnya: ";cin>>l;
cout<<"\n";
tampilkan_luas(p,l);
cout<<"\n\n";
cout<<"Hitung keliling persegi panjang"<<endl<<endl;
cout<<"masukan panjangnya: ";cin>>p;
cout<<"masukan lebarnya: ";cin>>l;
tampilkan_keliling(p,l);
cout<<"\n\n";


}
