#include <iostream>

using namespace std;
// deret fibonacci
int main()
{
    //rumus fibbonacci
    //f_n=f(n-1)+f(n-2)
    int n;
    int f_n,f_n1,f_n2;
    cout<<"program deret fibbonacci"<<endl;
    cout<<"Silahkan masukan nilai-n nya: ";
    cin>>n;
        //nilai inisialsinya
        f_n1 =0;
        f_n2 =1;
    for(int i=0; i<n; i++){
        //rumus algoritmanya
        f_n = f_n1+ f_n2;
        f_n2= f_n1;
        f_n1= f_n;
        cout<<f_n<<",";
    }

/*
    note:

    kenapa di inisialsi ?
    karna apabila f_n1 dan F_n2 ga di insialsi maka, nilai nya sama dengan dengan jumlah bit intergernya yaitu 16

    kenapa f_n sudah di panggil dia berubah angka nya jadi f_n setelahnya ?

    karna proses komputer itu menyimpan nilai sebelumnya jadi apa bila kita masukin variabel yang baru maka variabel lama nya
    masih bisa disimpan asalkan kita memanggilnya seperti kasus diatas itu f_n yang dibawah f_n sebelumnya dan f_n diatas f_n
    yang baru

*/

}
