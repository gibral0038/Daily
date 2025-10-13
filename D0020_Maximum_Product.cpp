/*
Tanggal     : 14 - 10 - 2025
Deskripsi   : Mencari 2 perkalian tertinggi pada array
Waktu       : 5 menit 16 detik
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

void srt(ll arr[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[b] > arr[b + 1]) tukar(arr[b], arr[b + 1]);
        }
    }
}

int main(){ 
    int n;
    cin >> n;
    ll arr[n];
    input(arr, n);
    srt(arr, n);
    cout << (arr[n - 1] - 1) * (arr[n - 2] - 1);
}
