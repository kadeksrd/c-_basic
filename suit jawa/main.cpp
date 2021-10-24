#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{
   int acak, pilihan;
   string yakin;
   system("color 02");
   srand(time(NULL));
   acak =rand()%3;
   menu :
   cout<<endl;
   cout<<"====================Permainan Suit China======================"<<"\n\n";
   cout<<"==========Permainan Gunting Batu Kertas dengan Komputer======="<<"\n\n";
   cout<<"Pilihannya"<<endl;
   cout<<"[1] Gunting"<<endl;
   cout<<"[2] KERTAS"<<endl;
   cout<<"[3] BATU"<<endl;
   cout<<"[4] Keluar"<<endl;
   cout<<endl;
    cout<<"=============================================================="<<endl;
   cout<<"Silahakan Pilih Disini: ";cin>>pilihan;
   cout<<"=============================================================="<<endl;
    if(pilihan==1){
        cout<<"\nKamu Memilih : GUNTING"<<endl;
        if(acak<=1){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : BATU"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU KALAH!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
        else if(acak>=1 && acak<=2){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : KERTAS"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU MENANG!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            system("cls");
            goto menu;
        }
        else{
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : GUNTING"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>HASILNYA SERI!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
    }
  else if (pilihan==2){
    cout<<"\nKamu Memilih : KERTAS"<<endl;
        if(acak<=1){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : BATU"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU MENANG!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
        else if(acak>=1 && acak<=2){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : KERTAS"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>HASILNYA SERI!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
        else{
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : GUNTING"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU KALAH!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
    }
    else if (pilihan==3){
        cout<<"\nKamu Memilih : BATU"<<endl;
        if(acak<=1){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : BATU"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>HASILNYA SERI!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
        else if(acak>=1 && acak<=2){
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : KERTAS"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU KALAH!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;
        }
        else{
            cout<<"======================="<<endl;
            cout<<"\nKomputer Memilih : GUNTING"<<endl;
            cout<<"======================="<<endl;
            cout<<"\n\n\n";
            cout<<"\t\t\t=======================\t\t\t"<<endl;
            cout<<"   \t\t\t==>KAMU MENANG!<===\t\t\t"<<endl;
            cout<<"\t\t\t=======================\t\t\t";
            cout<<"\n\n\n";
            goto menu;

            }
     }
     else if(pilihan==4){
        ulangi :
        cout<<"KAMU YAKIN INGIN KELUAR? (Y/N)"<<endl;
        cout<<"KETIK DISINI : ";cin>>yakin;
            if(yakin=="Y"){
                cout<<endl;
                cout<<"==========TERIMA KASIH=========="<<endl;
                cout<<"\n\n\nENTER";
                getch();
                return 0;
            }
            else if(yakin=="N"){
                system("cls");
                goto menu;
            }
            else{
                cout<<"MAAF KAMU SALAH MASUKAN PILIHAN SILAHAKAN ULANGI KEMBALI"<<endl;
                goto ulangi;
            }
     }
     else{
        cout<<"MAAF KAMU SALAH MASUKAN PILIHAN SILAHKAN ULANGI KEMBALI";
        goto menu;
        system("cls");
     }
}
