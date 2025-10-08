/*
Tanggal     : 5 - 10 - 2025
Deskripsi   : Melakukan rotasi pada array sebanyak k
Waktu       : 12 menit 23 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void input(int arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void rotate(int arr[], int k, int n){
    for (int a = 1; a <= k; a++){
        int temp = arr[0], simpan;
        for (int b = 0; b < n; b++){
            simpan = arr[(b + 1) % n];
            arr[(b + 1) % n] = temp;
            temp = simpan;
        }
    }
}

void tampil(int arr[], int n){
    for (int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
}

int main(){ 
    int n, k;
    cin >> n;
    int arr[n];
    input(arr, n);
    cin >> k;
    rotate(arr, k, n);
    tampil(arr, n);
}