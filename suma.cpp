/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 10-03-2020
 * 
 * Entrada y salida 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	cout << "Ingrese dos números enteros" << endl;
	int n1, n2;
	cin >> n1;
	cin >> n2;
	cout << "La suma de " << n1 << " + " << n2 << " es "; 
	cout << n1 + n2 << endl; 
	return 0;
}

