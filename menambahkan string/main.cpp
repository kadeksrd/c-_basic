#include <iostream>
#include <string>

using namespace std;

int main(){

string beb ="pupu";

cout<<beb<<endl;

//mengambil string dengan menggunkan index
cout<<beb[0]<<endl;
cout<<beb[1]<<endl;
cout<<beb[2]<<endl;
cout<<beb[3]<<endl;
//mengubah kata dengan menggunakan kalimat
//harus gunakan ' 'karena 1 huruf termasuk char
beb [2] = 't';
cout<<beb<<endl;
//menyambung, concernation
//menyambung cara 1
string beb2(beb+" sa");
cout<<beb2<<endl;
//menambahkan kata belakang cara 1
beb2.append("gita");
cout<<beb2<<endl;
//menambahkan kata belakang cara 2 not recommended boros memori
/*string beb3 =beb2+"gita";
cout<<beb3<<endl;*/
//menambahkan kata lain dengan 1 variabel
//cara 1
/*beb2.append(" adia");
cout<<beb2<<endl;*/
//cara 2
beb2.append(" adia putri");
cout<<beb2<<endl;









}
