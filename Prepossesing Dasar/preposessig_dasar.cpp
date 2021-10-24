#include <iostream>
//macro
#define PI 3.14159265359


using namespace std;

int main (){
    double pi = 3.14159265359;

    cout<<"addres double pi ="<<&pi<<endl;
    cout<<"Double PI = "<<pi<<endl;
    /*
    Perbedaan mendasar antara variabel dan prepossesing adalah variabel 
    ditaruh memory dahulu baru di compile sedangkan di prepossing dia hanya mengganti 
    fungsi si PI nya jadi nya sama aja seperti 
    cout<<3.14159265359<<endl;

    berbeda dengan variabel dia mengalokasikan pi ke memory lalu di tampilkan
    oleh kompiler 

    penulisan pi #
    */
    cout<<"PI ="<<PI<<endl;

}