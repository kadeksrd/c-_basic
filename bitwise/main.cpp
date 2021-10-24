#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void tampilkan(int nilai, string nama){
    cout<<nama<<" = "<<bitset<8>(nilai)<<endl;
}


int main (){


int a = 6;
int b = 10;
int c;

cout<<"tampilin bitset"<<endl;
tampilkan(a,"a");
tampilkan(b,"b");
cout<<endl;
//cara print cout<<bitset<jumlah bit>(nilainya)<<endl;
cout<<"& = bitwise AND"<<endl;
/*

apabila salah satu true maka hasilnya tetap false dan apabila dua duanya true maka dia true
karna konsep and adalah pilihan keduanya apabila satu berubah maka yang lainnya ikut berubah



*/
c=a&b;
tampilkan(a,"a");
tampilkan(b,"b");
tampilkan(c,"c");
cout<<c<<endl;
cout<<endl;
cout<<"| = bitwise OR"<<endl;
//apabila salah satu true dia ikut true dan apabila 2 2nya true dia juga true;
c=a|b;
tampilkan(a,"a");
tampilkan(b,"b");
tampilkan(c,"c");
cout<<c<<endl;
cout<<endl;
cout<<"^= bitwise XOR"<<endl;
/*
bitwise XOR perbedaan dengan OR
yaitu apabila dua duanya true dia hasilnya 0
misal apabila a=1
              b=1
              maka hasilnya 0;
*/
c=a^b;
tampilkan(a,"a");
tampilkan(b,"b");
tampilkan(c,"c");
cout<<endl;
cout<<"~= bitwise NOT"<<endl;
// NOT kebalikan dari bitwise itu sendiri;
c=~a;
tampilkan(a,"a");
tampilkan(c,"c");
cout<<endl;
cout<<"<< = bitwise shift left"<<endl;
c=a<<1;
tampilkan(a,"a");
tampilkan(c,"c");
cout<<endl;
/*
kegunaan untuk menggeser bitwise kekiri dan apabila kegesernya melebihi jumlah bitnya maka dia akan ditaroh ke address lainnya makannya
di compiler tidak kelihatan

*/

cout<<"<< = bitwise shift right"<<endl;
c=a>>1;
tampilkan(a,"a");
tampilkan(c,"c");
cout<<endl;
/*
kegunaan untuk menggeser bitwise kekanan dan apabila kegesernya melebihi jumlah bitnya maka dia akan ditaroh ke address lainnya makannya
di compiler tidak kelihatan

*/

}

/*
cara hitung hasil bitset
misal 4 dalam 8 bit berarti ada angka 8 = 00000100

kenapa ada 1 nah 1 itu nilai 4 nya dapet dari mana ?

00000100 dihitung dari belakang menggunakan hitungan byte= 2^n

dan dihitung dari 0 dibelakang dan titik hitungnya adalah jarak index nya  si 1 itu ada posisi ke berapa
dari belakang lalu jika ketemu 1 lagi dipangkati lagi ada di index berapa lalu di jumlah
dengan bilangan sebelumnya

karna yang 1 itu berada di index 2 maka kita masukan 2^2 = 4 sesuai

bagaimana dengan 5

maka hasil dari 5 adalah 00000101

berarti ada 2 yang 1 nya berarti
2^0 = 1
2^2 = 4

dijumalahkan = 5


bisa di bilang yang 0 itu tidak dihitung yang dihitung yang 1 saja ;

*/


/*

Bitwise Operator
&=Bitwise AND
|=Bitwise Inclusive OR
^:XOR=Bitwise Exclusive OR
~ NOT
<< Shift bits left
>> shitf bits right

*/
