#include <iostream>
#include <string>

using namespace std;

union tes {
    int angka;
    char huruf[4];
};

int main (){

    tes load;
    load.angka =10;
    load.huruf[0]='a';
    load.huruf[1]='b';
    cout<<"Value: "<<load.angka<<" Memory: "<<&load.angka<<endl;
    cout<<"Value: "<<load.huruf<<" Memory: "<<&load.huruf<<endl;

    return 0;
}
