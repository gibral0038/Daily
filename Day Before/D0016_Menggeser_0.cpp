/*
Tanggal     : 09 - 10 - 2025
Deskripsi   : Menggeser semua angka genap ke kiri
Waktu       : 10 menit 08 detik
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

void srt(int arr[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[b] % 2 == 1) {
                if (arr[b + 1] % 2 != 1) tukar(arr[b], arr[b + 1]);
            }
        }
    }
}

void output(int arr[], int n){
    for (int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
}

int main(){ 
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);
    srt(arr, n);
    output(arr, n);
}
