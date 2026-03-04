// Nama: Izzuddin Ar Rofi'
// NIM : 13222022


#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // 1. Inisialisasi Struktur Data
    std::vector<double> sensor;

    // 2. Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    std::cout << "Data Sensor Sebelum Kalibrasi:" << std::endl;
    for (int i = 0; i < sensor.size(); i++) {
        std::cout << "sensor[" << i << "] = " << sensor[i] << std::endl;
    }

    // 3. Proses Kalibrasi (Batch Processing)
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }

    std::cout << "\nData Sensor Setelah Kalibrasi (+10%):" << std::endl;
    for (int i = 0; i < sensor.size(); i++) {
        std::cout << "sensor[" << i << "] = " << sensor[i] << std::endl;
    }

    // 4. Penyimpanan ke File Eksternal
    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (!fileOutput.is_open()) {
        std::cerr << "\n[ERROR] Gagal membuka file untuk penulisan!" << std::endl;
        return 1;
    }

    // 5. Menulis Hasil ke File
    for (int i = 0; i < sensor.size(); i++) {
        fileOutput << sensor[i] << "\n";
    }

    fileOutput.close();

    std::cout << "\nHasil kalibrasi berhasil disimpan ke 'hasil_kalibrasi.txt'" << std::endl;

    return 0;
}