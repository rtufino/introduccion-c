/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 17-03-2020
 * 
 * Sentencia de repetición do-while
 */

#include <iostream>
using namespace std;

int main()
{
    int i = 2; // inicialización

    do
    {
        // cuerpo del bucle
        cout << "Al menos me ejecutaré una vez!\n";

        // actualización
        i++;

    } while (i < 1); // condición

    return 0;
}
