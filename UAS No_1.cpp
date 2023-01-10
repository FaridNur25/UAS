#include <iostream>
#include <cmath>

using namespace std;

// Nama : Farid Nurtaufiq
// Kelas : DD
// NRP : 152021097

int SigmaX(int datax[], int banyak) {
    int totalx = 0;
    for (int i = 1; i <= banyak; i++) {
        totalx = totalx + datax[i];
    }

    return totalx;
}

int SigmaY(int datay[], int banyak) {
    int totaly = 0;
    for (int i = 1; i <= banyak; i++) {
        totaly = totaly + datay[i];
    }

    return totaly;
}

int SigmaXY(int datax[], int datay[], int banyak) {
    int totalxy = 0;
    for (int i = 1; i <= banyak; i++) {
        totalxy = totalxy + (datax[i] * datay[i]);
    }

    return totalxy;
}


int SigmaX2(int datax[], int banyak) {
    int totalx2 = 0;
    for (int i = 1; i <= banyak; i++) {
        totalx2 = totalx2 + (datax[i] * datax[i]);
    }

    return totalx2;
}

int SigmaY2(int datay[], int banyak) {
    int totaly2 = 0;
    for (int i = 1; i <= banyak; i++) {
        totaly2 = totaly2 + (datay[i] * datay[i]);
    }

    return totaly2;
}



int main()
{
    int x, y, j, i, k;
    int datax[100];
    int datay[100];

    cout << "Masukkan banyaknya nilai X : "; cin >> x;
    cout << "Masukkan banyaknya nilai Y : "; cin >> y;

    for (i = 1; i <= x; i++) {
        cout << "Masukkan Nilai X" << i << endl;
        cin >> datax[i];
            if (datax[i] < 0) {
            cout << "Bilangan Harus >=0" << endl;
    }
    }
    for (i = 1; i <= y; i++) {
        cout << "Masukkan Nilai Y" << i << endl;

        cin >> datay[i];
            if (datay[i] < 0) {
        cout << "Bilangan Harus >=0" << endl;
       }
    }

    
   

    double r, hasil1, hasil2, hasil3;

    SigmaX2(datax, x) == pow(SigmaX(datax, x), 2);
    SigmaY2(datay, y) == pow(SigmaY(datay, y), 2);

    hasil1 = (i * SigmaXY(datax, datay, i)) - (SigmaX(datax, x) * SigmaY(datay, y));
    hasil2 = sqrt((i * SigmaX2(datax, x)) * (pow(SigmaX(datax, x), 2)));
    hasil3 = sqrt((i * SigmaY2(datay, y)) * (pow(SigmaY(datax, x), 2)));

    r = hasil1 / (hasil2 * hasil3);

    cout << "Sigma X : " << SigmaX(datax, x) << endl;
    cout << "Sigma Y : " << SigmaY(datay, y) << endl;
    cout << "Sigma XY : " << SigmaXY(datax, datay, i) << endl;
    cout << "Sigma X^2 : " << SigmaX2(datax, x) << endl;
    cout << "Sigma Y^2 : " << SigmaY2(datay, y) << endl;
    cout << "Nilai Determinasi : " << r * r * 0.1 << endl;
    cout << " R : " << r << endl;



    if (r > 0) {
        cout << "Hubungan antara variabel X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun akan bertambah, dan juga sebaliknya ";
    }
    else if (r < 0) {
        cout << "Hubungan antara variabel X dan Y adalah negatif, dimana jika nilai X bertambah, maka nilai Y akan mengecil, dan juga sebaliknya ";
    }
    else {
        "Tidak ada hubungan antara variabel X dan Y";
    }



    return 0;
}