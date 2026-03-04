// Nama: Izzuddin Ar Rofi'
// NIM : 13222022

#include <iostream>

class RekeningBank {
private:
    double saldo;

public:
    // Constructor
    RekeningBank(double saldoAwal) {
        saldo = saldoAwal;
        std::cout << "Rekening dibuat dengan saldo awal: Rp " << saldo << std::endl;
    }

    // Method Setor
    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor Rp " << jumlah << " | Saldo sekarang: Rp " << saldo << std::endl;
    }

    // Method Tarik
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Tarik Rp " << jumlah << " |Penarikan Gagal! (Saldo tidak mencukupi)" << std::endl;
        } else {
            saldo -= jumlah;
            std::cout << "Tarik Rp " << jumlah << " | Sisa saldo: Rp " << saldo << std::endl;
        }
    }
};

int main() {
    std::cout << "------------------------------" << std::endl;
    RekeningBank rekening(100000);
    std::cout << "------------------------------" << std::endl;

    rekening.setor(200000);
    std::cout << "------------------------------" << std::endl;

    rekening.tarik(100000);
    std::cout << "------------------------------" << std::endl;

    rekening.tarik(999999); // Saldo tidak cukup
    std::cout << "==============================" << std::endl;

    return 0;
}