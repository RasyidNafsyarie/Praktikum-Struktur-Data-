#include <iostream>
#include <string>
using namespace std;
int main() {
    string kalimat;
    int jumlahVokal = 0;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (char huruf : kalimat) {
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' ||
            huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O') {
            jumlahVokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal << endl;

    return 0;
}
