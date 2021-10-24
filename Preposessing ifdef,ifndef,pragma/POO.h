#include "bersama.h"

// cara agar satu library bisa akses ke library lain 
// mengelink ke library lain



// #define POO "ini poo punya POO.H"


/*
Note 
jika ingin POO library dari "POO.h" dibaca 
disaat adanya library lain maka cara yang tepat adalah
menulis 

#ifndef
#define POO "ini POO punya libarylain.h"
#endif 

fungsinya apa ?

1. membuat pernytaan jika ada POO maka library poo.h lah harus dibaca duluan dan jika tidak baru library lain yang baca 
2.agar si compile/ siprogram c++ bisa membaca 2 kondisi dan  tidak  membuat komputer bingung karena ada 2 library 
dengan tipe data yang sama  




*/