#include <iostream>

using namespace std;

int main (){
int a =10;
// nilai a
cout<<a<<endl;
//alamat a
cout<<&a<<endl;

// reference nilai b ke a

int &b=a;
// nilai b akan sama dengna a
cout<<b<<endl;
// addressnya pun saama
cout<<&b<<endl;

// dan apabila diubah nilai b nya maka a nya juga berubah
b=20;
cout<<b<<endl;
cout<<a<<endl;

}
