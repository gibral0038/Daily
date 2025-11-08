/*
Tanggal     : 16 - 10 - 2025
Deskripsi   : Merotasi matriks dengan merotasi isi alamat pada matriks 
Waktu       : 2 jam-an
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(ll arr[21][21], int n){
    for (int a = 0; a < n; a++){
        for (int b = 0; b < n; b++){
            cin >> arr[a][b];
        }
    }
}

void ubahT(ll arr[21][21], int n){
    for (int a = 0; a < n; a++){
        for (int b = a; b < n; b++){
            swap(arr[a][b], arr[b][a]);
        }
    }
}

void output(ll arr[21][21], int n){
    for (int a = 0; a < n; a++){
        for (int b = 0; b < n; b++){
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }
}

void ubahB(ll arr[21][21], int n){
    for (int a = 0; a < n; a++){
        for (int b = 0; b < n / 2; b++){
            swap(arr[a][b], arr[a][n - b - 1]);
        }
    }
}



int main(){ 
    int n;
    cout << "Masukkan ukuran matriks: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[21][21];
    input(arr, n);
    cout << endl;
    output(arr, n);
    cout << endl;
    ubahT(arr, n);
    cout << endl;
    output(arr, n);
    cout << endl;
    ubahB(arr, n);
    cout << "\n\nHasil Rotasi:\n";
    output(arr, n);
}
