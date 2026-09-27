//Nama : Stephen Tio Fransisko Njo
//NPM : 140810260089
//Kelas : C
//Program Mini Kalkulator menggunakan fungsi rekursif
//Waktu Pengerjaan : 2 jam

#include <iostream>
using std::cout;using std::cin;using std::endl;

int tambah (int x, int y){
    if (y == 0){
        return x;
    }
    return tambah(x+1, y-1);
}

int kurang (int x, int y){
    if (y == 0){
        return x;
    }
    return kurang(x-1, y-1);
}

int kali (int x, int y){
    if (y == 0){
        return 0;
    }
    return x + kali(x, y-1);
}

float bagi (float x, float y){
    if (x < y){
        return x/y;
    }
    return 1 + bagi(x-y, y);
}

int main (){
    int x,y,choice;
    cout << "Program Kalkulator Mini\n";
    cout << "Masukan Nilai 1 : ";cin >> x;
    cout << "Masukan Nilai 2 : ";cin >> y;
    cout << "Pilih Operasi\n1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\nMasukan Angka : ";cin >> choice;
    if (choice == 1){
        cout << "Hasil : " << tambah(x,y);
    } else if (choice == 2){
        cout << "Hasil : " << kurang(x,y);
    } else if (choice == 3){
        cout << "Hasil : " << kali(x,y);
    } else {
        if (y == 0){
            cout << "Tidak bisa dibagi 0";
        } else {
            cout << "Hasil : " << bagi(x,y);
        }
    }
}
