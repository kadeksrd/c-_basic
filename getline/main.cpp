#include <iostream>
#include <string>

using namespace std;

int main (){

//getline console
// ditulis getline(cin, variabel);

string masukan_input;
cout<<"masukan kalimat anda: ";
getline(cin, masukan_input);

cout<<"input anda: "<<masukan_input<<endl;

//mencari posisi kata
int posisi = 0;
int jumlah = 0;
while (true){
    posisi= masukan_input.find(" ",posisi+1);
    jumlah++;
    if(posisi<0){
        break;
    }
}
cout<<"jumlah kata: "<<jumlah<<endl;
}
