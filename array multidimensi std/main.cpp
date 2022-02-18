#include <iostream>

using namespace std;

//memanggil multideminsi array menggunakan fungsi
void tampilkan_array(int *ptr_multidimensi, int baris, int kolom){
    int index = 0;
    for (int i=0; i<kolom; i++){
        cout<<"[";
            for(int j=0; j<baris; j++){
                cout<<*(ptr_multidimensi+index)<<" ";
                index ++;            }
        cout<<"]"<<endl;
    }
}



int main (){
    //buat multidemensi [baris] [kolom]
    // untuk membuat fungsi deklarasi index baris dan kolom harus konstan menggunakan const
    const int baris=2;
    const int kolom=2;
    int multidimensi_ar [2][2]={1,2,3,4};
    /*cara nampilin manual dan memanggil index arraynya menggunakan
    index angka biner [0][0]=0; [0][1]=1; [1][0]=2; [1][1]=3;
    */
    cout<<"tampilanfunction"<<endl;
    tampilkan_array(*multidimensi_ar, 2,2);

    cout<<"tampilan manual"<<endl;
    cout<<"["<<multidimensi_ar[0][0]<<" "<<multidimensi_ar[0][1]<<"]"<<endl;
    cout<<"["<<multidimensi_ar[1][0]<<" "<<multidimensi_ar[1][1]<<"]"<<endl;




}
