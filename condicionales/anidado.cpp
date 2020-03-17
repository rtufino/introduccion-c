/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 16-03-2020
 * 
 * Sentencias condicionales anidadas
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    // 1 Primer IF
    if (i == 10)
    {
        // 1.1 Segundo IF (anidado)
        if (i < 15)
            cout << "i es menor que 15\n";
        // 1.2 Tercer IF (anidado)
        if (i < 12)
            cout << "i también es menor que 12\n";
        else
            cout << "i es mayor que 15";
    }
    return 0;
}
