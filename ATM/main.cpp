#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct data_nasabah{
    char nama[50];
    char alamat[30];
    long int norek;
    double saldo;
};

int main(){
    system("color 17");
    int n=0;
    data_nasabah nas[50];
    int i, pil, pos;
    string cancel;
    long int no;
    double setor, tarik;
    bool ketemu;
    menu:
        system("cls");
        cout<<" _____________________________________________________________ "<<endl;
        cout<<"|                                                             |"<<endl;
        cout<<"|                       BANK MANJA                            |"<<endl;
        cout<<"|_____________________________________________________________|"<<endl;
        cout<<"|_______________________MENU TRANSAKSI________________________|"<<endl;
        cout<<"|     1. PENDAFTARAN NASABAH                                  |"<<endl;
        cout<<"|     2. SETORAN TUNAI                                        |"<<endl;
        cout<<"|     3. PENARIKAN TUNAI                                      |"<<endl;
        cout<<"|     4. CETAK DAFTAR NASABAH                                 |"<<endl;
        cout<<"|     5. CARI NASABAH                                         |"<<endl;
        cout<<"|     6. KELUAR                                               |"<<endl;
        cout<<"|_____________________________________________________________|"<<endl;
        cout<<"PILIHAN ANDA : ";cin>>pil;
        if(pil==1){
            lagi:
                cout<<endl;
                cout<<"==============================================================="<<endl;
                cout<<"MASUKAN NOMOR REKENING : ";cin>>no;
                for(i=0; i<n; i++){
                   if(no==nas[i].norek){
                        ketemu=true;
                        break;
                   }
                    else{
                        ketemu=false;
                    }
                }
                if(ketemu)
                {
                    cout<<"NOMOR REKENING ANDA SUDAH ADA, SILAHKAN KEMBALI LAGI";
                    goto lagi;
                }
                else{
                    cout<<"==============================================================="<<endl;
                    cout<<"MASUKAN NAMA ANDA            : ";cin>>nas[n].nama;
                    cout<<"MASUKAN ALAMAT               : ";cin>>nas[n].alamat;
                    cout<<"MASUKAN SALDO AWAL           : ";cin>>nas[n].saldo;
                }
                n+=1;
                nas[i].norek=no;
                cout<<"\n\nPENDAFTARAN SUKSES !"<<endl;
                cout<<"==============================================================="<<endl;
                cout<<"SILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                goto menu;
        }
        else if(pil==2){
                cout<<endl;
                cout<<"==============================================================="<<endl;
                cout<<"MASUKAN NOMOR REKENING : ";cin>>no;
                for(i=0; i<n; i++){
                    if(no==nas[i].norek){
                        pos=i;
                        ketemu=true;
                        break;
                    }
                    else{
                        ketemu=false;
                    }
                }
                if(ketemu){
                    cout<<"==============================================================="<<endl;
                    cout<<"MASUKAN NOMINAL SETORAN : ";cin>>setor;
                    cout<<endl;
                    nas[pos].saldo=nas[pos].saldo+setor;
                    cout<<"SETOR TUNAI BERHASIL!"<<endl<<endl;
                    cout<<"JUMLAH SALDO ANDA       : Rp."<<nas[pos].saldo<<endl;
                    cout<<"\n\nSILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                    goto menu;
                }
                else{
                    cout<<"NOMOR REKENING TIDAK DI TEMUKAN!"<<"\n\n";
                    cout<<"SILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                    goto menu;
                }
            }
        else if (pil==3){
                cout<<endl;
                cout<<"==============================================================="<<endl;
                cout<<"MASUKAN NOMOR REKENING : ";cin>>no;
                for(i=0;i<n;i++){
                    if(no==nas[i].norek){
                        pos=i;
                        ketemu=true;
                        break;
                    }
                    else{
                        ketemu=false;
                    }
                }
                if(ketemu){
                    cout<<"==============================================================="<<endl;
                    cout<<"MASUKAN NOMINAL UANG YANG DITARIK : ";cin>>tarik;
                    cout<<endl;
                    if(tarik<nas[pos].saldo){
                        nas[pos].saldo=nas[pos].saldo-tarik;
                        cout<<"PENARIKAN  BERHASIL!"<<endl;
                        cout<<"SISA SALDO ANDA                : Rp."<<nas[pos].saldo<<endl;
                        cout<<"\n\nSILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                        goto menu;
                    }
                    else{
                        cout<<"MAAF SALDO ANDA TIDAK MENCUKUPI"<<endl;
                        cout<<"\n\nSILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                    goto menu;
                    }
                }
                else{
                    cout<<"NOMOR REKENING TIDAK DITEMUKAN!"<<"\n\n";
                    cout<<"\n\nSILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
                    goto menu;
                }
            }
        else if(pil==4){
            cout<<endl;
            cout<<" ================================================================== "<<endl;
            cout<<"                        DAFTAR NASABAH BANK                         "<<endl;
            cout<<"|=====|================|=============|==========|===================|"<<endl;
            cout<<"|  NO |   NO REKENING  |    NAMA     |  ALAMAT  | TOTAL SALDO       |"<<endl;
            cout<<"|=====|================|=============|==========|===================|"<<endl;
        for(i=0;i<n;i++){
            cout<<setw(4)<<i+1;;
            cout<<setw(16)<<nas[i].norek;
            cout<<setw(13)<<nas[i].nama;
            cout<<setw(13)<<nas[i].alamat;
            cout<<setw(14)<<(nas[i].saldo)+(nas[i].saldo*0.011)<<endl;
        }
        cout<<"|=====|================|=============|==========|===================|"<<endl;
        cout<<endl;
        cout<<"Jumlah saldo setelah ditambah bunga 1%"<<"\n\n";
        cout<<"SILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
        goto menu;
    }
    else if (pil==5){
        rek :
        cout<<endl;
        cout<<"==============================================================="<<endl;
        cout<<"MASUKAN NOMOR REKENING : ";cin>>no;
        for(i=0; i<n; i++){
            if(no==nas[i].norek){
                pos=i;
                ketemu=true;
                break;
        }
            else{
                ketemu=false;
            }
        }

        if(ketemu){
            cout<<"NO REK                     :"<<nas[pos].norek<<endl;
            cout<<"NAMA                       :"<<nas[pos].nama<<endl;
            cout<<"ALAMAT                     :"<<nas[pos].alamat<<endl;
            cout<<"TOTAL SALDO SETELAH BUNGA  : Rp."<<nas[pos].saldo<<endl;
        }
        else{
            cout<<"MAAF ANDA SALAH MEMASUKAN NOMOR REKENING, SILAHKAN COBA LAGI!"<<endl;
            goto rek;
        }
        cout<<"SILAHKAN MASUK KE MENU UTAMA DENGAN MENGETIK MENU\n";cin>>cancel;
            goto menu;
    }
    else{
        cout<<"\n\n"<<"TERIMA KASIH TELAH BERTRANSAKSI!"<<"\n\n";
    }
}
