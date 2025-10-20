/*
Tanggal     : 20 - 10 - 2025
Deskripsi   : Count sort
Waktu       : 47 menit 57 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(ll arr[], int n, ll& maks){
    maks = 0;
    for (int a = 0; a < n; a++){
        cin >> arr[a];
        if (arr[a] > maks) maks = arr[a];
    }
}

void output(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
}

void counts(ll arr[], int n, ll maks){
    ll count[maks + 1] = {0}; 
    for (int a = 0; a < n; a++){
        count[arr[a]]++;
    }

    for (int a = 1; a <= maks; a++){
        count[a] += count[a - 1];
    }

    ll hasil[n];
    for (int a = n - 1; a >= 0; a--){
        hasil[count[arr[a]] - 1] = arr[a];
        count[arr[a]]--;
    }    

    for (int a = 0; a < n; a++){
        arr[a] = hasil[a];
    }

}


int main(){ 
    ll n, maks = 0;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[n];
    input(arr, n, maks);
    counts(arr, n, maks);
    cout << "\nHasil count sorting adalah: ";
    output(arr, n);
    
   
}
