/*
Tanggal     : 24 - 09 - 2025
Deskripsi   : Mencetak pola huruf f dengan bentuk mengikuti input n
Waktu       : 6 menit 32 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int a = 1; a <= n * 5; a++){
        if (a <= n){
            for (int b = 1; b <= n * 5; b++){
                cout << 'F';
            }
        } else if (a <= n * 2){
            for (int b = 1; b <= n; b++){
                cout << 'F';
            }
        } else if (a <= n * 3){
            for (int b = 1; b <= n * 5; b++){
                cout << 'F';
            }
        } else if (a <= n * 5){
            for (int b = 1; b <= n; b++){
                cout << 'F';
            }
        }
        cout << endl;
    }
}