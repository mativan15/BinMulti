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
    bitset<Size> int_bin(long long num);
    void print();
    void funcionxd();
    long long num1, num2;
    bitset<Size> binQ, binM, bin_M, acum;
    bool b_Q0, b_q1, negativo;
    bitset<Size*2> bin_resu;
    long long deci_resu;
    bool comp_negat();
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
    negativo = false;
}
template<size_t Size>
bitset<Size> Multiplicador<Size>::int_bin(long long num) {
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
    bitset<Size*2> bin_resu_temp;
    negativo = comp_negat();
    binQ = int_bin(num1);
    binM = int_bin(num2);
    bin_M = int_bin(-num2);
    acum = int_bin(0);
    cout << "Valores iniciales:" << endl;
    print();
    b_Q0 = binQ[0];
    b_q1 = 0;
    for (int i{0}; i< Size; i++){
        b_Q0 = binQ[0];
        if (b_Q0==0 && b_q1==1){
            cout << "Ac + M -> Corrimiento aritmético" << endl;
            acum = acum.to_ulong() + binM.to_ulong();
            acum &= ((1 << Size) - 1); 
        } else if (b_Q0==1 && b_q1==0){
            cout << "Ac + ~M -> Corrimiento aritmético" << endl;
            acum = acum.to_ulong() + bin_M.to_ulong();
            acum &= ((1 << Size) - 1);
        } else {
            cout << "No hay suma -> Corrimiento aritmético" << endl;
        }
        b_q1 = binQ[0];
        binQ >>= 1;
        binQ[Size - 1] = acum[0];
        acum >>= 1;
        acum[Size - 1] = acum[Size - 2];
        cout << "Valores actualizados:" << endl;
        print();
    }
    bin_resu = acum.to_ulong();
    bin_resu <<= Size;
    bin_resu = bin_resu.to_ulong() + binQ.to_ulong(); 
    bin_resu_temp = bin_resu.to_ulong();
    if (negativo) {
        bin_resu = ~bin_resu;
        bin_resu = bin_resu.to_ulong()+1;
    }
    deci_resu = bin_resu_temp.to_ulong();
    cout << "El resultado en binario es  " << bin_resu << endl;
    if (negativo) cout << "El resultado en decimal es  -" << deci_resu << endl;
    else cout << "El resultado en decimal es  " << deci_resu << endl; 
}
template<size_t Size>
bool Multiplicador<Size>::comp_negat(){
    if ((num1<0 && num2 >=0) || (num1 >=0 && num2<0)) {
        num1 = -num1;
        return true;
    }
    else return false;
}
#endif