#include <iostream>

using namespace std;

void bilreference(int &b){
    b=8;
    cout<<"address b: "<<&b<<endl;
    cout<<"nilai b: "<<b<<endl;
}

void bilkuadrat(int &nilaifak){
    nilaifak=nilaifak*nilaifak;
    cout<<"bilangan kuadrat: "<<nilaifak<<endl;

}

int main(){
int h =5;
//nilainya
cout<<"nilainya : "<<h<<endl;
cout<<"addresnya : "<<&h<<endl;
bilreference(h);
cout<<"nilai h: "<<h<<endl;
bilkuadrat(h);




}
