/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 16-03-2020
 * 
 * Sentencias condicionales if..else..if
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 20;

    if (i == 10)
        cout << "i es 10";
    else if (i == 15)
        cout << "i es 15";
    else if (i == 20)
        cout << "i es 20";
    else
        cout << "i no está presente";
}
