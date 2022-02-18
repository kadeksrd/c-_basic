#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
//dadu acak
char lanjut;
while(true){
    cout<<"lempar dadu?(y/n): ";cin>>lanjut;
    if(lanjut=='y'){
        cout<<1+(rand()%6)<<endl;
 }
    else if(lanjut=='n'){
        break;
    }
    else{
        cout<<"salah nulis kakak ulang lagi yuk!";
    }

}






}
