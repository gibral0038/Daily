/*
Tanggal     : 21 - 10 - 2025
Deskripsi   : Begin Struct
Waktu       : 7 menit 23 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct mahasiswa{
    void cdata(){
        cout << "Data mahasiswa : \n"; 
    }
    string nama;
    int npm;
    int nilai[2];
};

typedef mahasiswa arr[10];
arr mhs;

void inputmhs(arr& mhs, int n){

    for (int a = 0; a < n; a++){
        //mahasiswa.cdata();
        cout << "\nMahasiswa ke-" << a + 1 << " :\n";
        cout << "Nama\t: "; cin >> mhs[a].nama;
        cout << "NPM\t: "; cin >> mhs[a].npm;
        cout << "Nilai\t: ";
        for (int b = 0; b < 2; b++){
            cin >> mhs[a].nilai[b];
        }
    }
}

void outputmhs(arr& mhs, int n){
    for (int a = 0; a < n; a++){
        //mahasiswa.cdata();
        cout << "Nama\t: " << mhs[a].nama << endl;
        cout << "NPM\t: " << mhs[a].npm << endl;
        cout << "Nilai\t:" << "\n  - UTS : " << mhs[a].nilai[0] << "\n  - UAS : " << mhs[a].nilai[1];
        cout << "\n\n";
    }
}

int main(){ 
    int n;
    cout << "Jumlah Mahasiswa: "; cin >> n;
    inputmhs(mhs, n);
    cout << "\n\n"; 
    outputmhs(mhs, n);
   
}
