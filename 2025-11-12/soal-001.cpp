#include <bits/stdc++.h>
using namespace std;

void ubahNilai(int* ptrA, int& refB){
    refB += *ptrA * 2;
}

void tukarPointer(int*& p1, int*& p2){
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(){
    int varA, varB, varC;
    cin >> varA >> varB >> varC;
    int *ptrA = &varA;
    int *ptrB = &varB;
    ubahNilai(ptrA, varC);
    tukarPointer(ptrA, ptrB);
    cout << varA << " " << varB << " " << varC << " " << *ptrA << " " << *ptrB;
}