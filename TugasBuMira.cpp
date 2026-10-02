#include <iostream>
using namespace std;

void input(int& n, int& m) {
    do {
        cout << "Masukan nilai baris (2-10): "; 
        cin >> n;
        if (n < 2 || n > 10) {
            cout << "Input tidak valid. Baris minimal 2 dan maksimal 10.\n";
        }
    } while (n < 2 || n > 10);
    
    do {
        cout << "Masukan nilai kolom (2-10): "; 
        cin >> m;
        if (m < 2 || m > 10) {
            cout << "Input tidak valid. Kolom minimal 2 dan maksimal 10.\n";
        }
    } while (m < 2 || m > 10);
}

void process(int n, int m) {
    int suhu[10][10]; 
    int t;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Masukan Suhu baris ke " << i << " & kolom ke " << j << " : ";
            cin >> suhu[i][j];
        }
    }
    
    cout << "Masukan batas suhu (T) : ";
    cin >> t;

    int indeksTerpanas = 0;
    int maxTotal = -999999; 
    int jumlahAnomali = 0;

    for (int i = 0; i < n; i++) {
        int totalBarisSaatIni = 0; 

        for (int j = 0; j < m; j++) {
            totalBarisSaatIni += suhu[i][j];
            
            if (suhu[i][j] % 2 != 0 && suhu[i][j] > t) {
                jumlahAnomali++;
            }
        }
        
        if (totalBarisSaatIni > maxTotal) {
            maxTotal = totalBarisSaatIni;
            indeksTerpanas = i;
        }
    }

    cout << "\nBaris Terpanas: " << indeksTerpanas << " (" << maxTotal << ")\n";
    cout << "Jumlah Anomali: " << jumlahAnomali << "\n";
    cout << "Peta Sensor:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (suhu[i][j] % 2 != 0 && suhu[i][j] > t) {
                cout << 99;
            } else {
                cout << suhu[i][j];
            }
            
            if (j < m - 1) {
                cout << " ";
            }
        }
        cout << "\n"; 
    }
}

int main() {
    int n, m;
    input(n, m);
    process(n, m);
    
    return 0;
}
