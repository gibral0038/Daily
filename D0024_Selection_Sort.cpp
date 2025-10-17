/*
Tanggal     : 17 - 10 - 2025
Deskripsi   : Selection Sort
Waktu       : 13 menit 28 detik
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

void selec(ll arr[], int n){
    for (int a = 0; a < n; a++){
        ll mn = 1000000;
        ll idx;
        for (int b = a; b < n; b++){
            if (arr[b] < mn){
                mn = arr[b];
                idx = b;
            }
        }
        swap(arr[a], arr[idx]);
        output(arr, n);
        cout << "  " << a << " " << idx << endl;
    }
}



int main(){ 
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[n];
    input(arr, n);
    selec(arr, n);
    //output(arr, n);
}
