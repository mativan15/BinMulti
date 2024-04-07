#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
class Multiplicador{
public:
    int num1, num2;
    long long d_resu;
    bitset<1> q_1;
    bitset<8> binM, binQ, bin_M, acum;
    bitset<16> b_resu;
    Multiplicador();
    bitset<8> int_bin(int num);
    void print();
    void funcionxd();
};