#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << endl;

    for (int i = tinggi; i >= 1; i--) {
        // 1. Mencetak spasi di sisi kiri agar bintang berada di tengah
        for (int s = 1; s <= tinggi-i; s++) {
            cout << " ";
        }

        // 2. Mencetak jumlah bintang dengan deret ganjil (1, 3, 5, 7...)
        for (int j = 1; j <= (2 * i) - 1; j++) {
            cout << "*";
        }

        // 3. Pindah ke baris bawahnya
        cout << endl;
    }

    return 0;
}