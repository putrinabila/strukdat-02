
/*
Nama : Putri Nabila
NPM : 140810180007
Kelas : A
Tanggal : 5 Maret 2018 
deksripsi : excercise-01*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
    int umur;
    char nama[30];
    char jenisKelamin[1];
    char goldar[1];
};
int main(){
    Orang orang;
    orang.umur=10;
    strcpy(orang.nama, "Fahmi");
    strcpy(orang.goldar, "O");
    strcpy(orang.jenisKelamin, "L");
    
cout<<orang.umur<<endl;
cout<<orang.nama<<endl;
cout<<orang.goldar<<endl;
cout<<orang.jenisKelamin<<endl;
      
}
