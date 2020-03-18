/*
 * Curso Introducción a C/C++
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 17-03-2020
 * 
 * Sentencia break
 */

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5){
            break;
        }
        cout << i << endl;
    }
    
}