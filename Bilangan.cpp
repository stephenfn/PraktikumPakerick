//Buat program menentukan bilangan genap atau ganjil
//dibuat oleh erick, 7 Juli 2026

#include <iostream>
using namespace std;

int main () {
    int bil;
    int bila;

    cout << "Masukan bilangan : ";
    cin >> bil;
    if (bil >= 0) {
            if (bil % 2 == 1) {
        cout << "Bilangan anda adalah bilangan ganjil";
        }  
            else {
        cout << "Bilangan anda adalah bilangan genap";
        }
    }
    else {
        bila=(bil*-1)%2;
        if (bila == 1){
            cout << "Bilangan anda adalah bilangan ganjil negatif";
        }
        else {
            cout << "Bilangan anda adalah bilangan genap negatif";
        }
    }

}