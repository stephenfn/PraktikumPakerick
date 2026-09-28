#include <iostream>

using std::cout;using std::cin;using std::endl;

void input(int& N){
    cout << "Masukan Jumlah bilangan prima yang ingin di tampilkan (N < 100) : ";cin >> N;
    if (N <= 0 || N >= 100){
        cout << "Eror: Nilai N harus 0 <= N <= 100."<< endl;
    }
}

int main (){
    int N;
    input(N);
    int prima[100];
    int jumlah = 0;
    int angka = 2;
    
    while (jumlah < N){
        bool isprima = true;
        
        for (int i=2; i*i <= angka; i++){
            if (angka%i == 0){
                isprima=false;
                break;
            }
        }
        if (isprima){
            prima[jumlah] = angka;
            jumlah++;
        }
        angka++;
    }
    
    cout << N << " bilangan prima pertama adalah : "<<endl;
    for (int i=0; i < N; i++){
        cout << prima[i];
        if (i < N - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}