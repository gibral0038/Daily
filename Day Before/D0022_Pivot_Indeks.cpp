/*
Tanggal     : 15 - 10 - 2025
Deskripsi   : Mencari indeks pivot yang memiliki semua angka dikiri dan kanan sama
Waktu       : 23 menit 19 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int left(ll arr[], int n){
    ll sum = 0;
    for (int a = 0; a < n; a++){
        sum += arr[a];
    }
    return sum;
}

int right(ll arr[], int n, int m){
    ll sum = 0;
    for (int a = m + 1; a < n; a++){
        sum += arr[a];
    }
    return sum;
}

void input(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

int pivot(ll arr[], int n){
    int mid = n / 2;
    bool test, knan = false, kri = false;
    do {
        ll kiri = left(arr, mid);
        ll kanan = right(arr, n, mid);
        if (kiri > kanan){
            mid -= 1;
            kri = true;
            if (knan) break;
        } else if (kiri < kanan){
            mid += 1;
            knan = true;
            if (kri) break;
        } else if (kanan == kiri){
            return mid;
        } else if (mid < 0 || mid >= n){
            return -1;
        }
    } while (test);
    return -1;
}

int main(){ 
    int n, m;
    cout << "Masukkan jumlah array: ";
    cin >> n;
    cout << "Masukkan Array: ";
    ll arr[n];
    input(arr, n);
    cout << pivot(arr, n);
}
