#include <iostream>

using namespace std;

int main() {
    int h;
    int q;
    int m;
    int K; // 2 digit terakhir tahun lahir
    int J; // 2 digit awal tahun lahir
    int year;

    cout << "Masukan Tanggal Lahir Anda (1-31) : ";
    cin >> q;
    cout <<"Masukan Bulan Lahir Anda (1-12) : ";
    cin >> m;
    cout <<"Masukan Tahun Lahir Anda : "; //2026
    cin >> year;

    K = year % 100;
    J = year / 100;

    if (m==1){
        m +=12;
        K-=1;
    }
    if (m==2){
        m +=12;
        K-=1;
    }

    h = (q + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;
    switch (h){
        case 0:
            cout << "Hari lahir kamu adalah hari sabtu";
            break;
        case 1:
            cout << "Hari lahir kamu adalah hari minggu";
            break;
        case 2:
            cout << "Hari lahir kamu adalah hari senin";
            break;
        case 3:
            cout << "Hari lahir kamu adalah hari selasa";
            break;
        case 4:
            cout << "Hari lahir kamu adalah hari rabu";
            break;
        case 5:
            cout << "Hari lahir kamu adalah hari kamis";
        default :
            cout << "Hari lahir kamu adalah hari jumat";
    }
    return 0;
}