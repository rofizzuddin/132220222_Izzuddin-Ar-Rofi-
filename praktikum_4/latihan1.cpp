// Nama: Izzuddin Ar Rofi'
// NIM : 13222022

#include <iostream>
#include <vector>

int main() {  
    std::vector<int> kumpulan_angka;

    kumpulan_angka.push_back(10);  
    kumpulan_angka.push_back(25);  
    kumpulan_angka.push_back(50);
    kumpulan_angka.pop_back();

    kumpulan_angka.clear();

    for(int i = 0; i < kumpulan_angka.size(); i++) {  
        std::cout << "Data ke-" << i << ": " << kumpulan_angka[i] << std::endl;  
    }  
      
    return 0;  
}