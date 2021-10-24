#include <iostream>
#include "bersama.h"
#include "POO.h"
#include "winnie.h"

// #define POO 1

/*
// ifdef
// jika definisi sudah ada 
#ifdef POO
#define TEST_POO "POO sudah ada"
#else
#define TEST_POO "POO tidak ada"
#endif
*/
using namespace std;

/*
cara ini disebut guarding fungsinya untuk membuat compiler hanya membaca 1 library aja dan yang 
lainnya hanya mengikuti 
*/

/*
#ifndef POO
// jika tidak terdefinisi 
#define TEST_POO "POO baru"
#endif
*/

/*
#elsendef
#define TEST_POO "POO lama"
cara ini ga bisa karena membuat POO yang TRUE jadi 2x 
*/ 



int main (){
mahasiswa mahasiswa_1;
mahasiswa_1.NIM = 1;
cout<<mahasiswa_1.NIM<<endl;
// cout<<POO<<endl;

}