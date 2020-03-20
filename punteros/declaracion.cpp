#include <iostream> 
using namespace std; 

int main() { 
     int x = 10; 
     cout << "Valor de x: " << x << endl; 
     cout << "Dirección de x: " << &x << endl;

     int *xPtr = nullptr;
     xPtr = &x;
     cout << "Dirección de xPtr: " << xPtr << endl;
     cout << "Valor al que apunta xPtr: " << *xPtr << endl;

     return 0; 
}
