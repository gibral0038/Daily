/*
Tanggal     : 17 - 10 - 2025
Deskripsi   : Insertion Sort
Waktu       : 5 menit 46 detik
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

void ins(ll arr[], int n){
    for (int a = 1; a < n; a++){
        if (arr[a] < arr[a - 1]){
            for (int b = a; b > 0; b--){
                if (arr[b] < arr[b - 1]){
                    swap(arr[b], arr[b - 1]);
                    output(arr, n);
                    cout << endl;
                } else {
                    break;
                }
            }
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
    ins(arr, n);
    //output(arr, n);
}
