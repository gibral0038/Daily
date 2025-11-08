/*
Tanggal     : 07 - 10 - 2025
Deskripsi   : Mencari 2 isi array yang jika dijumlahkan sesuai target
Waktu       : 13 menit 49 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void input(int arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void sum(int arr[], int n, int tr){
    bool ada = false;
    for (int a = 0; a < n - 1; a++){
        int cari = tr - arr[a];
        for (int b = a + 1; b < n; b++){
            if (arr[b] == cari) {
                ada = true;
                cout << "Indeks ke : " << a << " dan " << b;
                break;
            }
        }
        if (ada){
            break;
        }
    }
    if (!ada) cout << "Tidak ada";
}

int main(){ 
    int n, tr;
    cin >> n;
    int arr[n];
    input(arr, n);
    cin >> tr;
    sum(arr, n, tr);
    
}