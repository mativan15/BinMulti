#include <iostream>
#include "h.h"
#include "multi.h"
using namespace std;
#include <cmath>

void iniciar(){
    int n1, n2, bits{0};
    //Multiplicador<0> multi1;
    bool bucle{true};
    int res{0};
    do {
        cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese la cantidad de bits a utilizar: (1-32)" << "\x1B[m \n\t";
        cin >> bits;
        if (cin.fail() || !(bits >= 1 && bits <= 32)) {
            cout << "\nValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            if (bits >= 1 && bits <=4){
                Multiplicador<4> multi1;
                input(n1,n2);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 5 && bits <=8){
                Multiplicador<8> multi1;
                input(n1,n2);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 9 && bits <=16){
                Multiplicador<16> multi1;
                input(n1,n2);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 17 && bits <=24){
                Multiplicador<24> multi1;
                input(n1,n2);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            } else if (bits >= 25 && bits <=32){
                Multiplicador<32> multi1;
                input(n1,n2);
                multi1.num1 = n1;
                multi1.num2 = n2;
                multi1.funcionxd();
            }
        //Multiplicador<tamaño> multi1;
        
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
   // } 

/*
    cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese la cantidad de bits a utilizar: (1-32)" << "\x1B[m \n\t";
    cin >> bits;
    if (cin.fail() || !(bits >= 1 && bits <= 32)) {
        cout << "\nValor incorrecto!"; 
        cin.clear();           
        cin.ignore(100, '\n');
    } else {
        if (bits >= 1 && bits <=4){
            Multiplicador<4> multi1;
            input(n1,n2);
            multi1.num1 = n1;
            multi1.num2 = n2;
            multi1.funcionxd();
        } else if (bits >= 5 && bits <=8){
            Multiplicador<8> multi1;
            input(n1,n2);
            multi1.num1 = n1;
            multi1.num2 = n2;
            multi1.funcionxd();
        } else if (bits >= 9 && bits <=16){
            Multiplicador<16> multi1;
            input(n1,n2);
            multi1.num1 = n1;
            multi1.num2 = n2;
            multi1.funcionxd();
        } else if (bits >= 17 && bits <=24){
            Multiplicador<24> multi1;
            input(n1,n2);
            multi1.num1 = n1;
            multi1.num2 = n2;
            multi1.funcionxd();
        } else if (bits >= 25 && bits <=32){
            Multiplicador<32> multi1;
            input(n1,n2);
            multi1.num1 = n1;
            multi1.num2 = n2;
            multi1.funcionxd();
        }
    //Multiplicador<tamaño> multi1;
    
    }
    iniciar();
    
}*/
void input(int &n1, int &n2){
    //bool bucle{true};
    int res{0};
    //do {
        cout << "\x1B[31m" << "\n\n\tBienvenido, ingrese el primer número entero:" << "\x1B[m \n\t";
        cin >> n1;
        if (cin.fail() || !(n1 >= -32768 && n1 <= 32767)) {
            cout << "\nValor incorrecto!"; 
            cin.clear();           
            cin.ignore(100, '\n');
        } else {
            
            cout << "\x1B[31m" << "\n\tIngrese el segundo número entero:" << "\x1B[m \n\t";
            cin >> n2;
            if (cin.fail() || !(n2 >= -32768 && n2 <= 32767)) {
                cout << "\nValor incorrecto!"; 
                cin.clear();           
                cin.ignore(100, '\n');
            } else {
                //multi1.num2 = n2;
                //multi1.funcionxd();
            }
        }
        /*cout << "\n\tIngrese 1 para repetir" << "\n";
        cin >> res;
        if (res != 1) {
            bucle = false;
            break;
        }*/
   // } while (bucle);
}