#include <iostream>

int main() {
    int pilihan, durasi, tarif = 0, total = 0;
    
    // Input pilihan alat
    std::cout << "Pilih alat (1-4): ";
    std::cin >> pilihan;
    
    // Input durasi pemakaian
    std::cout << "Durasi pemakaian dalam menit: ";
    std::cin >> durasi;
    
    // Switch untuk menentukan tarif per 15 menit
    switch (pilihan) {
        case 1:
            tarif = 5000; // Dumbbell
            break;
        case 2:
            tarif = 10000; // Treadmill
            break;
        case 3:
            tarif = 8000; // Barbell
            break;
        case 4:
            tarif = 7000; // Static Bike
            break;
        default:
            std::cout << "Pilihan alat tidak valid." << std::endl;
            return 0;
    }
    
    // Hitung jumlah interval 15 menit (ceil(durasi / 15))
    int intervals = (durasi + 14) / 15;
    
    // Looping untuk menghitung total tarif
    for (int i = 0; i < intervals; i++) {
        total += tarif;
    }
    
    // Output total biaya
    std::cout << "Total biaya sewa: Rp " << total << std::endl;
    
    return 0;
}

