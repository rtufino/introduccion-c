/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 19-03-2020
 * 
 * Ejemplo de arreglos bidimensional
 */

#include <iostream>
using namespace std;

const int CIUDAD = 2;
const int SEMANA = 7;

int main()
{
    int temperatura[CIUDAD][SEMANA];

    cout << "Ingrese los valores de temperatura diaria de cada ciudad. \n";

    for (int i = 0; i < CIUDAD; ++i)
    {
        for(int j = 0; j < SEMANA; ++j)
        {
            cout << "Ciudad " << i + 1 << ", día " << j + 1 << " : ";
            cin >> temperatura[i][j];
        }
    }

    cout << "\n\nMostrando valores:\n";

    for (int i = 0; i < CIUDAD; ++i)
    {
        for(int j = 0; j < SEMANA; ++j)
        {
            cout << "Ciudad " << i + 1 << ", día " << j + 1 << " = " << temperatura[i][j] << endl;
        }
    }

    return 0;
}