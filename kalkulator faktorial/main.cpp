#include <iostream>

using namespace std;

//membuat faktorial

int faktorial (int a){
    if (a<=1){
        return a;
    }
    else{
        return a=a*faktorial(a-1);
    }
}

int combinasi (int i, int j){
    int hasil;
    int kurang =faktorial(i-j);
    int bagi= kurang*faktorial(j);
    hasil=faktorial(i)/bagi;
    return hasil;
}

int main(){
int a, hasil1;
int p, l, hasil2;
cout<<"======================="<<endl;
cout<<"KALKULATOR FAKTORIAL"<<endl;
cout<<"======================="<<endl;
cout<<"MASUKAN ANGKA: ";cin>>a;
hasil1=faktorial(a);
cout<<endl;
cout<<"=============="<<endl;
cout<<a<<"!"<<" = "<<hasil1<<endl;
cout<<"=============="<<endl<<endl<<endl<<endl;
cout<<"=========================="<<endl;
cout<<"KALKULATOR KOMBINASI"<<endl;
cout<<"=========================="<<endl;
cout<<"\nmasukan angka pertama: ";cin>>p;
cout<<endl;
cout<<"masukan angka kedua: ";cin>>l;
cout<<endl;
cout<<"=========================="<<endl;
cout<<endl;
cout<<p<<"!"<<"/"<<"("<<p<<"-"<<l<<")"<<"x"<<l<<"!"<<endl;
cout<<endl;
hasil2=combinasi(p,l);
cout<<"======"<<endl;
cout<<" = "<<hasil2<<endl;
cout<<"======"<<endl;

}
