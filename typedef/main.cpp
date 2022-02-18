#include <iostream>

using namespace std;

int main (){
    // type def adalah memberikan inisiasi / definisi ke pada suatu tipe data
    typedef int I;
    typedef int iVector2D[2];
    I angka =20;
    iVector2D b = {2,3};
    using number = double;
    number a=2.3432;
    typedef double vector[2];

    vector d = {1.2131,2.3123};

    cout<<angka<<endl;
    cout<<"angkanya adalah "<<b[0]<<" dan "<<b[1]<<endl;
    cout<<"angka double: "<<a<<endl;
    cout<<"angka double vector "<<d[0]<<" dan "<<d[1]<<endl;

}