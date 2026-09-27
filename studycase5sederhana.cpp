//Nama : Stephen Tio Fransisko Njo
//NPM : 140810260089
//Kelas : C
//Program Menyederhanakan Pecahan menggunakan fungsi rekursif
//Waktu Pengerjaan : 1 jam

#include <iostream>
#include <cmath>
using std::cout;using std::cin;using std::endl;

void input (int& x, int& y){
    cout << "Masukan Pembilang (Diatas): "; cin >> x;
    do {
        cout << "Masukan Penyebut (Dibawah): "; cin >> y;
        if(y==0){
            cout << "Penyebut tidak boleh 0!";
        }
    }while (y==0);
    x = abs(x);
    y = abs(y);
}



int fpb (int x, int y){
    if (y==0){
        return x;
    }else{
        return fpb(y,x%y);
    }

}

int main (){
    int x,y,nfpb;
    input(x,y);
    cout << "Bentuk pecahan anda adalah : " << x << "/" << y;
    nfpb = fpb(x,y);
    x = x / nfpb;
    y = y / nfpb;
    cout << "\nBentuk paling sederhana dari pecahan anda adalah : " << x << "/" << y;
}