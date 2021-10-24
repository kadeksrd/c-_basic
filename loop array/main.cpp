#include <iostream>
#include<array>
using namespace std;

int main () {

    array<int,10>araynilai={0,1,2,3,4,5,6,7,8,9};

    for (int &nilai: araynilai){
        cout<<nilai<<" "<<&nilai<<endl;
    }
    cout<<endl<<endl;
    for (int &nilai: araynilai){
        nilai*=2;
        cout<<nilai<<endl;
    }
    cout<<endl<<endl;
    for (int &nilai: araynilai){
        cout<<nilai<<" "<<&nilai<<endl;
    }




}
