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
      bool yi_1 = (i > 0) ? y_bin[i - 1] : 0; // Evitar acceder fuera de los límites
      // Actualizar carry
      carry = yi & yi_1;
      // Actualizar p
      if (yi != yi_1) {
        p += (x_ << i) ^ carry;
      }
      // Corrimiento aritmético
      x_ <<= 1;
      x_.set(0, carry); // Establecer el bit menos significativo
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
    constexpr size_t N = 64;
    int64_t a{5}, b{-11};
    BoothMultiplier<N> bm(a, b);
    int64_t result = bm.multiply();
    std::cout << "Resultado: " << result << std::endl;
    return 0;
}
