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

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    // mayor que
    if (a > b)
        cout << "a es mayor que b\n";
    else
        cout << "a es menor o igual que b\n";

    // mayor o igual
    if (a >= b)
        cout << "a es mayor o igual que b\n";
    else
        cout << "a es menor que b\n";

    // menor que
    if (a < b)
        cout << "a es menor que b\n";
    else
        cout << "a es mayor o igual que b\n";

    // menor o igual que
    if (a <= b)
        cout << "a es menor o igual que b\n";
    else
        cout << "a es mayor que b\n";

    // igual a
    if (a == b)
        cout << "a es igual que b\n";
    else
        cout << "a y b son diferentes\n";

    // diferentes que
    if (a != b)
        cout << "a es diferente que b\n";
    else
        cout << "a es igual que b\n";

    return 0;
}
