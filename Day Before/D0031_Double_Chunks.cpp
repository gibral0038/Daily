/*
Tanggal     : 24 - 10 - 2025
Deskripsi   : Mencari jumlah kemunculan maksimal penjumlahan 2 angka
Waktu       : 2 jam
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input (ll arr[], ll n, ll& max){
    for (ll a = 0; a < n; a++){
        cin >> arr[a];
        if (arr[a] > max) max = arr[a];
    }
}

void out(ll arr[], ll n, ll max, map<ll, ll>& show){
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
    ll n, max = 0;
    cin >> n;
    ll arr[n];
    input(arr, n, max);
    map<ll, ll> show;
    out(arr, n, max, show);


    return 0;
}