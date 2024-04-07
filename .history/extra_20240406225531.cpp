#include <iostream>
#include "h.h"
#include "multi.h"
using namespace std;

void iniciar(){
    bool bucle{true};
    int n1, n2, res{0};
    Multiplicador multi1;
    //Multiplicador<8> multi1;
    do {
        cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese el primer número entero:" << "\x1B[m \n\t";
        cin >> n1;
        if (cin.fail() || !(n1 >= -32768 && n1 <= 32767)) {
            cout << "\nValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            multi1.num1 = n1;
            cout << "\x1B[31m" << "\n\tIngrese el segundo número entero:" << "\x1B[m \n\t";
            cin >> n2;
            if (cin.fail() || !(n2 >= -32768 && n2 <= 32767)) {
                cout << "\nValor incorrecto!"; 
                cin.clear();           
                cin.ignore(100, '\n');
            } else {
                multi1.num2 = n2;
                multi1.funcionxd();
            }
        }
        cout << "\n\tIngrese 1 para repetir" << "\n";
        cin >> res;
        if (res != 1) {
            bucle = false;
            break;
        }
    } while (bucle);
}