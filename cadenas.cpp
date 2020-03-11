/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 10-03-2020
 * 
 * Cadena de caracteres
 */


#include <iostream>

// Incluye la librería para manipular srtings
#include <string>

using namespace std;

int main()
{
	// Creación de variables
	string nombre;
	string frase;
	
	// Lee hasta el siguiente separador (espacio, nueva linea, tab)	
	cout << "Ingresa tu nombre: ";
	cin >> nombre;	
	cout << "Hola " << nombre << endl;
					
	// Ignora cualquier dato en el stream de entrada		
	cin.ignore();	
	
	// Lee hasta un salto de línea
	cout << "\nIngrese una frase: ";
	getline(cin, frase);	
	cout << frase << endl;
	
	// Obtiene el tamaño de la cadena
	//int len = frase.size();
	int len = frase.length();
	cout << "\nTamaño de la frase: " << len << endl;
	
	// Obtener un caracter
	//char inicial = nombre[3];
	char letra = nombre.at(4);
	cout << "\nUna letra de tu nombre: " << letra << endl;
	
	// Obtener el primer y el último caracter de la frase
	char primera = frase.front();
	char ultima = frase.back();
	cout << "\nPrimera letra de la frase: " << primera << endl;
	cout << "Última letra de la frase: " << ultima << endl;
		
	// Crear una cadena a partir de otra
	string temporal(nombre);
	cout << "\nNombre temporal: " << temporal << endl;
		
	// Concatenar dos cadenas
	// nombre = nombre + frase;
	nombre.append(frase);
	cout << "\nConcatenación del nombre y la frase: " << nombre << endl;
	
	// Restaurar el valor de nombre
	nombre = temporal;
	
	// Subcadenas
	cout << "\nSubcadenas:\n";
	// Desde el caracter 3 hasta el final
	cout << frase.substr(3) << endl;
	// Desde el caracter 3, toma 7 caracteres
	cout << frase.substr(3, 7) << endl;
	
	temporal = frase;
	
	// Borrar caracteres
	cout << "\nBorrar:\n";
	// Desde el caracter 3, toma 7 caracteres
	cout << frase.erase(3,7) << endl;
	
	// Restaurar al valor de frase
	frase = temporal;
	
	// Reemplazar
	cout << "\nReemplazar:\n";
	frase.replace(3, 7, "programación es");
	cout << frase << endl;
	
	// Buscar
	int pos = frase.find("programación");
	cout << "La palabra 'programación' se encuentra en la posición: "; 
	cout << pos << endl;
	
	return 0;
}