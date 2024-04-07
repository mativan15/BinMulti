#include <iostream>
#include "h.h"
using namespace std;

void iniciar(){
    std::bitset<4> bits1("1010");
    std::bitset<4> bits2("0110");

    // Operaciones aritméticas
    std::bitset<4> suma = bits1.to_ulong() + bits2.to_ulong();
    std::bitset<4> resta = bits1.to_ulong() - bits2.to_ulong();
    std::bitset<4> multiplicacion = bits1.to_ulong() * bits2.to_ulong();
    std::bitset<4> division = bits1.to_ulong() / bits2.to_ulong();

    // Operaciones lógicas
    std::bitset<4> resultado_and = bits1 & bits2;
    std::bitset<4> resultado_or = bits1 | bits2;
    std::bitset<4> resultado_xor = bits1 ^ bits2;
    std::bitset<4> resultado_not = ~bits1;

    // Desplazamiento de bits
    std::bitset<4> desplazamiento_izquierda = bits1 << 1;
    std::bitset<4> desplazamiento_derecha = bits1 >> 1;

    // Imprimir resultados
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;

    std::cout << "AND: " << resultado_and << std::endl;
    std::cout << "OR: " << resultado_or << std::endl;
    std::cout << "XOR: " << resultado_xor << std::endl;
    std::cout << "NOT: " << resultado_not << std::endl;

    std::cout << "Desplazamiento a la izquierda: " << desplazamiento_izquierda << std::endl;
    std::cout << "Desplazamiento a la derecha: " << desplazamiento_derecha << std::endl;
}