#include <iostream>
using namespace std;
int main()
{
double saldo = 1000.00; 
int opcion;
double monto;
 do {
cout << "\n===== Cajero Automatico =====" << endl;
cout << "1. Consultar saldo" << endl;
cout << "2. Depositar dinero" << endl;
cout << "3. Retirar dinero" << endl;
cout << "4. Salir" << endl;
cout << "Seleccione una opcion: ";
cin >> opcion;
switch(opcion) {
case 1:
cout << "Su saldo actual es: $" << saldo << endl;
break;
case 2:
cout << "Ingrese el monto a depositar: $";
cin >> monto;
if (monto > 0) {
saldo += monto;
cout << "Depósito exitoso. Nuevo saldo: $" << saldo << endl;
} else {
cout << "Error: El monto debe ser mayor a cero." << endl;
}
break;
case 3:
cout << "Ingrese el monto a retirar: $";
cin >> monto;
if (monto <= 0) {
cout << "Error: El monto debe ser mayor a cero." << endl;
} else if (monto > saldo) {
cout << "Error: Saldo insuficiente." << endl;
} else {
saldo -= monto;
cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
}
break;
case 4:
cout << "Gracias por utilizar el cajero. ¡Hasta luego!" << endl;
break;
cout << "Opción inválida. Intente nuevamente." << endl;
}
} while(opcion != 4);
return 0;
}
