#include <bitset>
#include <algorithm>
#include <iostream>
#include "multi.h"
using namespace std;
Multiplicador::Multiplicador(int num1, int num2){
    this->num1 = num1;
    this->num2 = num2;
    binQ = int_bin(num1);
    binM = int_bin(num2);
    bin_M = int_bin(-num2);
    acum = int_bin(0);
    q_1 = 0;
}
bitset<8> Multiplicador::int_bin(int num) {
    // Crear un objeto bitset de tamaño 8 (por ejemplo, para representar un byte)
    bitset<8> bits(num & 0xFF);
    return bits;
}
void Multiplicador::print(){
    cout << "Q " << binQ << endl;
    cout << "M " << binM << endl;
    cout << "~M " << bin_M << endl;
    cout << "Acu " << acum << endl;
    cout << "Q-1 " << q_1 << endl << endl;
}
void Multiplicador::funcionxd(){
    print();
    bool b_Q0, b_q1 = false;
    b_Q0 = binQ[0];
    b_q1 = 0;
    for (int i{0}; i<8; i++){
        cout << "\niteracion" << i << endl;
        b_Q0 = binQ[0];
        cout << "bool Q0  " << b_Q0 << endl;
        cout << "bool q1  " << b_q1 << endl;
        if (b_Q0==0 && b_q1==1){
            cout << "primer caso,  suma positiva binQ:" << binQ[0]  << " q-1:" << q_1 << endl;
            acum = acum.to_ulong() + binM.to_ulong();
            acum &= 0xFF; 
        } else if (b_Q0==1 && b_q1==0){
            cout << "segundo caso,  suma negativa binQ:" << binQ[0]  << " q-1:" << q_1 << endl;
            acum = acum.to_ulong() + bin_M.to_ulong();
            acum &= 0xFF;
        } else {
            cout << "no hay suma" << endl;
        }
        b_q1 = binQ[0];
        binQ >>= 1;
        binQ[7] = acum[0];
        acum >>= 1;
        q_1[0] = binQ[0];//obsoleto (?)
        cout << "\nnuevos valores" << endl;
        print();
    }
    /*bin1 >>= 1;
    bin2 >>= 1;//desplazamiento_derecha 
    print(bin1);
    print(bin2);*/

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
