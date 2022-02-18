#include <iostream>
#include <string>
#include <fstream>

namespace crud{

struct mahasiswa{
    int pk;
    std::string Nama;
    std::string Nim;
    std::string jurusan;
    std::string No_telepon;

    };

void checkData(std::fstream &data);

int getOption();

void addMahasiswa(std::fstream &data);

void write_data(std::fstream &data, int posisi, mahasiswa &input_mahasiswa);

int getDatasize (std::fstream &data);

  // readData(data,size);
    // karna kita ingin pk nya diitung pk sebelumnya maka kita melihat pk-1(kebelakang)
mahasiswa readData(std::fstream &data, int posisi);

void update_data(std::fstream &data);

void delete_data(std::fstream &data);

void Display_Datamahasiswa(std::fstream &data);

};