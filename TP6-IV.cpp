#include <iostream>
#include <string>
using namespace std;

int main() {
string cad;
char buscar;
int contador;

cout << "Ingrese una cadena: ";
getline(cin, cad);
cout << "Ingrese el caracter a buscar: ";
cin >> buscar;

contador = 0;
for (int i = 0; i < cad.length(); i++) 
{
if (cad.at(i) == buscar) 
{
contador++;
}
}

cout << "Cantidad de veces que aparece: " << contador << endl;
return 0;
}
