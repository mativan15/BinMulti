#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
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