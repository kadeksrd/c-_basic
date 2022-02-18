#include <iostream>
#include <array>

using namespace std;

//membuat program mahasiswa

int main(){

    array<int,10>nilai_mahasiswa;
    for (int i=0; i<=nilai_mahasiswa.size();i++){
        cout<<"Jumlah mahasiswa dengan nilai: ";
        if (i == 0){
            cout<<"nilai 0 - 9: ";
        }
        else if(i==10){
            cout<<"nilai 100: ";
        }
        else{
            cout<<i*10<<" - "<<(i*10)+9<<": ";
        }
        cin>>nilai_mahasiswa[i];
    }
    cout<<endl<<endl;
    for (int i=0; i<=nilai_mahasiswa.size();i++){
        if (i == 0){
            cout<<"0 - .9: ";
        }
        else if(i==10){
            cout<<"100: ";
        }
        else{
            cout<<i*10<<" - "<<(i*10)+9<<": ";
        }
        //buat grafik
        for(int g=1; g<=nilai_mahasiswa[i]; g++){
            cout<<"=";
        }
        cout<<endl;
    }
}

