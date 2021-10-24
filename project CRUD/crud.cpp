#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include "main.h"

// fungsi yang ada di main.h gunakan crud::

void crud::checkData(std::fstream &data){
 
    data.open("data.bin", std::ios::out| std::ios::in | std::ios::binary);
    // algoritma mengeceak database
    if(data.is_open()){
        std::cout<<"data telah di temukan !"<<std::endl;
    }
    else{
        std::cout<<"data tidak ditemukan !"<<std::endl;
        data.close();
        /* 
        menggunakan trunc agar data bisa dibuat otomatis karna 
        trunc bisa membuat file jika kosong dan mendelete data apabila 
        data ada.
        */
        data.open("data.bin",std::ios::trunc| std::ios::out| std::ios::in | std::ios::binary);
    }

}

int crud::getDatasize (std::fstream &data){
    int start,end;
    /*
    saat ini membuat fungsi untuk mengetahui
    ukuran data dari start [][][][][][][] end 
    dengan fungsi berikut end-star/sizeof(datanya)
    */
   //buat fstream baca posisinya 
   data.seekg(0,std::ios::beg);
    /* deklarasi start dengan fungsi diatas 
    dengan menggunakan data.tellg();   
    untuk menampilkan data yang telah di berikan
    pd fungsi diatas 
   */
   start=data.tellg();
   data.seekg(0,std::ios::end);
   end=data.tellg();
   return (end-start)/sizeof(mahasiswa);
};

int crud::getOption(){
    int input;
    system("cls");
    std::cout<<"\n";
    std::cout<<"Membuat Program CRUD Data Mahasiswa"<<std::endl;
    std::cout<<"======================================"<<std::endl;
    std::cout<<"1. Tambah Data Mahasiswa"<<std::endl;
    std::cout<<"2. Tampilkan Data Mahasiswa"<<std::endl;
    std::cout<<"3. Ubah Data Mahasiswa"<<std::endl;
    std::cout<<"4. Hapus Data Mahasiswa"<<std::endl;
    std::cout<<"5. Selesai"<<std::endl;
    std::cout<<"======================================"<<std::endl;
    std::cout<<"Pilih [1-5] ? : ";
    std::cin>>input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    return input;
};

void crud::addMahasiswa(std::fstream &data){

    mahasiswa input_mahasiswa, lastMahasiswa;

    int size = crud::getDatasize(data);
    // fungsinya untuk membaca ukuran data yang tertera pada saat data ditemukan
    // tampilkan ukuran data
    std::cout<<"Ukuran Data: "<<size<<std::endl;
    //membuat pk (primary key berkerja);
    //1. algoritma
    if(size==0){
        input_mahasiswa.pk=1;
    }
    //algoritma setelah pk=1 at least 2,3 etc
    else{
        input_mahasiswa.pk=lastMahasiswa.pk+1;
        lastMahasiswa = readData(data,size);
        std::cout<<"PK= "<<lastMahasiswa.pk<<std::endl;
    }    
    
    // fungsinya untuk membaca data dan ukurannya pada saat data ditemukan  
    std::cout<<"Masukan Nama: ";
    std::getline(std::cin,input_mahasiswa.Nama);
    std::cout<<"Masukan Nim: ";
    std::getline(std::cin,input_mahasiswa.Nim);
    std::cout<<"Masukan Jurusan: ";
    std::getline(std::cin,input_mahasiswa.jurusan);
    std::cout<<"Masukan No Telepon: ";
    std::getline(std::cin,input_mahasiswa.No_telepon);
    // posisi ditulis 1 agar dia dari 1-1 jadi dimulai dari index[0]
    // karna  sudah dibuatkan pembaca size nya maka ditulis size+1 karna size dimulai dari 0 
    crud::write_data(data,size+1,input_mahasiswa);

}

