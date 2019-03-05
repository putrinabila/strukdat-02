
/*
Nama : Putri Nabila
NPM : 140810180007
Kelas : A
Tanggal : 5 Maret 2018 
deksripsi : excercise-03*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Pegawai{
 char NIP[30];
 char nama[100];
 int golongan;
 int gaji;
};
Pegawai pgw[20];
void banyakData(int &n){
 cout<<"Masukkan jumlah pegawai : ";
 cin>>n;
}
void inputPegawai(Pegawai pgw[],int &n){
 for (int i=0;i<n;i++){
        cout << "Masukkan data pegawai " << i+1 << endl;
        cout << "NIP        : "; cin >> pgw[i].NIP;
        cout << "Nama       : "; cin >> pgw[i].nama;
        cout << "Golongan   : "; cin >> pgw[i].golongan;
        cout << endl;
    }
}
void sortingGol(Pegawai pgw[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
    temp = pgw[i];
    while(i>0 && pgw[i-1].golongan>temp.golongan){
    pgw[i]= pgw[i-1];
    i = i-1;
        }
    pgw[i]= temp;
    }
}
void sortingNIP(Pegawai pgw[], int &n){
 int i;
 Pegawai temp;
 for(i=1; i<n; i++){
        temp = pgw[i];
        while(i>0 && pgw[i-1].NIP>temp.NIP){
            pgw[i] = pgw[i-1];
            i = i-1;
        }
        pgw[i]= temp;
    }
}
void daftarGaji (Pegawai pgw[], int &n){
 for (int i=0; i<n; i++){
  if (pgw[i].golongan == 1){
   pgw[i].gaji=2000000;
  }
  else if (pgw[i].golongan == 2){
   pgw[i].gaji=3000000;
  }
  else if (pgw[i].golongan == 3){
   pgw[i].gaji=5000000;
  }
  else if (pgw [i].golongan == 4){
   pgw[i].gaji=8000000;
  }
 }
}
int rataRata (Pegawai pgw [], int &n, int& rataGaji){
 int gajiTotal=0;
 for (int i=0 ; i<n ; i++){
  gajiTotal= gajiTotal+pgw[i].gaji;
 }
 rataGaji=gajiTotal/n;
 return(rataGaji);
}
void outputPegawai (Pegawai pgw[], int n, int rataGaji){
    sortingNIP(pgw, n);
    daftarGaji(pgw, n);
    for (int i=0; i<n;i++){
   cout << "NIP    : " << pgw[i].NIP << endl;
   cout << "Nama   : " << pgw[i].nama << endl;
   cout << "Gaji   : " << pgw[i].gaji << endl;
   cout << endl;
  }
    rataRata(pgw, n, rataGaji);
    cout << "Rata-rata Gaji Pegawai : " << rataGaji << endl;
    sortingGol(pgw, n);
    cout<<"Pegawai dengan gaji tertinggi : "<<pgw[n-1].nama<<endl;
    cout<<"Pegawai dengan gaji terendah : "<<pgw[0].nama<<endl;
}
int main(){
 int n, rataGaji;
 banyakData(n);
 inputPegawai(pgw,n);
 system("cls");
 cout << "DAFTAR PEGAWAI\n";
    outputPegawai(pgw, n, rataGaji);
}
