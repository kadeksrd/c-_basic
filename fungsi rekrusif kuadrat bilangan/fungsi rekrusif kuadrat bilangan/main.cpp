#include <iostream>

using namespace std;

//fungsi iterasi
int pangkat_iterasi (int a, int b){
    int hasil = a;
    for(int i=1 ; i<b; i++){
        hasil=hasil*a;
    }
    return hasil;
}
// fungsi rekrusif terbatas
int pangkat_rekrusif (int a, int b){
        if(b<=1){
              cout<<"akhir dari rekrusif \n";
              return a;
        }
        else {
        a= a*pangkat_rekrusif(a,(b-1));
        return a;
        }

}

int main(){
    int a,b;
    cout<<"mari kita coba perpangkatan secara iterasi"<<endl;
    cout<<"masukan angka: ";cin>>a;
    cout<<"masukan pangkat: ";cin>>b;
    cout<<"hasilnya adalah: "<<pangkat_iterasi(a,b)<<endl;
    cout<<"\n\n";
    cout<<"pangkat rekursif terbatas"<<endl;
    cout<<"hasilnya adalah: "<<pangkat_rekrusif(a,b)<<endl;
    return 0;
}