void crud::write_data(std::fstream &data, int posisi, mahasiswa &input_mahasiswa){
    /*
    ditulis posisi-1 agar posisi bisa menyesuaikan indexnya dan 
    menggunakan sizeof karna data nya merupakan bin maka untuk tau posisi nya 
    hanya bisa diukur dengan ukuran addresnya
    std::ios::beg agar dimulai dari awal
    */
    data.seekp((posisi-1)*sizeof(mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char*>(&input_mahasiswa),sizeof(mahasiswa));
}

crud::mahasiswa readData(std::fstream &data, int posisi){
    crud::mahasiswa readMahasiswa;
	data.seekg((posisi-1)*sizeof(crud::mahasiswa),std::ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(crud::mahasiswa));
	return readMahasiswa;
}

void crud::update_data(std::fstream &data){
    int nomor;
    mahasiswa updateMahasiswa;

    std::cout<<"Pilih Nomor: ";
    std::cin>>nomor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    updateMahasiswa = readData(data,nomor);
    std::cout<<"Data Pilihan Anda"<<std::endl;
    std::cout<<"Nama: "<<updateMahasiswa.Nama<<std::endl;
    std::cout<<"NIM: "<<updateMahasiswa.Nim<<std::endl;
    std::cout<<"Jurusan: "<<updateMahasiswa.jurusan<<std::endl;
    std::cout<<"No Telepon: "<<updateMahasiswa.No_telepon<<std::endl;

    std::cout<<"\nMerubah Data"<<std::endl;
    std::cout<<"Masukan Nama: ";
    std::getline(std::cin,updateMahasiswa.Nama);
    std::cout<<"Masukan Nim: ";
    std::getline(std::cin,updateMahasiswa.Nim);
    std::cout<<"Masukan Jurusan: ";
    std::getline(std::cin,updateMahasiswa.jurusan);
    std::cout<<"Masukan No Telepon: ";
    std::getline(std::cin,updateMahasiswa.No_telepon);

    crud::write_data(data,nomor,updateMahasiswa);
}

void crud::delete_data(std::fstream &data){
    int nomor,size,offset;
    mahasiswa blank_mahasiswa,temp_mahasiswa;
    std::fstream dataSementara;

    size=crud::getDatasize(data);
    // 1. pilih nomor
    std::cout<<"Hapus nomor: ";
    std::cin>>nomor;
    // 2. posisi diisi dengan data kosong
    crud::write_data(data,nomor,blank_mahasiswa);
    // 3. cek data yang dari file data.bin, kalau ada kita
    //    pindahkan ke file sementara
    dataSementara.open("temp.dat",std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);
    
    offset=0;
    
    for(int i = 1;i<=size;i++){
        temp_mahasiswa=readData(data,i);
        if(!temp_mahasiswa.Nama.empty()){
            crud::write_data(dataSementara,i-offset,temp_mahasiswa);
        }
        else{
            offset++;
            std::cout<<"Item Deleted"<<std::endl;
        }
    }

    // 4. kita pindahkan dari file sementara ke data.bin 
    size=crud::getDatasize(dataSementara);
    data.close();
    // dibuka tutup agar data yang baru di bersihkan dahulu untuk ditulis kembali 
    dataSementara.open("data.bin",std::ios::trunc|std::ios::out|std::ios::binary);
    dataSementara.close();
    dataSementara.open("data.bin",std::ios::out|std::ios::in|std::ios::binary);
    
    for(int i=1;i<=size;i++){
        temp_mahasiswa=readData(dataSementara,i);
        crud::write_data(data,i,temp_mahasiswa);
    }

};

void crud::Display_Datamahasiswa(std::fstream &data){
    // tentukan sizenya
    int size = crud::getDatasize(data);
    // size yang ditentukan mengikuti size data yang telah diambil
    mahasiswa tampilMahasiswa;
    std::cout<<"no.\tpk.\tNIM.\tNama.\t jurusan.\tNo telepon."<<std::endl;
    for(int i=1; i<=size; i++){
        // fungsinya untuk menampilkan semua data
        tampilMahasiswa = readData(data,i);
        // i digunakan agar data yang diurut sesuai sizenya
        std::cout<<i<<"\t";
        std::cout<<tampilMahasiswa.pk<<"\t";
        std::cout<<tampilMahasiswa.Nama<<"\t";
        std::cout<<tampilMahasiswa.Nim<<"\t";
        std::cout<<tampilMahasiswa.jurusan<<" \t";
        std::cout<<tampilMahasiswa.No_telepon<<"\n\n";
    }
}

