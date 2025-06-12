#include <iostream>
using namespace std;
int main() 
{
int n;
int resultado = 1;
cout << "este programa hara el resultado de un producto de 1 a un numero determinado que pongas" << endl;
cout << "Ingrese un numero entero no negativo: " << endl;
cin >> n;
if (n < 0) {
cout << "El número debe ser no negativo." << endl;
} else {
for (int i = 1; i <= n; i++) {
resultado *= i;
}
cout << "El resultado del producto desde 1 hasta " << n << " es: " << resultado << endl;
}
return 0;
}
