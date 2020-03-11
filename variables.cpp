/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 10-03-2020
 * 
 * Tipo de variables
 */
 
#include <iostream> 

using namespace std; 

int main() 
{ 
	
	bool booleano = false;
	char caracter = 'R';
	short entero_corto = 32767;
	int entero_normal = 2147483647;
	long int entero_largo = 2147483647;
	float decimal_simple = 3.15;
	double decimal_doble = decimal_simple * 1.23e-65;
	
	cout << "Booleano: " << booleano; 
	cout << ",\ttamaño: " << sizeof(booleano);
	cout << " bytes" << endl;
	
	cout << "Caracter: " << caracter; 
	cout << ",\ttamaño: " << sizeof(caracter);
	cout << " bytes" << endl;
	
	cout << "Entero corto: " << entero_corto; 
	cout << ",\ttamaño: " << sizeof(entero_corto);
	cout << " bytes" << endl;
	
	cout << "Entero normal: " << entero_normal; 
	cout << ",\ttamaño: " << sizeof(entero_normal);
	cout << " bytes" << endl;
	
	cout << "Entero largo: " << entero_largo; 
	cout << ",\ttamaño: " << sizeof(entero_largo);
	cout << " bytes" << endl;
	
	cout << "Decimal simple: " << decimal_simple; 
	cout << ",\ttamaño: " << sizeof(decimal_simple);
	cout << " bytes" << endl;
	
	cout << "Decimal doble: " << decimal_doble; 
	cout << ",\ttamaño: " << sizeof(decimal_doble);
	cout << " bytes" << endl;
	
	
	return 0; 
} 
