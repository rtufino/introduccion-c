/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 18-03-2020
 * 
 * Prototipo de una función
 */

#include <iostream>
using namespace std;

// Prototipo de la función
int sumar(int, int);

int main()
{
    int num1, num2, sum;
    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;
    // llamada a la función
    sum = sumar(num1, num2);
    cout << "Suma = " << sum << endl;
    return 0;
}

// Definición de la función
int sumar(int a, int b)
{
    int c = a + b;
    // Sentencia de retorno
    return c;
}
