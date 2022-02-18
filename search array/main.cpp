#include <iostream>
#include <array>
#include <algorithm>

const size_t jarak_array = 5;


void printarray(std::array<char, jarak_array>&cetak){
    std::cout<<"array: ";
    for(char &print : cetak){
        std::cout<<print<<",";
    }
    std::cout<<std::endl;
}

int main (){
    std::cout<<"versi standartnya"<<std::endl;
    std::array<char,jarak_array>huruf ={'c','d','e','a','b'};
    printarray(huruf);

    char cari;
    bool ketemu;

    //buat sort
    std::cout<<"versi sort"<<std::endl;
    std::sort(huruf.begin(),huruf.end());
    printarray(huruf);
    //buat search array
    std::cout<<"\n";
    std::cout<<"silahkan cari huruf yang ingin kamu cari: ";std::cin>>cari;
    //search menggunakan binary_search
    ketemu=std::binary_search(huruf.begin(),huruf.end(), cari);
    std::cout<<"\n";
    if(ketemu){
        std::cout<<"ketemu!, "<<"huruf kamu cari adalah: "<<cari<<std::endl;
        std::cout<<"\n";
        std::cout<<"ini urutannya: "<<std::endl;
        printarray(huruf);
    }
    else{
        std::cout<<"tidak ketemu"<<std::endl;
    }
}
