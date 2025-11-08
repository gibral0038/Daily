/*
Tanggal     : 24 - 09 - 2025
Deskripsi   : Melakukan operasi matematika berdasarkan string yang diterima
Waktu       : 30 menit 23 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

int conv1(string math, int tanda){
    int num = 0;
    for (int a = 0; a < tanda; a++){
        num = (num * 10) + (math[a] - 48);
    }
    return num;
}

int conv2(string math, int tanda){
    int num = 0;
    int panjang = math.length();
    for (int a = tanda + 1; a < panjang; a++){
        num = (num * 10) + (math[a] - 48);
    }
    return num;
}

int main(){
    string math;
    int tanda;
    cin >> math;
    int panjang = math.length();
    for (int a = 0; a <= panjang; a++){
        if (math[a] == '+' || math[a] == '-' || math[a] == '*' || math[a] == '/'){
            tanda = a;
        }
    }
    int num1 = conv1(math, tanda);
    int num2 = conv2(math, tanda);
    switch (math[tanda]){
        case '+' : 
            cout << num1 + num2; 
            break;
        case '-' : 
            cout << num1 - num2; 
            break;
        case '*' : 
            cout << num1 * num2; 
            break;
        case '/' : 
            cout << num1 / num2; 
            break;
        default : 
            cout << "error";    
            break;
    }
    

}