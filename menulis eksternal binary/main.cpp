#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main (){
fstream myData;

//membaca fstream binary
/*
int hasil;
myData.open("data.bin", ios::in | ios::binary);
myData.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
cout<<hasil<<endl;
*/

//menulis fstream binary

int angka=33;
myData.open("data.bin", ios::out | ios::binary);
myData.write(reinterpret_cast<char*>(&angka),sizeof(angka));
myData.close();
return 0;
}
