#include <iostream>
#include <cctype>

using std::cout; using std::cin; using std::endl;

int main () {
    int num1;
    int num2;
    float result;
    char operasi;
    int opsi;

    cout << "===Kalkulator Sederhana==="<< endl;
    cout << "Masukan angka 1 : "; cin >> num1;
    cout << "Masukan angka 2 : "; cin >> num2;

    while (true){
        cout << "\nPilih Operasi Bilangan :\nA.Tambah\nB.Kurang\nC.Kali\nD.Bagi\nKetik antara A/B/C/D : ";
        cin >> operasi;
        operasi = toupper(operasi);

        if (operasi == 'A' || operasi == 'B' || operasi == 'C' || operasi == 'D') {
            break; 
        } else {
            cout << "Opsi tidak ada, silakan ulangi!\n";
        }
    }

   
    switch (operasi) {
        case 'A':
            result = num1 + num2;
            cout << "Hasil Hitungannya adalah : " << result << endl;
            break;
        case 'B':
            while (true) {
                cout << "\nAngka anda adalah : " << num1 << " & " << num2 << endl;
                cout << "Pilih yang mana yang mau di kurang : "; cin >> opsi;
                if (opsi == num1){
                    result = num1 - num2;
                    break; 
                } else if (opsi == num2) { 
                    result = num2 - num1;
                    break; 
                } else {
                    cout << "Angka yang anda masukan bukan angka anda, silahkan ulangi" << endl;
                }
            }
            cout << "Hasil Hitungannya adalah : " << result << endl;
            break;
        case 'C':
            result = num1 * num2;
            cout << "Hasil Hitungannya adalah : " << result << endl;
            break;
        case 'D':
            while (true) {
                cout << "\nAngka anda adalah : " << num1 << " & " << num2 << endl;
                cout << "Pilih yang mana yang mau di bagi : "; cin >> opsi;
                if (opsi == num1){
                    result = (float)num1 / num2; 
                    break; 
                } else if (opsi == num2) { 
                    result = (float)num2 / num1;
                    break; 
                } else {
                    cout << "Angka yang anda masukan bukan angka anda, silahkan ulangi" << endl;
                }
            }
            cout << "Hasil Hitungannya adalah : " << result << endl;
            break;
    }
    
    return 0;
}
