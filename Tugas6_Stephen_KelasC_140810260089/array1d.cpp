#include <iostream>
using namespace std;

typedef int Array[10];

void banyakData(int &n);
void isiArray(Array &a, int n);
void cetakArray(Array a, int n);
void cetakForeach(Array &a);
float cariRata(Array a, int n);
int maksimum(Array a, int n);
int minimum(Array a, int n);

int main() {
    Array data = {0};
    int n;

    banyakData(n);
    isiArray(data, n);
    cetakArray(data, n);
    cetakForeach(data);

    cout << "\nRata-rata : " << cariRata(data, n) << endl;
    cout << "Nilai tertinggi : " << maksimum(data, n) << endl;
    cout << "Nilai terendah  : " << minimum(data, n) << endl;

    return 0;
}

void banyakData(int &n) {
    cout << "Banyak data : ";
    cin >> n;
}

void isiArray(Array &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> a[i];
    }
}

void cetakArray(Array a, int n) {
    cout << "\nIsi array (for biasa) : ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void cetakForeach(Array &a) {
    cout << "Isi array (foreach)   : ";
    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
}

float cariRata(Array a, int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah = jumlah + a[i];
    }
    return (float)jumlah / n;
}

int maksimum(Array a, int n) {
    int maks = a[0];
    for (int i = 1; i < n; i++) {
        if (maks < a[i]) {
            maks = a[i];
        }
    }
    return maks;
}

int minimum(Array a, int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}