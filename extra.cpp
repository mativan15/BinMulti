#include <iostream>
#include <cmath>
#include <cmath>
#include "h.h"
#include "multi.h"
using namespace std;
void iniciar(){
    int bits{0};
    long long n1, n2{0};
    bool bucle{true};
    int res{0};
    do {
        cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese la cantidad de bits a utilizar (1-32) :" << "\x1B[m \n\t";
        cin >> bits;
        if (cin.fail() || !(bits >= 1 && bits <= 32)) {
            cout << "\nValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            if (bits >= 1 && bits <=4){
                Multiplicador<4> multi1;
                input(n1,n2, bits);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 5 && bits <=8){
                Multiplicador<8> multi1;
                input(n1,n2, bits);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 9 && bits <=16){
                Multiplicador<16> multi1;
                input(n1,n2, bits);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 17 && bits <=24){
                Multiplicador<24> multi1;
                input(n1,n2, bits);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 25 && bits <=32){
                Multiplicador<31> multi1;
                input(n1,n2, bits);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            }
        }
        iniciar();
        cout << "\n\tIngrese 1 para repetir" << "\n";
        cin >> res;
        if (res != 1) {
            bucle = false;
            break;
        }
    } while (bucle);
}
void input(long long &n1, long long &n2, int bits){
    bool bucle{true};
    do {
        cout << "\x1B[33m" << "\n\n\tIngrese el multiplicando (M):" << "\x1B[m \n\t";
        cin >> n1;
        if (cin.fail() || !(n1 >= -(pow(2,bits-1)) && n1 <= (pow(2,bits-1)-1))) {
            cout << "\n\tValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            cout << "\x1B[33m" << "\n\tIngrese el multiplicador (Q):" << "\x1B[m \n\t";
            cin >> n2;
            if (cin.fail() || !(n1 >= -(pow(2,bits-1)) && n1 <= (pow(2,bits-1)-1))) {
                cout << "\n\tValor incorrecto!"; 
                cin.clear();           
                cin.ignore(100, '\n');
            } else {
                bucle = false;
                break;
            }
        }
    } while (bucle);
}