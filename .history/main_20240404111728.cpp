#include <bitset>
#include <algorithm>
#include <iostream>
using namespace std;

template <size_t N>
class BoothMultiplier {
public:
  // Constructor
  BoothMultiplier(int64_t x, int64_t y) : x_(x), y_(y) {
    // Convertir a binario
    x_bin = bitset<N>(x);
    y_bin = bitset<N>(y);
  }
  // Multiplicación
  int64_t multiply() {
    // Inicializar variables
    int64_t p = 0;
    bool carry = false;
    for (int i = N - 1; i >= 0; i--) {
      // Obtener bits adyacentes
      bool yi = y_bin[i];
      bool yi_1 = y_bin[i - 1];
      // Actualizar carry
      carry = yi & yi_1;
      // Actualizar p
      if (yi != yi_1) {
        p += (x_ << i) ^ carry;
      }
      // Corrimiento aritmético
      x_ <<= 1;
      x_[0] = carry;
    }
    // Convertir a decimal
    return p;
  }
private:
  // Variables
  int64_t x_, y_;
  bitset<N> x_bin, y_bin;
};

int main() {
  BoothMultiplier bm(11, -5);
  int64_t result = bm.multiply();
  cout << "Resultado: " << result << endl;
  return 0;
}
