#include <iostream>
#include "h.h"
using namespace std;

void iniciar(){
    bool bucle{true};
    int num1, num2, res{0};
    do {
        /*cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese el primer número entero:" << "\x1B[m \n\t";
        cin >> num1;
        if (cin.fail() || !(num1 >= -32768 && num1 <= 32767)) {
            cout << "\nValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            cal1.año = año;
            cout << "\x1B[31m" << "\n\tIngrese el segundo número entero:" << "\n\t";
            cin >> num2;
            if (cin.fail() || !(num1 >= -32768 && num1 <= 32767)) {
                cout << "\nValor incorrecto!"; 
                cin.clear();           
                cin.ignore(100, '\n');
            } else {
                cal1.mes = mes;
                cal1.imp_cal();
            }
        }*/
        cout << "\n\tIngrese 1 para repetir" << "\n";
        cin >> res;
        if (res != 1) {
            bucle = false;
            break;
        }
    } while (bucle);
}