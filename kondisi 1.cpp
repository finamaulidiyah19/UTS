#include <iostream>
using namespace std;
#define phi 3.14
#include <windows.h>

  int main ()
{
            char lagi, keluar;
            int pilih;
            float d1,d2,r,s,luas;
            menu:
            keluar:
            system("cls");
                        cout<<"****************************************\n";
                        cout<<"|      Menghitung Luas Bangun Datar                      |\n";
                        cout<<"****************************************\n";
                        cout<<"| 1. Luas jajar genjang                                            |\n";
                        cout<<"| 2. Luas lingkaran                                                  |\n";
                        cout<<"| 3. Luas persegi                                                     |\n";
                        cout<<"| 4. keluar                                                               |\n";
                        cout<<"****************************************\n";
                        cout<<"Masukan pilihan anda [1--4}?";
                        cin>>pilih;
                        cout<<"\n";
            if(pilih==1)
            {
                        cout<<"Luas jajar genjang \n";
                        cout<<"***************************************\n";
                        cout<<"Masukan d1 : ";
                        cin>>d1;
                        cout<<"Masukan d2 : ";
                        cin>>d2;
                        luas=(d1*d2)/2;
                        cout<<"Luas jajar genjang : "<<luas;
                        cout<<"\n\n";
                        cout<<"Masih lanjut[y/t]?";cin>>lagi;
                        if(lagi=='y')
                        if(keluar=='t')
                        goto menu;
                        else goto keluar;
            }
            else if(pilih==2) {
                        cout<<"Luas lingkaran \n";
                        cout<<"***************************************\n";
                        cout<<"Masukan jari-jari :";
                        cin>>r;
                        luas=phi*(r*r);
                        cout<<"Luas lingkaran : "<<luas;
                        cout<<"\n\n";
                        cout<<"Masih lanjut [y/t]?";
                        cin>>lagi;
                        if(lagi=='y')
                        if(keluar=='t')
                        goto menu;
                        else goto keluar;
            }
            else if(pilih==3) {
                        cout<<"Luas persegi \n";
                        cout<<"**************************************\n";
                        cout<<"Masukan sisi :";cin>>s;
                        luas=s*s;
                        cout<<"Luas persegi :"<<luas;
                        cout<<"\n\n";
                        cout<<"Masih lanjut [y/t]?";cin>>lagi;
                        if(lagi=='y')
                        if(keluar=='t')
                        goto menu;
                        else goto keluar;
            }
            else if(pilih==4) {
                        cout<<"\n Matur suwun";      
            }
            else {
            goto menu;
            goto keluar;
            }
            return 0;
}
