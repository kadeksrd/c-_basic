#include <iostream>
#include <exception>

using namespace std;

/* 1. syntax error
    terjadi apabila salah satu syntax lupa kita tulis kyk int main() lupa tanda koma 
    atau lupa tanda kurungnya

*/
// 2. linking error
    //terjadi pada prototipe atau fungsi yang di panggil misal prototipe fungsi beda nama fungsi atau nama fungsi dipanggil lupa variabelnya 
// 3. non-error
    // terjadi pada human eror tapi dibaca true pada c++ misal 10*-5 hasilnya -50 bener tapi sebenernya salah pada alokasi memory 
// 4. runtime error
    // terjadi eror pada saat kita memproses suatu variabel dan biasanya terbaca aneh oleh c++

int pembagian(int &num, int &denum){
	if(denum == 0){
		// opsi 2: throw overflow_error("Error: Pembagi nol");	
		throw "Error: Pembagi nol";
	}
	return num/denum;
}

int main(){
	int a;
	int b;
	int c;

	while(true){
		cout << "num: ";
		cin >> a;
		cout << "denum: ";
		cin >> b;

		try{
			c = pembagian(a,b);
			cout << c << endl;
		// }catch(exception &e){
		}catch(const char* e){
			// opsi 2: cout << e.what() << endl;
			cout << e << endl;
		}
		
	}

	cout << "akhir dari program" << endl;
	cin.get();
	return 0;
}

/*
cara agar bisa memberi penjelasan yang jelas pada eror 
throw "eror name"

#include <exception>

int main (){
    try{
             your action
        }
    catch(new var){
        your action with your new var 
    }
}



*/