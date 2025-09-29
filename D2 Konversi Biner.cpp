/*
Tanggal     : 25 - 09- 2025
Deskripsi   : Mencetak angka biner dari angka n yang diberikan
Waktu       : 2 menit 7 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void konversi(int angka){
    if (angka / 2 != 0) {
        konversi(angka / 2);
    }
    cout << angka % 2;

}

int main(){
    int angka;
    cin >> angka;
    konversi(angka);
}