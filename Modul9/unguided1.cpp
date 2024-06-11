#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int rasyid_2311102011jumlahSimpul;
    cout << "Silahkan masukkan jumlah simpul = ";
    cin >> rasyid_2311102011jumlahSimpul;

    vector<string> nama_simpul(rasyid_2311102011jumlahSimpul);
    vector<vector<int>> bobot(rasyid_2311102011jumlahSimpul, vector<int>(rasyid_2311102011jumlahSimpul));

    for (int i = 0; i < rasyid_2311102011jumlahSimpul; ++i) {
        cout << "Silahkan masukkan nama simpul " << i + 1 << " = ";
        cin >> nama_simpul[i];
    }

    cout << "Silahkan masukkan bobot antar simpul\n";

    for (int i = 0; i < rasyid_2311102011jumlahSimpul; ++i) {
        for (int j = 0; j < rasyid_2311102011jumlahSimpul; ++j) {
            cout << nama_simpul[i] << "-->" << nama_simpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    // Output matriks jarak antar kota
    cout << "\n\t";
    for (int i = 0; i < rasyid_2311102011jumlahSimpul; ++i) {
        cout << nama_simpul[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < rasyid_2311102011jumlahSimpul; ++i) {
        cout << nama_simpul[i] << "\t";
        for (int j = 0; j < rasyid_2311102011jumlahSimpul; ++j) {
            cout << bobot[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
