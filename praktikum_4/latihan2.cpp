 //Nama: Izzuddin Ar Rofi'
// NIM : 13222022

#include <iostream>
#include <vector>

class TugasKalkulasi {  
private:  
    int id_tugas;  
    double nilai_A;  
    double nilai_B;  
    double hasil;

public:  
    TugasKalkulasi(int id, double a, double b) {  
        id_tugas = id;  
        nilai_A = a;  
        nilai_B = b;  
        hasil = 0.0;  
    }

    void kerjakan() {  
        hasil = nilai_A + nilai_B;
    }

    void tampilkanHasil() {  
        std::cout << "Tugas " << id_tugas << " | "   
                  << nilai_A << " + " << nilai_B   
                  << " = " << hasil << std::endl;  
    }  
};

int main() {  
    std::vector<TugasKalkulasi> antrean;

    for (int i = 1; i <= 100; i++) {
        antrean.push_back(TugasKalkulasi(i, i * 2.5, i * 1.5));
    }

    for (int i = 0; i < antrean.size(); i++) {  
        antrean[i].kerjakan();  
        antrean[i].tampilkanHasil();  
    }

    return 0;  
}