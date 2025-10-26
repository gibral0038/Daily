/*
Tanggal     : 26 - 10 - 2025
Deskripsi   : Mencari urutan nama peserta berdasarkan poin dan penalti
Waktu       : 2 jam
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Player{
    string nama;
    int poin;
    int penalti;
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int h, i, j, k, n;
    cin >> n;
    vector<Player> mn(n);
    
    for (int a = 0; a < n; a++){
        cin >> mn[a].nama;
        cin >> h >> i >> j >> k;
        mn[a].poin = h + j;
        mn[a].penalti = i + k;
    }

    sort(mn.begin(), mn.end(), [](const Player &a, const Player &b){
        if (a.poin != b.poin) return a.poin > b.poin;
        if (a.penalti != b.penalti) return a.penalti < b.penalti;
        return a.nama < b.nama;
    });

    for (auto &x : mn){
        cout << x.nama << endl;
    }

    return 0;
}
    