/*
Tanggal     : 06 - 10 - 2025
Deskripsi   : Menempatkan angka 0 pada array menjadi bagian paling belakang dari array
Waktu       : 5 menit 12 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void tukar(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void input(int arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void zeros(int arr[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[b] == 0) tukar(arr[b], arr[b + 1]);
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
    zeros(arr, n);
    tampil(arr, n);
}