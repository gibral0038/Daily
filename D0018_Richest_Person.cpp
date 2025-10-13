/*
Tanggal     : 11 - 10 - 2025
Deskripsi   : Mencari orang dengan jumlah kekayaan terbanyak
Waktu       : 10 menit 33 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int cek(int kaya[], int n, int& orkay){
    int maks = -999;
    for (int a = 0; a < n; a++){
        if (maks < kaya[a]) {
            maks = kaya[a];
            orkay = a;
        }
    }
    return maks;
}

void test(int arr[][100], int n, int m, int kaya[]){
    for (int a = 0; a < n; a++) {
        kaya[a] = 0;
    }
    for (int a = 0; a < n; a++){
        for (int b = 0; b < m; b++){
            kaya[a] += arr[a][b];
        }
    }
}

void input(int arr[][100], int n, int m){
    for (int a = 0; a < n; a++){
        cout << "Masukkan " << m << " kekayaan orang ke-" << a + 1 << " : ";
        for (int b = 0; b < m; b++){
            cin >> arr[a][b];
        }
    }
}

int main(){ 
    int n, m, orkay;
    cout << "Jumlah orang\t: ";
    cin >> n;
    cout << "Jumlah Kekayaan\t: ";
    cin >> m;
    int arr[n][100];
    int kaya[n];
    input(arr, n, m);
    test(arr, n, m, kaya);
    int harta = cek(kaya, n, orkay);
    cout << "Kekayaan tertinggi berjumlah : " << harta << " oleh orang ke-" << orkay;
}
