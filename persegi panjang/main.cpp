#include <iostream>

using namespace std;

int main(){

// persegi panjang
float p,l;
cout<<"Mari membuat persegi panjang"<<endl;
cout<<"masukan lebar persegi disini: ";cin>>p;
cout<<"masukan tinggi persegi disini: ";cin>>l;
cout<<"\n\n";
cout<<"persegi panjang dengan panjang "<<p<<"dan lebar "<<l<<"maka bentuknya adalah.."<<endl;
cout<<"\n\n";
for(int i=1; i<=l; i++){
    for(int a=1;a<p; a++){
        cout<<"*";
    }
    cout<<"*"<<endl;
}



}
