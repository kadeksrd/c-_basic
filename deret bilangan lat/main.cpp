#include <iostream>

using namespace std;

int main (){
    //deret biasa
    for (int n=1; n<=10; n++){
        cout<<n<<",";
    }
    cout<<"\n\n";
    //deret kelipatan 3
    for (int n=3; n<=30; n+=3){
        cout<<n<<",";
    }
    cout<<"\n\n";
    //deret kelipatan 8-17
    for (int n=8; n<=17; n++){
        cout<<n<<",";
    }
    cout<<"\n\n";
    //deret pangkat
    int a=10;
    for (int n=1; n<=a; n++){
        cout<<n*n<<",";
    }
    return 0;
}


