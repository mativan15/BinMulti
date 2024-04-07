#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
/*
class Multiplicador{
public:
    int num1, num2;
    long long d_resu;
    bool b_Q0, b_q1;
    bitset<8> binM, binQ, bin_M, acum;
    bitset<16> b_resu;
    Multiplicador();
    bitset<8> int_bin(int num);
    void print();
    void funcionxd();
};
*/
template<size_t Size>
class Multiplicador{
public:
    int num1, num2;
    long long d_resu;
    bool b_Q0, b_q1;
    bitset<Size> binM, binQ, bin_M, acum;
    bitset<Size*2> b_resu;
    Multiplicador();
    bitset<Size> int_bin(int num);
    void print();
    void funcionxd();
};