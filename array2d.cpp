#include <iostream>
using std::cout; using std::cin; using std::endl;
 
typedef int Matriks[10][10];

void banyakData(int &nBaris, int &nKolom);
void isiMatriks(Matriks &x, int nBaris, int nKolom);
void cetakMatriks(Matriks x, int nBaris, int nKolom);
void jumlahPerBaris(Matriks x, int nBaris, int nKolom);
int totalMatriks(Matriks x, int nBaris, int nKolom);
int maksimum(Matriks x, int nBaris, int nKolom);

int main() {
    Matriks m;
    int nBaris, nKolom;

    banyakData(nBaris, nKolom);
    isiMatriks(m, nBaris, nKolom);
    cetakMatriks(m, nBaris, nKolom);
    jumlahPerBaris(m, nBaris, nKolom);

    cout << "\nTotal seluruh elemen : " << totalMatriks(m, nBaris, nKolom) << endl;
    cout << "Nilai terbesar       : " << maksimum(m, nBaris, nKolom) << endl;

    return 0;
}

void banyakData(int &nBaris, int &nKolom) {
    cout << "Banyak baris : ";
    cin >> nBaris;
    cout << "Banyak kolom : ";
    cin >> nKolom;
}

void isiMatriks(Matriks &x, int nBaris, int nKolom) {
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << "Data ke-[" << i + 1 << "," << j + 1 << "] : ";
            cin >> x[i][j];
        }
    }
}

void cetakMatriks(Matriks x, int nBaris, int nKolom) {
    cout << "\nPencetakan Matriks :" << endl;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

void jumlahPerBaris(Matriks x, int nBaris, int nKolom) {
    cout << endl;
    for (int i = 0; i < nBaris; i++) {
        int jumlah = 0;
        for (int j = 0; j < nKolom; j++) {
            jumlah = jumlah + x[i][j];
        }
        cout << "Jumlah baris ke-" << i + 1 << " = " << jumlah << endl;
    }
}

int totalMatriks(Matriks x, int nBaris, int nKolom) {
    int total = 0;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            total = total + x[i][j];
        }
    }
    return total;
}

int maksimum(Matriks x, int nBaris, int nKolom) {
    int maks = x[0][0];
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            if (maks < x[i][j]) {
                maks = x[i][j];
            }
        }
    }
    return maks;
}