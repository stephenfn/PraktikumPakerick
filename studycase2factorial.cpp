//Nama : Stephen Tio Fransisko Njo
//NPM : 140810260089
//Kelas : C
//Program factorial menggunakan fungsi rekursif
//Waktu Pengerjaan : 15 menit


#include <iostream>
using std::cout;using std::cin;using std::endl;

void input (int& n){
    do {
        cout << "Masukan nilai yang ingin di factorial :"; cin>>n;
        if (n<0){
            cout << "Factorial tidak bisa negatif! Ulangi\n";
        }
        
    }  while (n<0);
}
int factorial (int n){
    if (n==0 || n == 1){
        return 1;
    } else {
        return n* factorial(n-1);
    }
}
int main (){
    int n;
    input(n);
    cout << "Nilai factorial adalah :"<<factorial(n);
}