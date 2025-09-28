/*
Tanggal     : 24 - 09 - 2025
Deskripsi   : Mencetak angka yang merupakan faktor dari n
Waktu       : 55 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int a = 1; a <= n; a++){
        if (n % a == 0) cout << a << " ";
    }
    return 0;
}