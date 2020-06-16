/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 11-03-2020
 * 
 * Operadores de comparación
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 es " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 es " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 es " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 es " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 es " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 es " << result << endl;

    return 0;
}
