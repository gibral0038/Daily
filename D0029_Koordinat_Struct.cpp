/*
Tanggal     : 22 - 10 - 2025
Deskripsi   : Mencari koordinast titik tengah, cerminan x dan y 
Waktu       : 24 menit 45 detik
*/ 

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct koordinat{
    int absis;
    int ordinat;
};

typedef koordinat koor[2];
koor kr;

void inputKoor(koor& kr){
    for (int a = 0; a < 2; a++){
        cout << "Titik ";
        if (a == 0) cout << "A : ";
        else cout << "B : ";
        cin >> kr[a].absis;
        cin >> kr[a].ordinat;
    }
}

void tTengah(koor kr){
    double tAbsis = (kr[0].absis + kr[1].ordinat) / 2.0;
    double tOrdinat = (kr[0].ordinat + kr[1].absis) / 2.0;
    cout << "\nTitik tengah : (" << tAbsis << " , " << tOrdinat << ")\n\n";

}

void cerminX(koor kr){
    for (int a = 0; a < 2; a++){
        cout << "Koordinat ";
        if (a == 0) cout << "A";
        else cout << "B";
        cout << " dicerminkan sumbu X : ";
        if (a == 0) cout << "A";
        else  cout << "B";
        cout << "'(" << kr[a].absis << " , " << kr[a].ordinat * -1 << ")\n";
    }
}

void cerminY(koor kr){
    for (int a = 0; a < 2; a++){
        cout << "Koordinat ";
        if (a == 0) cout << "A";
        else cout << "B";
        cout << " dicerminkan sumbu Y : ";
        if (a == 0) cout << "A";
        else  cout << "B";
        cout << "'(" << kr[a].absis * -1 << " , " << kr[a].ordinat << ")\n";
    }
}

int main(){ 
    inputKoor(kr);
    tTengah(kr);
    cerminX(kr);
    cerminY(kr);

    return 0;
}
