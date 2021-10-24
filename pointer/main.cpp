#include <iostream>

using namespace std;

int kuadrat(int a){
    return a*a;
}

int main(){

int a=1;
//pointer blank
//pointer
int *b =nullptr;
b=&a;
cout<<"nilainya"<<endl;
cout<<a<<endl;
cout<<"addressnya"<<endl;
cout<<b<<endl;
cout<<"kuadrat"<<endl;
cout<<kuadrat(a)<<endl;
cout<<&a<<endl;

//mengambil nilai dari pointer
cout<<"mengambil nilai dari pointer: "<<endl;
cout<<*b<<endl;

}
