#include <iostream>
using namespace std;

int cuadradoPorValor(int);
int cuadradoPorReferencia(int*);
int cuboPorReferencia(int &);

int main(){
    int x = 2, y = 3, z = 5;

    cout << "Valor de x: " << x << endl;
    cout << "Cuadrado de x: " << cuadradoPorValor(x) << endl;
    cout << "Valor de x: " << x << endl << endl;

    cout << "Valor de y: " << y << endl;
    cout << "Cuadrado de y: " << cuadradoPorReferencia(&y) << endl;
    cout << "Valor de y: " << y << endl << endl;

    cout << "Valor de z: " << z << endl;
    cout << "Cubo de z: " << cuboPorReferencia(z) << endl;
    cout << "Valor de z: " << z << endl;

    return 0;
}

int cuadradoPorValor(int n){
     n = n * n;
     return n;
}

int cuadradoPorReferencia(int *n){
     *n = *n * *n;
     return *n;
}

int cuboPorReferencia(int &n){
    n = n * n * n;
    return n;
}