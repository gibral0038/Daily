/*
Tanggal     : 10 - 10 - 2025
Deskripsi   : mengubah array menjadi bertingkat dan jumlah operasi
Waktu       : 4 menit 42 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int inc(int arr[], int n){
    int num = 0;
    for (int a = 1; a < n; a++){
        while (arr[a] <= arr[a - 1]){
            arr[a]++;
            num++;
        }
    }
    return num;
}

void input(int arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

int main(){ 
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);
    cout << inc(arr, n);
}
