/*
Tanggal     : 23 - 10 - 2025
Deskripsi   : Mencari harga parkir dengan struct
Waktu       : 37 menit 49 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Datang{
    int jam;
    int menit;
    int detik;
};

struct Pulang{
    int jam;
    int menit;
    int detik;
};

Pulang plng;
Datang dtng;

void inD(Datang& t){
    cout << "Kedatangan\t: ";
    cin >> t.jam >> t.menit >> t.detik;
}

void inP(Pulang& t){
    cout << "Kepulangan\t: ";
    cin >> t.jam >> t.menit >> t.detik;
}

void inM(string& M){
    cout << "Jenis Kendaraan : "; cin >> M;
}

void input(Datang& d, Pulang& p, string& M){
    inD(d);
    inP(p);
    inM(M);
}

void park(Pulang p, Datang d, long long& wkt){
    long long dtg = d.jam * 3600 + d.menit * 60 + d.detik;
    long long plg = p.jam * 3600 + p.menit * 60 + p.detik;

    long long pp = plg - dtg;
    wkt = pp / 3600;
    if (wkt * 3600 < pp) wkt += 1;
    cout << setw(2) << pp / 3600; pp = pp % 3600;
    cout << " : " << setw(2) << pp / 60; pp = pp % 60;
    cout << " : " << setw(2) << pp;
}

void output(Pulang p, Datang d, string M){
    long long wkt = 0;
    cout << "\n\nJam Datang\t= " << setw(2) << d.jam << " : " << setw(2) << d.menit << " : " << setw(2) << d.detik << endl;
    cout << "Jam Pulang\t= " << setw(2) << p.jam << " : " << setw(2) << p.menit << " : " << setw(2) << p.detik << endl;
    cout << "Lama Parkir\t= ";
    park(p, d, wkt);
    cout << "\nJenis Kendaraan\t= " << M << endl;
    cout << "Bayar\t\t= ";
    if (M == "Mobil") cout << wkt * 3000;
    else cout << wkt * 2000;

}

int main(){ 
    string M;
    input(dtng, plng, M);
    output(plng, dtng, M);
    return 0;
}
