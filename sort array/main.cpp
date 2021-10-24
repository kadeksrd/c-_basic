#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize= 5;

void printArray (array<int, arraySize>&bilangan){
    cout<<"Array: ";
    for(int &j : bilangan){
        cout<<j<<" ";
    }
        cout<<endl;
}
void printArray (array<char, arraySize>&bilangan){
    cout<<"Array: ";
    for(char &j: bilangan){
    cout<<j<<" ";
    }
    cout<<endl;
}



int main (){
    array<int, arraySize>angka={1,0,4,2,3};
    array<char,arraySize>huruf={'b','d','c','e','a'};
    //print fungsi
    cout<<"sebelum di sort"<<endl;
    printArray(angka);
    printArray(huruf);

    //print manual
    cout<<"sesudah di sort"<<endl;
    sort(angka.begin(), angka.end());
    printArray(angka);
    sort(huruf.begin(), huruf.end());
    printArray(huruf);

}

