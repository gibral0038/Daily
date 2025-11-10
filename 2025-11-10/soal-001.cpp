#include <bits/stdc++.h>
using namespace std;

void output(string str, int nAkar){
    int temp = str.length();
    int batas = nAkar * nAkar;
    for (int i = temp; i <= batas; i++){
        str += '.';
    }
    for (int i = 0; i < nAkar; i++){
        if (i % 2 == 0){
            for (int j = i * nAkar; j < (i + 1) * nAkar; j++){
                cout << str[j];
            }
        } else {
            for (int j = (i + 1) * nAkar - 1; j >= i * nAkar; j--){
                cout << str[j];
            }
        }
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    int nAkar = ceil(sqrt(str.length()));
    output(str, nAkar);
}