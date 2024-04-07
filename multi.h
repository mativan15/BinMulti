#ifndef MULTI_H
#define MULTI_H
#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
template<size_t Size>
class Multiplicador {
public:
    Multiplicador();
    bitset<Size> int_bin(int num);
    void print();
    void funcionxd();
    int num1, num2;
    bitset<Size> binQ, binM, bin_M, acum;
    bool b_Q0, b_q1;
    bitset<Size*2> b_resu;
    long long d_resu;
};

template<size_t Size>
Multiplicador<Size>::Multiplicador(){
    num1 = 0;
    num2 = 0;
    binQ = 0;
    binM = 0;
    bin_M = 0;
    acum = 0;
    b_Q0 = false;
    b_q1 = false;
}
template<size_t Size>
bitset<Size> Multiplicador<Size>::int_bin(int num) {
    return bitset<Size>(num & ((1 << Size) - 1));
}
template<size_t Size>
void Multiplicador<Size>::print() {
    cout << "Q " << binQ << endl;
    cout << "M " << binM << endl;
    cout << "~M " << bin_M << endl;
    cout << "Acu " << acum << endl;
    cout << "Q-1 " << b_q1 << endl << endl;
}
template<size_t Size>
void Multiplicador<Size>::funcionxd() {
    binQ = int_bin(num1);
    binM = int_bin(num2);
    bin_M = int_bin(-num2);
    acum = int_bin(0);

    print();
    b_Q0 = binQ[0];
    b_q1 = 0;
    for (int i{0}; i< Size; i++){
        cout << "\niteracion" << i << endl;
        b_Q0 = binQ[0];
        cout << "Q0  " << b_Q0 << endl;
        cout << "q1  " << b_q1 << endl;
        if (b_Q0==0 && b_q1==1){
            cout << "primer caso,  suma positiva binQ:" << binQ[0]  << " q-1:" << b_q1 << endl;
            acum = acum.to_ulong() + binM.to_ulong();
            acum &= ((1 << Size) - 1); 
            cout << "\nfin (?)" << endl;
        } else if (b_Q0==1 && b_q1==0){
            cout << "segundo caso,  suma negativa binQ:" << binQ[0]  << " q-1:" << b_q1 << endl;
            acum = acum.to_ulong() + bin_M.to_ulong();
            acum &= ((1 << Size) - 1);
        } else {
            cout << "no hay suma" << endl;
        }
        b_q1 = binQ[0];
        binQ >>= 1;
        binQ[Size - 1] = acum[0];
        acum >>= 1;
        acum[Size - 1] = acum[Size - 2];
        cout << "\nnuevos valores" << endl;
        print();
    }
    b_resu = acum.to_ulong();
    b_resu <<= Size;
    b_resu = b_resu.to_ulong() + binQ.to_ulong(); 
    d_resu = b_resu.to_ulong();
    cout << "El resultado en binario es  " << b_resu << endl;
    cout << "El resultado en decimal es  " << d_resu << endl; 
}
#endif