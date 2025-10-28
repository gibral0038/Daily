/*
Tanggal Buat : 27 - 10 - 2025
Deskripsi    : Mmenggunakan record untuk menyimpan dan menyampaikan pesan yang lebih lengkap
Waktu        : 9 menit 47 detik
*/

#include <bits/stdc++.h>
using namespace std;

struct Surat{
    string isi;
    string tempat;
    string tanggal;
};

struct Alamat{
    string namaPenerima;
    string namaPengirim;
    string noPenerima;
    string noPengirim;
    string tujuan;
    Surat srt;
};   

void input(Alamat& st){
    cin >> st.namaPenerima;
    cin >> st.namaPengirim;
    cin >> st.noPenerima;
    cin >> st.noPengirim; cin.ignore();
    getline(cin, st.tujuan); 
    getline(cin, st.srt.isi); 
    getline(cin, st.srt.tempat); 
    getline(cin, st.srt.tanggal);
}

void output(Alamat st){
    cout << "Nama Penerima Surat : " << st.namaPenerima << endl;
    cout << "Nama Pengirim Surat : " << st.namaPengirim << endl;
    cout << "Nomor Telepon Penerima Surat : " << st.noPenerima << endl;
    cout << "Nomor Telepon Pengirim Surat : " << st.noPengirim << endl;
    cout << "Alamat Tujuan Surat : " << st.tujuan << endl;
    cout << "Surat :\n  Isi : " << st.srt.isi << endl;
    cout << "  Tempat Penulisan : " << st.srt.tempat << endl;
    cout << "  Tanggal Penulisan : " << st.srt.tanggal << endl;
}

int main(){
    Alamat st;
    input(st);
    output(st);
}