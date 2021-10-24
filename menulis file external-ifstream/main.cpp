#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main (){

ifstream mynote;
string output, baper;
bool databaru;
mynote.open("data.txt");
int no;
string nama;
    //tulisan
    for(int i=0;i<8;i++){
        getline(mynote,baper);
        output.append("\n"+baper);
    }
    cout<<output<<endl;
return 0;
}

/*
cara menggunakan ifstream
if


*/

