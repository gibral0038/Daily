/*
Tanggal     : 18 - 10 - 2025
Deskripsi   : Linear Search
Waktu       : 8 menit 19 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(ll arr[], int n, ll indx[]){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
        indx[a] = a;
    }
}

void output(ll arr[], int n){
    for (int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
}

void srt(ll arr[], int n, ll indx[]){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (arr[b] > arr[b + 1]){
                ll temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
                temp = indx[b];
                indx[b] = indx[b + 1];
                indx[b + 1] = temp;
            }
        }
    }
}

void linsearch(ll arr[], int n, ll indx[], ll key){
    for (int a = 0; a < n; a++){
        if (arr[a] == key){
            cout << "Ditemukan pada masukan ke-" << indx[a] + 1;
            break;
        }   
        else if (arr[a] > key){
            cout << "not found!";
            break;
        } else if (a == n - 1){
            cout << "not found!";
            break;
        }
    }
}



int main(){ 
    ll n, key;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[n], indx[n];
    input(arr, n, indx);
    srt(arr, n, indx);
    cout << "Masukkan Angka yang mau dicari: ";
    cin >> key;
    linsearch(arr, n, indx, key);
    //output(arr, n);
}