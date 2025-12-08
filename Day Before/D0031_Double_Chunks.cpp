/*
Tanggal     : 24 - 10 - 2025
Deskripsi   : Mencari jumlah kemunculan maksimal penjumlahan 2 angka
Waktu       : 2 jam
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input (ll arr[], ll n){
    for (ll a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void out(ll arr[], ll n, map<ll, ll>& show){
    ll temp = -1, mn = 0;
    for (ll a = 0; a < n - 1; a++){
        if (arr[a] + arr[a + 1] == temp) {
            temp = -1;
            continue;
        }
        else{
            show[arr[a] + arr[a + 1]]++;
            temp = arr[a] + arr[a + 1];
        }
        if(show[arr[a] + arr[a + 1]] > mn) mn = show[arr[a] + arr[a + 1]];
    }
    cout << mn;
}

int main(){ 
    ll n;
    cin >> n;
    ll arr[n];
    input(arr, n);
    map<ll, ll> show;
    out(arr, n, show);


    return 0;
}