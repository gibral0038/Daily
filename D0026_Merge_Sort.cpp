/*
Tanggal     : 18 - 10 - 2025
Deskripsi   : Merge sort
Waktu       : 1 jam
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

void merge(ll arr[], int l, int m, int r, int n){
    int i, j, k, nl, nr;
    nl = m - l + 1;
    nr = r - m;
    ll lar[nl], rar[nr];

    for (int a = 0; a < nl; a++){
        lar[a] = arr[l + a];
    }

    for (int a = 0; a < nr; a++){
        rar[a] = arr[m + a + 1];
    }
    i = 0; j = 0; k = l;
    while (i < nl && j < nr){
        if (lar[i] <= rar[j]){
            arr[k] = lar[i];
            i++;
        } else {
            arr[k] = rar[j];
            j++;
        }
        k++;
    }

    while (i < nl){
        arr[k] = lar[i];
        k++;
        i++;
    }
    while (j < nr){
        arr[k] = rar[j];
        k++;
        j++;
    }
    output(arr, n);
    cout << endl;

}

void msort(ll arr[], int l, int r, int n){
    int m = l + (r - l) / 2;
    if (l < r){
        msort(arr, l, m, n);
        msort(arr, m + 1, r, n);
        merge(arr, l, m, r, n);
    } 
}


int main(){ 
    ll n;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    cout << "Masukkan Array: " << endl;
    ll arr[n];
    input(arr, n);
    cout << "\nProses yang dilalui yaitu: \n";
    msort(arr, 0, n - 1, n);
    cout << "\nHasil Merge Sorting adalah: ";
    output(arr, n);
    
   
}
