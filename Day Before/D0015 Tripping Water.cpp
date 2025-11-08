/*
Tanggal     : 08 - 10 - 2025
Deskripsi   : Menghitung jumlah blok air yang terjebak
Waktu       : 3 jam-an
*/ 

#include <bits/stdc++.h>
using namespace std;

void tinggi(int arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

int isi(int arr[], int n){
    int kiri[n], kanan[n];

    kiri[0] = arr[0];
    for (int a = 1; a < n; a++){
        kiri[a] = max(kiri[a - 1], arr[a]);
    }
    kanan[n - 1] = arr[n - 1];
    for (int a = n - 2; a >= 0; a--){
        kanan[a] = max(kanan[a + 1], arr[a]);
    }
    int total = 0;
    for (int a = 0; a < n; a++){
        total = total + (min(kiri[a], kanan[a]) - arr[a]);
    }
    return total;
}

int main(){ 
    int n, maks = -1;
    cin >> n;
    int arr[n];
    tinggi(arr, n);
    cout << isi(arr, n);
     
}