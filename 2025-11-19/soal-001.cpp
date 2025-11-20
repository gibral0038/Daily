#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll bebek, kucing;
    cin >> bebek >> kucing;
    ll cari = kucing - bebek;
    int tinggi = 0;
    while (pow(2, tinggi) <= cari){
        tinggi++;
    }
    for (tinggi; tinggi >= 0; tinggi--){
        ll beban = pow(2, tinggi);
        if (beban <= cari){
            cari -= beban;
            cout << beban << endl;
        }
    }
}