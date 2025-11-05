#include <bits/stdc++.h>
#include <fstream>
using  namespace std;

void input(string str, int enc, string file){
    ofstream out_file;
    out_file.open(file);
    for (int a = 0; a < str.length(); a++){
        if (isalpha(str[a])){
            if ((str[a] + enc) > 'Z'){
                out_file << char(str[a] + enc - 26);
            }
            else out_file << char(str[a] + enc);
        }
        else if (isspace(str[a])){
            out_file << str[a];
        }
    }
    out_file.close();
}

void output(string file){
    ifstream in_file(file);
    string str1;
    while(getline(in_file, str1)){
        cout << str1;
    }
    in_file.close();
}

int main(){
    string str, file;
    int enc;
    getline(cin, str);
    cin >> enc;
    cin >> file;
    
    input(str, enc, file);
    output(file);
}