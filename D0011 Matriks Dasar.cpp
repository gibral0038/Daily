/*
Tanggal     : 04 - 10 - 2025
Deskripsi   : Mencetak matriks, menjumlahkan, dan pengurangan
Waktu       : 8 menit 13 detik
*/ 

#include <bits/stdc++.h>
using namespace std;

typedef int arr[9];

void input(arr& A, arr& B){
    for (int a = 0; a < 9; a++){
        cin >> A[a];
    } 
    for (int a = 0; a < 9; a++){
        cin >> B[a];
    }
}

void output(arr A, arr B){
    cout << "Matriks A:" << endl;
    for (int a = 0; a < 9; a++){
        cout << A[a];
        if (a % 3 == 2) cout << endl;
        else cout << " ";
    }
    cout << "\nMatriks B:" << endl;
    for (int a = 0; a < 9; a++){
        cout << B[a];
        if (a % 3 == 2) cout << endl;
        else cout << " ";
    }
}

void output1(arr A, arr B){
    cout << "Hasil Penjumlahan (A + B):" << endl;
    for (int a = 0; a < 9; a++){
        cout << A[a] + B[a];
        if (a % 3 == 2) cout << endl;
        else cout << " ";
    }
}

void output2(arr A, arr B){
    cout << "Hasil Pengurangan (A + B):" << endl;
    for (int a = 0; a < 9; a++){
        cout << A[a] - B[a];
        if (a % 3 == 2) cout << endl;
        else cout << " ";
    }
}

int main(){
    arr A, B;
    input(A, B);
    output(A, B);
    cout << "\n\n";
    output1(A, B);
    cout << endl;
    output2(A, B);
}