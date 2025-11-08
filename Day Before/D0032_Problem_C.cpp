/*
Tanggal     : 25 - 10 - 2025
Deskripsi   : Mengubah string berdasarkan penggunaan huruf C
Waktu       : 20 menit 17 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void input(string arr[], int n){
    for (int a = 0; a < n; a++){
        cin >> arr[a];
    }
}

void output(string arr[], int n){
    for (int a = 0; a < n; a++){
        string temp = arr[a];
        int ln = temp.length();
        for (int b = 0; b < ln; b++){
            if (temp[b] == 'c'){
                if (b == ln - 1) cout << 'k';
                else if (temp[b + 1] == 'e' || temp[b + 1] == 'y' || temp[b + 1] == 'i'){
                    cout << 's';
                } else if (temp[b + 1] == 'h'){
                    cout << 'c';
                    b++;
                } else {
                    cout << 'k';
                }
            } else {
                cout << temp[b];
            }
        }
        cout << endl;
    }
}

int main(){ 
    int n;
    cin >> n;
    string arr[n];
    input(arr, n);
    output(arr, n);
}