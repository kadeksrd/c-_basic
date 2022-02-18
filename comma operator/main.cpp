#include <iostream>

using namespace std;

void print (int tampil){
    cout<<tampil<<endl;

}


int main(){
     /*comma operator

    cara penulisan :
    tipe data nama_nilai = (tipe data1 nilai1, tipedata2 nilai2, cout<<endl, function(),operator, etc);

    */
    int hasil;
    int j;
    int k;



    hasil= (j=10,print(j),k=20,print(k),(k+j));
    print(hasil);
}
