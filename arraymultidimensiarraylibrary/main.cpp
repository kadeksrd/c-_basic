#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;

void tampilkan_array (array<array<int, kolom>,baris>nilai_array) {
    for(array <int, kolom>vectorBaris : nilai_array){
        cout<<"[";
         for(int nilaiKolom : vectorBaris){
            cout<<nilaiKolom<<" ";
         }
        cout<<"]"<<endl;
    }
}

int main (){
    array<array<int, kolom>,baris>nilai_array={0,1,2,3,4,5};
    tampilkan_array(nilai_array);


/*
    cout<<nilai_array[0][0]<<" ";
    cout<<nilai_array[0][1]<<" ";
    cout<<nilai_array[0][2]<<" "<<endl;

    cout<<nilai_array [1][0]<<" ";
    cout<<nilai_array [1][1]<<" ";
    cout<<nilai_array [1][2]<<" "<<endl;*/

}
