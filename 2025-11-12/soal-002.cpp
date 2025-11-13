#include <bits/stdc++.h>
using namespace std;

int* buatArray(int n){
    int* arr = new int[n];
    for (int i = 1; i <= n; i++){
        arr[i - 1] = i;
    }
    return arr;
}

void ubahData(int*& ptr, int n){
    for (int i = 0; i < n; i++){
        ptr[i] *= 2;
    }
    if (n >= 5){
        for (int i = 1; i < n; i += 2){
            ptr[i] += 5;
        }
    }
}

void tukarArray(int** p1, int** p2){
    int* temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int* arr1 = buatArray(n1);
    int* arr2 = buatArray(n2);
    ubahData(arr1, n1);
    ubahData(arr2, n2);
    tukarArray(&arr1, &arr2);
    for (int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
    delete[] arr1;
    delete[] arr2;
}