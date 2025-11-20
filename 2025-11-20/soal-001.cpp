#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int jmlcari;
    cin >> jmlcari;
    vector<int> cari;
    vector<int> ketemu;
    int maks;
    for (int i = 0; i < jmlcari; i++){
        int n;
        cin >> n;
        cari.pb(n);
        maks = max(maks, n);
    }

    long long idx = 3;
    ketemu.pb(2);
    while (ketemu.size() < maks){
        bool prima = true;
        long long batas = sqrt(idx);
        for (long long i : ketemu){
            if (i > batas) break;
            if (idx % i == 0){
                prima = false;
            }
        }
        if (prima) ketemu.pb(idx);
        idx += 2;
    }

    for (auto p : cari){
        cout << ketemu[p - 1] << endl;
    }
}