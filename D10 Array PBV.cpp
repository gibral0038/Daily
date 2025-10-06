/*
Tanggal     : 04 - 10 - 2025
Deskripsi   : Mengisi array menggunakan pass by value
Waktu       : 4 menit 12 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void isi(int kam[], int n){
    for (int a = 0; a < n; a++){
        cin >> kam[a];
    }
}

int main(){ 
    int n, sum = 0;
    cin >> n;
    int arr[n];
    isi(arr, n);
    for (int a = 0; a < n; a++) {
        cout << arr[a] << " ";
        sum += arr[a];
    }
    cout << endl << sum;
}