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

    cout << "Hasil \n0 = Sabtu \n1 = Minggu \n2 = Senin \n3 = Selasa \n4 = Rabu \n5 = Kamis \n6 = Jumat"<< endl;
    cout << "Hari Kalian Lahir Adalah : " << h;
    return 0;
}