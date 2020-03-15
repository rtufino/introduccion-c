/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 14-03-2020
 * 
 * Operadores lógicos
 * 
 */

#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 10, b = 4, c = 10, d = 20; 

    // Imprimir valores
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

	// Ejemplo de AND lógico 
	if (a > b && c == d) 
		cout << "a es mayor que b AND c es igual que d\n"; 
	else
		cout << "Condición AND no satisfecha\n"; 

	// Ejemplo de OR lógico
	if (a > b || c == d) 
		cout << "a es mayor que b OR c es igual que d\n"; 
	else
		cout << "Ni a es mayor que b tampoco c es igual que d\n"; 

	// Ejemplo de NOT lógico
	if (!a) 
		cout << "a es cero\n"; 
	else
		cout << "a no es cero\n"; 

	return 0; 
} 
