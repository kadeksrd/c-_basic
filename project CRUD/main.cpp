#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include "main.h"

int main()
{
 // mengecek database baru 
    std::fstream data;

    crud::checkData(data);
    char lanjutkan;

    menu:
    int pilihan=crud::getOption();    
    enum option{CREATE=1,READ,UPDATE,DELETE};
    

    while(pilihan != 5){
        switch (pilihan)
        {
        case CREATE:
            std::cout<<"Menambah Data Mahasiswa"<<std::endl;
            crud::addMahasiswa(data);
            break;
        case READ:
            std::cout<<"Menampilkan Data Mahasiswa"<<std::endl;
            crud::Display_Datamahasiswa(data);
            break;
        case UPDATE:
            std::cout<<"Mengubah Data Mahasiswa"<<std::endl;
            crud::Display_Datamahasiswa(data);
            std::cout<<"Update Record (data)"<<std::endl<<std::endl;
            crud::update_data(data);
            crud::Display_Datamahasiswa(data);
            break;
        case DELETE:
            crud::Display_Datamahasiswa(data);
            std::cout<<"Menghapus Data Mahasiswa"<<std::endl;
            crud::delete_data(data);
            crud::Display_Datamahasiswa(data);
            break;    
        default:
            std::cout<<"Pilihan Tidak ada Silahkan coba lagi"<<std::endl;
            goto menu;
            break;
        }
        lanjut:
        std::cout<<"Lanjutkan [y/n] ? : ";
        std::cin>>lanjutkan;
        if((lanjutkan=='y'||lanjutkan=='Y')){
            goto menu;
         }
        else if((lanjutkan=='n'||lanjutkan=='N')){
            break;
        }
        else{
            goto lanjut; 
        }
    }
        std::cout<<"Akhir Dari Program"<<std::endl;

        std::cin.get();
        return 0;
}


