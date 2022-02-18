#include <iostream>
#include"otong.h"

/*
scope itu seperti enum, struct dll yang merupakan kumpulan sebuah data
kalo struct kan nama_structbaru.datanya

kalo namespace cukup nama_namespace::datanya

namespace adalah sebuah scope yang di panggil menggunakan :: dalam penulisannya 
contoh namespace standart dari iostream ditulis 
std::

penggunaaan namespace 

namespace nama_namespace {

    tuliskan datanya bebas

}

*/



void fungsi(){
    std::cout<<"ini fungsi biasa"<<std::endl;
}


/*
penggunaan using 

digunakan untuk menjebatani penulisan namespace agar tidak menuliskan nama_namespace::

cara penulisan 

using namespace nama_namespace


*/
// using namespace otong;

int main (){
otong::cout(100);
otong::endl;
otong::cout(200);
return 0;
}