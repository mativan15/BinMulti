#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
class Multiplicador{
public:
    int num1, num2;
    char q_1;
    bitset<8> binM, binQ, bin_M, acum;
    bitset<16> resu;
    Multiplicador(int num1, int num2);
    bitset<8> int_bin(int num);
    void print(bitset<8> bin);
    void funcionxd();
};