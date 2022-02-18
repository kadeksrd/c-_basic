#include <iostream>

using namespace std;

int fibonacci (int a){

    if (a==0 || a==1){
        return a;
    }
    else{
       return fibonacci(a-1)+fibonacci(a-2);

    }
}

int main (){
int a;
cout<<"fibbonaci ?"<<endl;
cout<<"Masukan Angka: ";cin>>a;
cout<<"hasil: "<<fibonacci(a)<<endl;
}
