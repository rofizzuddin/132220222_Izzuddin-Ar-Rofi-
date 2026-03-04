// Nama: Izzuddin Ar Rofi'
// NIM : 13222022

#include <iostream>

class Titik2D {  
private:  
    double x, y;

public:  
    Titik2D(double nilai_x, double nilai_y) {   
        x = nilai_x;  
        y = nilai_y;  
    }  
      
    void cetak() {   
        std::cout << "X: " << x << " | Y: " << y << std::endl;   
    }  
};

int main() {  
    Titik2D titikA; 
    titikA.cetak();  
      
    return 0;  
}