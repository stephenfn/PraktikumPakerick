#include <iostream>

using namespace std;
int main (){
    int tinggi;
    cout << "Masukan nilai tinggi ; "; cin >> tinggi;
    for (int b=1;b<=tinggi;b++){
        for (int spasi=1;spasi <= tinggi-b;spasi++){
        cout << " ";
        }
        for (int bintang=1;bintang<=(b*2)-1;bintang++){
        cout << "*";
        }
        cout << endl;
    }
    for (int b=tinggi-1;b>=1;b--){
        for (int spasi=1;spasi <= tinggi-b;spasi++){
        cout << " ";
        }
        for (int bintang=1;bintang<=(b*2)-1;bintang++){
        cout << "*";
        }
        cout << endl;
    
    }
    
}