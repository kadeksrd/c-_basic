#include <iostream>

using namespace std;

int main(){

    int n=5;
    cout<<"segitiga siku2"<<endl;
    for(int a=1; a<=n; a++){
        for(int i=1; i<=a; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n"<<endl;
    cout<<"balikan segitiga siku2"<<endl;
    for(int a=1; a<=n; a++){
        for(int i=n; i>=a; i--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n";

cout<<"segitiga sembarang"<<endl;
for(int a=1; a<=n; a++){
        for(int i=1; i<a; i++){
            cout<<" ";
        }
        for(int j=n; j>=a; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    cout<<"segitiga siku2 sisi samping"<<endl;
    for(int a=n; a>=1; a--){
        for(int i=1; i<=a; i++){
            cout<<" ";
        }
        for(int k=n; k>=a; k--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    cout<<"belah ketupat"<<endl;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=i; j--){
            cout<<" ";
        }
        for (int k=1; k<=(2*i-1); k++){
            cout<<"*";
        }
            cout<<endl;
    }
   for(int a=2; a<=n; a++){
        for(int i=1; i<=a; i++){
            cout<<" ";
        }
        for(int j=n; j>=(2*a-n); j--){
            cout<<"*";
        }
        cout<<endl;
    }
cout<<endl;
//persegi
cout<<"persegi"<<endl;
cout<<endl;
for (int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
    cout<<" *";
    }
    cout<<endl;
}

    return 0;
}
