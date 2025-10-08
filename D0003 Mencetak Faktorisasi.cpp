/*
Tanggal     : 26 - 09 - 2025
Deskripsi   : Mencetak faktorisasi dari bilangan yang diberikan
Waktu       : 9 menit 19 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

void faktor(int n){
    for (int a = 2; a <= n; a++){
        int temp = 1;
        if (n % a == 0){
            n /= a;
            while (n % a == 0){
                temp++;
                n /= a;
            }
            cout << a;
            if (temp > 1) cout << "^" << temp;
            if (n > 1) cout << " x "; 
        }
    }
}

int main(){
    int n;
    cin >> n;
    faktor(n);
}