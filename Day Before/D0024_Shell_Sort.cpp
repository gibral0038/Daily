/*
Tanggal     : 17 - 10 - 2025
Deskripsi   : Shell Sort
Waktu       : 15 menit 17 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void output(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
}

void shell(ll arr[], int n){
    int c;
    for (int a = n / 2; a > 0; a /= 2){
        for (int b = a; b < n; b += a){
            ll temp = arr[b];
            for (c = b; c >= a && temp < arr[c - a]; c -= a){
                arr[c] = arr[c - a];
            }
            arr[c] = temp;
            output(arr, n);
            cout << endl;
        }
    }
}



int main(){ 
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[n];
    input(arr, n);
    shell(arr, n);
    //output(arr, n);
}
