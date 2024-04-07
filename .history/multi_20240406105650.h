#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;
class Multiplicador{
public:
    int num1, num2;
    bitset<16> bin1, bin2;
    Multiplicador(int num1, int num2);
    bitset<16> int_bin(int num);
    void print(bitset<16> bin);
    void funcionxd();
};