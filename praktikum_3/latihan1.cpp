// Nama: Izzuddin Ar Rofi'
// NIM : 13222022

#include <iostream>
#include <string>


class Mobil {  
public:
    std::string merk;  
    std::string warna;  
    int tahun;

 
    void nyalakanMesin() {  
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;  
    }  
};

int main() {  
    // Membuat Object 1
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Membuat Object 2
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    // Membuat Object 3 
    Mobil mobil3;
    mobil3.merk = "Lamborghini";
    mobil3.warna = "Kuning";
    mobil3.tahun = 2025;

    // Memanggil class dari masing-masing object
    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin();

    return 0;  
}