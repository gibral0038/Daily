#include <bits/stdc++.h>
#define pb push_back
using namespace std;

using um = unordered_map<string, string>;

void input(um& wartel, int nLog){
    string nama, num;
    for (int i = 0; i < nLog; i++){
        cin >> nama >> num;
        wartel[nama] = num;
    }
}

void fCari(const um& wartel, int nCari){
    vector<string> cari;
    string nama;
    for (int i = 0; i < nCari; i++){
        cin >> nama;
        cari.pb(nama);
    }

    for (int i = 0; i < nCari; i++){
        auto it = wartel.find(cari[i]);
        if (it != wartel.end()){
            cout << it -> second << endl;
        } else cout << "NIHIL" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    um wartel;
    int nLog, nCari;
    cin >> nLog >> nCari;
    input(wartel, nLog);
    fCari(wartel, nCari);
}