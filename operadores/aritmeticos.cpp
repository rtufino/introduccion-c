/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 11-03-2020
 * 
 * Operadores aritméticos
 */

#include <iostream>
using namespace std;

int main()
{
    int a, b, res;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    // imprimir a y b
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // suma
    res = a + b;
    cout << "a + b = " << res << "\n";

    // resta
    res = a - b;
    cout << "a - b = " << res << "\n";

    // multiplicación
    res = a * b;
    cout << "a * b = " << res << "\n";

    // división
    res = a / b;
    cout << "a / b = " << res << "\n";

    // módulo
    res = a % b;
    cout << "a % b = " << res << "\n";

    return 0;
}
