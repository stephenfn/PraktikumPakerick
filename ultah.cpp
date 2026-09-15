#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int h;
    int q;
    int m;
    int K;
    int J;

    cout << "Masukan Tanggal Lahir Anda (1-31) : ";
    cin >> q;
    cout <<"Masukan Bulan Lahir Anda , Januari dan Februari adalah 13 dan 14 : ";
    cin >> m;
    cout <<"Masukan 2 Digit Terakhir Tahun Lahir Anda (2026 = 26), \nJika Januari Atau Februari dikurangi 1 tahunnya : ";
    cin >> K;
    cout <<"Masukan 2 Digit Pertama dari Tahun Lahir Anda (2026 = 20) : ";
    cin >> J;

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