/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 18-03-2020
 * 
 * Ejemplo de una función
 */

#include <iostream> 
using namespace std; 

int max(int x, int y) 
{ 
	int mayor;
	if (x > y) 
	    mayor = x; 
	else
	    mayor = y; 

	return mayor;
} 

int main() { 
	int a = 10, b = 20; 
    cout << "a: " << a << "\nb: " << b << endl;
	int mayor = max(a, b); 
	cout << "mayor: " << mayor << endl; 
	return 0; 
} 

