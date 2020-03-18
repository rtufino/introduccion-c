/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 17-03-2020
 * 
 * Sentencia de repetición while
 */

#include <iostream>
using namespace std;

int main()
{
    // inicialización
    int i = 1;

    // evaluación de la condición
    while (i < 6)
    {
        cout << "Mientras i < 6 (i = " << i << ")" << endl;

        // actualización
        i++;
    }

    cout << "i == " << i << endl;
    return 0;
}
