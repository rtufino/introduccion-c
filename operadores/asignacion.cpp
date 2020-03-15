/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 14-03-2020
 * 
 * Operadores de asignación
 * 
 */

#include <iostream>
using namespace std;

int main()
{

    // Asignando el valor 10a la variable a
    int a = 10;
    cout << "Aplicando 'a = 10', a: " << a << "\n";

    // Asignar el valor que tien "a" más 10
    a += 10;
    cout << "Aplicando 'a += 10', a: " << a << "\n";

    // Asignar el valor que tien "a" menos 10
    a -= 10;
    cout << "Aplicando 'a -= 10', a: " << a << "\n";

    // Asignar el valor que tien "a" multiplicado por 10
    a *= 10;
    cout << "Aplicando 'a *= 10', a: " << a << "\n";

    // Asignar el valor que tien "a" dividido para 10
    a /= 10;
    cout << "Aplicando 'a /= 10', a: " << a << "\n";

    return 0;
}
