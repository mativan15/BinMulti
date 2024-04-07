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
bitset<16> Multiplicador::int_bin(int num) {
    // Crear un objeto bitset de tamaño 8 (por ejemplo, para representar un byte)
    bitset<16> bits(num & 0xFF);
    // Si el número es negativo, aplicar complemento a dos
    if (num < 0) {
        bits = ~bits;  // Invertir todos los bits
        bits = bits.to_ulong() + 1;  // Sumar 1
    }
    return bits;
}
void Multiplicador::print(bitset<16> bin){
    cout << "El número en binario (complemento a dos) es: " << bin << endl;
}
void Multiplicador::funcionxd(){
    print(bin1);
    print(bin2);
    /*bitset<4> bits1("1010");
    bitset<4> bits2("0110");

    // Operaciones aritméticas
    bitset<4> suma = bits1.to_ulong() + bits2.to_ulong();
    bitset<4> resta = bits1.to_ulong() - bits2.to_ulong();
    bitset<4> multiplicacion = bits1.to_ulong() * bits2.to_ulong();
    bitset<4> division = bits1.to_ulong() / bits2.to_ulong();

    // Operaciones lógicas
    bitset<4> resultado_and = bits1 & bits2;
    bitset<4> resultado_or = bits1 | bits2;
    bitset<4> resultado_xor = bits1 ^ bits2;
    bitset<4> resultado_not = ~bits1;

    // Desplazamiento de bits
    bitset<4> desplazamiento_izquierda = bits1 << 1;
    bitset<4> desplazamiento_derecha = bits1 >> 1;

    // Imprimir resultados
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << endl;

    cout << "AND: " << resultado_and << endl;
    cout << "OR: " << resultado_or << endl;
    cout << "XOR: " << resultado_xor << endl;
    cout << "NOT: " << resultado_not << endl;

    cout << "Desplazamiento a la izquierda: " << desplazamiento_izquierda << endl;
    cout << "Desplazamiento a la derecha: " << desplazamiento_derecha << endl;*/
}
