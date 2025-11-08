/*
Tanggal     : 14 - 10 - 2025
Deskripsi   : Mencari jumlah digit yang genap
Waktu       : 7 menit 37 detik 
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

int cek(ll arr[], int n){
    int sum = 0, cari;
    for (int a = 0; a < n; a++){
        int temp = 0;
        cari = arr[a];
        while(cari != 0){
            cari = cari / 10;
            temp++;
        }
        if (temp % 2 == 0) sum++;
    }
    return sum;
}

int main(){ 
    int n;
    cin >> n;
    ll arr[n];
    input(arr, n);
    cout << cek(arr, n);
}
