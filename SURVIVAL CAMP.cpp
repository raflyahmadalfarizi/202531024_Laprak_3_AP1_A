#include <iostream>
using namespace std;

int main() {
    int umur;
    
    // Meminta input umur dari pengguna
    cout << "Masukkan umur peserta: ";
    cin >> umur;
    
    // Nested IF untuk menentukan peralatan berdasarkan umur
    if (umur < 10) {
        cout << "Peralatan tertinggi yang boleh dipakai: Starter Kit" << endl;
    } else {
        if (umur <= 15) {
            cout << "Peralatan tertinggi yang boleh dipakai: Basic Gear" << endl;
        } else {
            if (umur <= 20) {
                cout << "Peralatan tertinggi yang boleh dipakai: Pro Gear" << endl;
            } else {
                cout << "Peralatan tertinggi yang boleh dipakai: Expert Gear" << endl;
            }
        }
    }
    
    return 0;
}

