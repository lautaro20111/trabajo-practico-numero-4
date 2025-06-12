#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Ingrese un número entero positivo: ";
cin >> n;
if (n <= 0) {
cout << "El numero debe ser positivo." << endl;
}
for (int fila = 1; fila <= n; fila++) {
for (int columna = 1; columna <= n; columna++) {
if (fila + columna <= n + 1) {
cout << "*";
} else {
cout << "*";
}
}
cout << endl;
}
return 0;
}
