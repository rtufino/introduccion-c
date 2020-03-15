/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 11-03-2020
 * 
 * Operadores unitarios de incremento/decreento
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, res;

    // ejemplo post-incremento:
    // primero asigna res = 10, luego suma a = 11
    res = a++;
    cout << "a = " << a << " y res = " << res << "\n";

    // ejemplo post-decremento:
    // primero asigna res = 11, luego resta a = 10
    res = a--;
    cout << "a = " << a << " y res = " << res << "\n";

    // ejemplo pre-incremento:
    // primero suma a = 11, luego asigna res = 11
    res = ++a;
    cout << "a = " << a << " y res = " << res << "\n";

    // ejemplo pre-decremento:
    // primero resta a = 10, luego asigna res = 10
    res = --a;
    cout << "a = " << a << " y res = " << res << "\n";

    return 0;
}
