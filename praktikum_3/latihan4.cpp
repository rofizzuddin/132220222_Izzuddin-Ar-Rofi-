// Nama: Izzuddin Ar Rofi'
// NIM : 13222022


#include <iostream>

class Sensor {  
private:  
    int id;   
    double nilai;

public:  
    //nilai = 0.0 dihapus
    Sensor(int id_sensor) {   
        id = id_sensor;
        // nilai = 0.0; 
    }  
      
    void rekam(double data) {   
        nilai = data;   
    }  
      
    void status() {   
        std::cout << "ID: " << id << " | Nilai: " << nilai << std::endl;   
    }  
};

int main() {  
    Sensor jaringan[3] = { Sensor(101), Sensor(102), Sensor(103) };


    // for (int i = 0; i < 3; i++) {  
    //     jaringan[i].rekam((i + 1) * 12.5);  
    // }  
      
    // Output hasil 
    for (int i = 0; i < 3; i++) {  
        jaringan[i].status();  
    }  
      
    return 0;  
}