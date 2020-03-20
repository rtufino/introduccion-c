#include <iostream>

using namespace std;

int main()
{
    int *xPtr, x;

    x = 5;
    cout << "Valor de x: " << x << endl;
    cout << "Dirección de x: " << &x << endl;

    xPtr = &x;
    cout << "Dirección de xPtr: " << xPtr << endl;
    cout << "Valor al que apunta xPtr: " << *xPtr << endl;

    *xPtr = 8;
    cout << "Valor al que apunta xPtr" << *xPtr << endl;
    cout << "Valor de x: " << x << endl;

    return 0;
}