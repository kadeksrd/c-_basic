/*
cara agar library bisa di masukin ke library lain

adalah dengan memsukan 

#include "nama_library"

agar tidak terjadinya tabrakan antar library 

dibuat kan guard 

cara guard : 

1. pake 
#ifndef _tipedatabaru
#define_tipedatabaru
masukan fungsi atau tipe data yg biasa digunakan 

#endif 

2. pragma once

*/





// #ifndef _BERSAMA


#pragma once

#define _BERSAMA

struct mahasiswa{
    int NIM;
};

// #endif 