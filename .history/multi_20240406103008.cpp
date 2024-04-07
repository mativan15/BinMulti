#include <bitset>
#include <algorithm>
#include <iostream>
#include "multi.h"
using namespace std;
Multiplicador::Multiplicador(int num1, int num2){

}
bitset<8> Multiplicador::int_bin(int numero) {
    // Crear un objeto bitset de tamaño 8 (por ejemplo, para representar un byte)
    std::bitset<8> bits(numero & 0xFF);

    // Si el número es negativo, aplicar complemento a dos
    if (numero < 0) {
        bits = ~bits;  // Invertir todos los bits
        bits = bits.to_ulong() + 1;  // Sumar 1
    }

    return bits;
}