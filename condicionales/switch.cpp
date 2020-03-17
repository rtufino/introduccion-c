/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 16-03-2020
 * 
 * Sentencias condicionales switch
 */

#include <iostream>
using namespace std;

int main()
{
    int opc = 2;
    switch (opc)
    {
    case 1:
        cout << "La opción es 1";
        break;
    case 2:
        cout << "La opción es 2";
        break;
    default:
        cout << "Opción inválida";
        break;
    }
    return 0;
}
