#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void konversi(ll number, int basis){
    if (number < basis) {
        cout << number;
        return;
    }
    konversi(number / basis, basis);
    cout << number % basis;
}

int main(){
    ll number;
    int basis;
    cin >> number >> basis;
    konversi(number, basis);
}