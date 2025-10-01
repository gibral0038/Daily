/*
Tanggal     : 01 - 10 - 2025
Deskripsi   : mencetak pecahan terkecil dari penjumlahan pecahan yang diinput
Waktu       : 13 menit 40 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c, d, e, f, ant;

    cin >> a >> b >> c >> d;

    e = (a * d) + (c * b);
    f = (b * d);

    ant = __gcd(e, f);
    if (e % ant == 0 && f % ant == 0) cout << e / ant << " " << f / ant << endl;
    else cout << e << " " << f << endl;
}