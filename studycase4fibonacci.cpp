//Nama : Stephen Tio Fransisko Njo
//NPM : 140810260089
//Kelas : C
//Program mencetak fibonacci menggunakan fungsi rekrusif
//Waktu Pengerjaan : 30 menit

#include <iostream>
using std::cout;using std::cin;using std::endl;

void header(int y=50){
    if (y == 0){
        cout << endl;
        return;
    }else {
        cout << "=";
    }
    return header(y-1);
}

void input (int& x1,int& x2, int& batas){
    cout << "Masukan U1 : "; cin >> x1; cout << endl;
    cout << "Masukan U2 : "; cin >> x2; cout << endl;
    cout << "Masukan batas Un : ";cin >> batas; cout << endl;
    batas -=2;
}

void fibonacci (int x1,int x2,int batas){
    if (batas == 0){
        return;
    } else {
        int un = x1+x2;
        cout << un << " ";
        return fibonacci(x2,un,(batas-1));
    }
}

int main (){
    int x,y,n;
    header();
    cout << "Pencetak Fibonacci\n";
    header ();
    input(x,y,n);
    cout << x << " " << y << " ";
    fibonacci(x,y,n);
}