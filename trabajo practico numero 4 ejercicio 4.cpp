#include <iostream>
using namespace std;
int main() 
{
int cantidadVendedores;
cout << "SISTEMA DE VENTAS" << endl;
cout << "Ingrese la cantidad de vendedores: ";
cin >> cantidadVendedores;
if(cantidadVendedores <= 0) {
cout << "La cantidad debe ser un numero positivo!" << endl;
}
char nombres[cantidadVendedores][50];
int ventas[cantidadVendedores];
for(int i = 0; i < cantidadVendedores; i++) {
cout << "\nVendedor " << (i + 1) << ":" << endl;
cout << "Nombre: ";
cin.getline(nombres[i], 50); // Leer nombre con espacios
cout << "Cantidad de ventas: ";
cin >> ventas[i];
}
cout << "\nRESUMEN DE VENTAS:" << endl;
for(int i = 0; i < cantidadVendedores; i++) {
cout << nombres[i] << ": " << ventas[i] << " ventas" << endl;
}
    
return 0;
}
