#include <bits/stdc++.h>
#define pb push_back
using namespace std;

void input(string str[], int &nHuruf){
    cin >> nHuruf;
    for (int i = 0; i < 3; i++){
        cin >> str[i];
    }
}

bool check(unordered_map<char, char>& simpan, const string str[], int nHuruf){
    const string &a = str[0];
    const string &b = str[1];
    unordered_map<char, char> balik;
    for (int i = 0; i < nHuruf; i++){
        if (simpan.count(a[i])){
            if (simpan[a[i]] != b[i]){
                return true;
            }
        } 
        if (balik.count(b[i])) {
            if (balik[b[i]] != a[i]) return true;
        }
        simpan[a[i]] = b[i];
        balik[b[i]] = a[i];
    }
    return false;
}

void ans(unordered_map<char, char> simpan, const string str[], int nHuruf, string& hasil){
    unordered_map<char, char> balik;
    for (auto& p : simpan){
        balik[p.second] = p.first;
    }
    const string &c = str[2];
    for (int i = 0; i < nHuruf; i++){
        if (balik.count(c[i])){
            cout << balik[c[i]];
        } else {
            cout << '?';
        }
    }
}

int main(){
    unordered_map<char, char> simpan;
    int nHuruf;
    string str[3];
    string hasil;
    input(str, nHuruf);
    bool ada = check(simpan, str, nHuruf);
    if (ada) cout << "Pak Dengklek bingung";
    else ans(simpan, str, nHuruf, hasil);
}