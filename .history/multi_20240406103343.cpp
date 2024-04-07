#include <bitset>
#include <algorithm>
#include <iostream>
#include "multi.h"
using namespace std;
Multiplicador::Multiplicador(int num1, int num2){
    this->num1 = num1;
    this->num2 = num2;
    bin1 = int_bin(num1);
    bin2 = int_bin(num2);
}
bitset<8> Multiplicador::int_bin(int num) {
    // Crear un objeto bitset de tamaño 8 (por ejemplo, para representar un byte)
    bitset<8> bits(num & 0xFF);

    // Si el número es negativo, aplicar complemento a dos
    if (num < 0) {
        bits = ~bits;  // Invertir todos los bits
        bits = bits.to_ulong() + 1;  // Sumar 1
    }

    return bits;
}