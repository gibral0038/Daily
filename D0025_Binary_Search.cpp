/*
Tanggal     : 18 - 10 - 2025
Deskripsi   : Binary search
Waktu       : 12 menit 20 detik
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

void binsearch(ll arr[], int n, ll indx[], ll key){
    int kr = 0, kn = n - 1, mid;
    bool found = false;
    while(kr <= kn){
        mid = (kr + kn) / 2;
        if (arr[mid] == key){
            cout << "Ditemukan pada masukan ke-" << indx[mid] + 1;
            found = true;
            break;
        } else {
            if (arr[mid] > key){
                kn = mid - 1;
            } else if (arr[mid] < key){
                kr = mid + 1;
            }
        }
    }
    if (!found) cout << "Not found!";
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
    binsearch(arr, n, indx, key);
    //output(arr, n);
}
