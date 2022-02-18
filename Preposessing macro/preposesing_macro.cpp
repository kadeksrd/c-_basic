// preposessing directive
#include <iostream>

using namespace std;
// macro 

// define variabel 
#define BAHASA "Indonesia"
// define fungsi 
// define nama_varibel(nilai variabel) proses kan nilainya
#define KUADRAT(a) a*a

// define ternary operation 
// ((logikanya) ? TRUE : FALSE)
#define TERNARY(a,b) ((a<b)? a:b)

/* define untuk if else
 sebagai variabel penentu pada program perkondisian 
 jadi kalo angka kia ganti ya ikut berubah outputnya 
*/
#define ANGKA 2
// define if elsenya 
#if ANGKA == 1
    #define BUS "HINO"
#else
    #define BUS "MERCY"
#endif

int main(){
    // tampilkan define bahasa
    cout<<"Bahasa: "<<BAHASA<<endl;
    // tampilkan kuadrat 
    cout<<"kuadrat 5 = "<<KUADRAT(5)<<endl;
    // tampilkan ternary 
    cout<<"Ternary:"<<TERNARY(5,10)<<endl;
    // tampilkan if else 
    cout<<"Nama bus: "<<BUS<<endl;

// undefine 
#undef BAHASA
#define BAHASA "jawa"

    cout<<"Bahasa: "<<BAHASA<<endl;

}
