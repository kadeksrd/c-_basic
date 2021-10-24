#include <iostream>

using namespace std;
//prototipe
void pointer(int *);
// membuat fungsi kuadrat
void kuadrat(int *);
// membuat fungsi kubik
void kubik(int *);

int angka_kubik(int h){
return (h)*(h)*(h);
}
int main(){
    int k;
    cout<<"masukan angka: ";cin>>k;
    cout<<"nilai k: "<<k<<endl;
    cout<<"addres k: "<<&k<<endl;
    pointer(&k);
    //kuadrat
    cout<<"nilai kuadrat: ";
    kuadrat(&k);
    //kubik
    cout<<"nilai kubiknya adalah : ";
    kubik(&k);
    int hasil=angka_kubik(k);
    cout<<hasil<<endl;
}

void pointer(int *m){
    cout<<"address m: "<<m<<endl;
    cout<<"nilai m: "<<*m<<endl;
}
void kuadrat (int *f){
    *f=(*f)*(*f);
    cout<<*f<<endl;
}
void kubik (int *j){
   *j=(*j)*(*j)*(*j);
  cout<<*j<<endl;
}
