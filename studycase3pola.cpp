//Nama : Stephen Tio Fransisko Njo
//NPM : 140810260089
//Kelas : C
//Program aritmatika & geometri dasar menggunakan fungsi rekursif
//Waktu Pengerjaan : 30 menit


#include <iostream>
using std::cout;using std::cin;using std::endl;

void printaritmatika(int awal, int n, int beda){
    if (n <= 0) return;
    cout << awal << " ";
    printaritmatika(awal + beda, n - 1, beda);
}

void printgeometri(int awal, int n, int rasio){
    if (n <= 0) return;
    cout << awal << " ";
    printgeometri(awal * rasio, n - 1, rasio);
}

void aritmatika(){
    int bil,awal,pola;
    cout << "Masukan bilangan awal : ";cin >> awal;
    cout << "Masukan seberapa banyak bilangan di aritmatika (un) : ";cin >> bil;
    cout << "Masukan beda : ";cin >> pola;
    printaritmatika(awal, bil, pola);
}

void geometri(){
    int bil,pola,awal;
    cout << "Masukan bilangan awal : ";cin >> awal;
    cout << "Masukan seberapa banyak bilangan di geometri (un) : ";cin >> bil;
    cout << "Masukan rasio : ";cin >> pola;
    printgeometri(awal, bil, pola);
}

void pilihan(){
    int choice;
    cout << "Pilih :\n1.Aritmatika\n2.Geometri \nMasukan 1/2 :";cin>>choice;
    if(choice == 1){
        aritmatika();
    }else if(choice == 2){
        geometri();
    }else{
        cout << "Pilihan tidak ada!\n";
        pilihan();
    }
}

int main(){
    pilihan();
}