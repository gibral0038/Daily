/*
Tanggal     : 13 - 10 - 2025
Deskripsi   : Mencari jumlah angka yang tidak sesuai dengan urutan seharusnya
Waktu       : 9 menit 14 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void tukar(ll& a, ll& b){
    ll temp = a;
    a = b;
    b = temp;
}

void input(ll arr[], ll tiru[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
        tiru[a] = arr[a];
    }
}

void st(ll tiru[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (tiru[b] > tiru[b + 1]) tukar(tiru[b], tiru[b + 1]);
        }
    }
}

int ce(ll arr[], ll tiru[], int n){
    int temp = 0;
    for (int a = 0; a < n; a++){
        if (arr[a] != tiru[a]) temp++;
    }
    return temp;
}

int main(){ 
    int n;
    cin >> n;
    ll arr[n];
    ll tiru[n];
    input(arr, tiru, n);
    st(tiru, n);
    cout << ce(arr, tiru, n);
}
