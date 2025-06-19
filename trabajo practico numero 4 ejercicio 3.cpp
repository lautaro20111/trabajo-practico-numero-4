#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Ingrese un numero entero positivo: ";
cin >> n;
if(n <= 0) {
cout << "El numero debe ser positivo!" << endl;
}
cout << "\nTabla de multiplicar hasta " << n << ":\n";
cout << "     ";
for(int i = 1; i <= n; i++) {
if(i < 10) cout << "  " << i << " ";
else cout << " " << i << " ";
}
cout << "\n    +";
for(int i = 1; i <= n; i++) {
cout << "----";
}
cout << endl;
for(int i = 1; i <= n; i++) {
if(i < 10) cout << " " << i << " |";
else cout << i << " |";
for(int j = 1; j <= n; j++) {
int resultado = i * j;
if(resultado < 10) cout << "  " << resultado << " ";
else if(resultado < 100) cout << " " << resultado << " ";
else cout << resultado << " ";
}
cout << endl;
}
return 0;
}
