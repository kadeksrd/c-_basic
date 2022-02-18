#include <iostream>
#include<string>
using namespace std;


int main()
{
	int jumlah_barang,harga;
	string nama_barang;
	int diskon;
	menu:
	cout<<"==================================================="<<endl;
	cout<<"\t\tProgram Kasir Sedehana\t\t"<<endl;
	cout<<"Daftar Barang: "<<endl;
	cout<<"1. susu"<<endl;
	cout<<"2. indomie"<<endl;
	cout<<"3. rinso"<<endl;
	cout<<"4. shampo"<<endl;
	cout<<"5. sabun"<<endl;
	cout<<"6. odol"<<endl;
	cout<<"==================================================="<<endl;
	cout<<"Nama barang: ";cin>>nama_barang;
	cout<<"Jumlah barang: ";cin>>jumlah_barang;
	

	if(nama_barang=="susu"){
		harga=jumlah_barang*4000;
	}
	else if(nama_barang=="indomie"){
		harga=jumlah_barang*2500;
	}
	else if(nama_barang=="rinso"){
		harga=jumlah_barang*5000;
	}
	else if(nama_barang=="shampo"){
		harga=jumlah_barang*1000;
	}
	else if(nama_barang=="sabun"){
		harga=jumlah_barang*3000;
	}
	else if(nama_barang=="odol"){
		harga=jumlah_barang*4000;
	}
	else{
		goto menu;
		}

	cout<<"\n\n";
	cout<<"Belanjaan: "<<nama_barang<<endl;
	cout<<"Jumlah: "<<jumlah_barang<<endl;
	cout<<"harga: "<<harga<<endl;
	diskon=harga*0.15;
	int total_harga=harga-diskon;
	cout<<"diskon 15% : "<<diskon<<endl;
	cout<<"===================="<<endl;
	cout<<"Total Harga: "<<total_harga<<endl;
	cout<<"===================="<<endl;
	cout<<"\n\n";
	string hitung;
	cout<<"mau hitung lagi(mau/skip)? : ";cin>>hitung;
	if(hitung=="mau"){
		goto menu;
		system("cls");
	}
	else if(hitung=="skip"){
		return 0;
	}
	

};

