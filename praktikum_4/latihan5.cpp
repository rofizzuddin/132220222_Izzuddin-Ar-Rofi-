 //Nama: Izzuddin Ar Rofi'
// NIM : 13222022


#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

class Partikel {  
private:  
    double x, y;  
    double jarak_pusat;

public:
    Partikel(double pos_x, double pos_y) {  
        x = pos_x;
        y = pos_y;
        jarak_pusat = 0.0;
    }

    void hitungJarak() {
        double acuan_x = 5.0;
        double acuan_y = 5.0;
        jarak_pusat = std::sqrt(((x - acuan_x) * (x - acuan_x)) + ((y - acuan_y) * (y - acuan_y)));
    }

    double getX() { return x; }
    double getY() { return y; }
    double getJarak() { return jarak_pusat; }
};

int main() {  
    std::vector<Partikel> kumpulan_partikel;  
    std::ifstream fileBaca("koordinat_mentah.txt");  
      
    std::string header1, header2;
    double temp_x, temp_y;

    if (fileBaca.is_open()) {
        fileBaca >> header1 >> header2;
        while (fileBaca >> temp_x >> temp_y) {   
            kumpulan_partikel.push_back(Partikel(temp_x, temp_y));
        }  
        fileBaca.close();  
    } else {  
        std::cout << "Gagal! Pastikan file koordinat_mentah.txt sudah Anda buat." << std::endl;  
        return 1;
    }

    for (int i = 0; i < kumpulan_partikel.size(); i++) {  
        kumpulan_partikel[i].hitungJarak();  
    }

    std::ofstream fileHasil("hasil_jarak.txt");  
    if (fileHasil.is_open()) {  
        for (int i = 0; i < kumpulan_partikel.size(); i++) {  
            fileHasil << "Partikel " << i + 1  
                      << " | Posisi: (" << kumpulan_partikel[i].getX() << ", " << kumpulan_partikel[i].getY() << ") "  
                      << "| Jarak ke (5,5): " << kumpulan_partikel[i].getJarak() << "\n";  
        }  
        fileHasil.close();  
        std::cout << "=> Selesai! Buka file 'hasil_jarak.txt' untuk melihat kalkulasinya." << std::endl;  
    }

    return 0;  
}