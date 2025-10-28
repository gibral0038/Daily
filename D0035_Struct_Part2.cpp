/*
Tanggal Buat : 28 - 10 - 2025
Deskripsi    : Menggunakan record untuk menampilkan persentase kesuksesan berdasarkan vanue dan tiket
Waktu        : 18 menit 34 detik
*/

#include <bits/stdc++.h>
using namespace std;

struct Kota{
    string nama;
    int vanue;
    int tiket;
    double percent(){
        return (double) vanue / tiket * 100;
    }
};

void input(Kota kt[], int n){
    for (int a = 0; a < n; a++){
        cin >> kt[a].nama >> kt[a].vanue >> kt[a].tiket;
    }
}

void srt(Kota kt[], int n){
    for (int a = 0; a < n - 1; a++){
        for (int b = 0; b < n - a - 1; b++){
            if (kt[b].percent() < kt[b + 1].percent()){
                swap(kt[b], kt[b + 1]);
            }
        }
    }
}

void output(Kota kt[], int n){
    for (int a = 0; a < n; a++){
        cout << fixed << setprecision(2) << kt[a].percent() << " " << kt[a].nama << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Kota kt[n];
    input(kt, n);
    srt(kt, n);
    output(kt, n);
}