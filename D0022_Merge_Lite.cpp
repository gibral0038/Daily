/*
Tanggal     : 15 - 10 - 2025
Deskripsi   : Menggunakan merge sort versi lite
Waktu       : 16 menit 45 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void tukar(ll& a, ll& b){
    ll temp = a;
    a = b;
    b = temp;
}

void input(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void merge(ll arr[], ll po[], int n, int m){
    int num = 0;
    for (int a = n; a < n + m; a++){
        arr[a] = po[num];
        num++;
    }
}

void srt(ll arr[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[a] > arr[a + 1]) tukar(arr[a], arr[a + 1]);
        }
    }
}

void output(ll arr[], int x){
    for (int a = 0; a < x; a++){
        cout << arr[a] << " ";
    }
}

int main(){ 
    int n, m;
    cout << "Masukkan jumlah array merge pertama: ";
    cin >> n;
    cout << "Masukkan jumlah array merge kedua: ";
    cin >> m;
    cout << "Masukkan Array pertama: ";
    ll arr[n + m];
    input(arr, n + m);
    cout << "Masukkan Array kedua: ";
    ll po[m];
    input(po, m);
    merge(arr, po, n, m);
    srt(arr, n + m);
    output(arr, n + m);
}
