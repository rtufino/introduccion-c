
/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 18-03-2020
 * 
 * Ejemplo de arreglos
 */

#include <iostream>
using namespace std;

void promedio(int[], int);

int main()
{
    int t = 5;
    int notas[t];

    cout << "Ingrese " << t << " notas:\n";

    for (int i = 0; i < t; ++i)
    {
        cin >> notas[i];
    }

    promedio(notas, t);

    return 0;
}

void promedio(int notas[], int t)
{
    int suma = 0;
    for (int i = 0; i < t; i++)
    {
        suma += notas[i];
    }
    cout << "Promedio = " << (double)suma / t << endl;
    return;
}