/*
Tanggal     : 12 - 10 - 2025
Deskripsi   : Mencetak penjumlahan sesuai array yang berjalan
Waktu       : 4 menit 24 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void input(long long arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void output(long long arr[], int n){
    long long sum = 0;
    for (int a = 0; a < n; a++){
        sum += arr[a];
        cout << sum << " ";
    }
}

int main(){ 
    int n;
    cin >> n;
    long long arr[n];
    input(arr, n);
    output(arr, n);
}
