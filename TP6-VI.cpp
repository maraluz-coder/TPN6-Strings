#include <iostream>
#include <string>
using namespace std;

int main() {
int opcion, longitud, contador;
string cad1, cad2, reverso;
char buscar, c;

cout << "--- MENU DE OPCIONES ---" << endl;
cout << "1. Longitud de una cadena" << endl;
cout << "2. Concatenar dos cadenas" << endl;
cout << "3. Reverso de una cadena" << endl;
cout << "4. Cantidad de veces que aparece un caracter" << endl;
cout << "5. Cantidad de letras de una cadena" << endl;
cout << "Seleccione una opcion: ";
cin >> opcion;

switch (opcion) 
{
case 1:
cout << "Ingrese una cadena: ";
getline(cin, cad1);
longitud = cad1.length();
cout << "Longitud: " << longitud << endl;
break;
case 2:
cout << "Ingrese la primera cadena: ";
getline(cin, cad1);
cout << "Ingrese la segunda cadena: ";
getline(cin, cad2);
cad1.append(cad2);
cout << "Concatenacion: " << cad1 << endl;
break;
case 3:
cout << "Ingrese una cadena: ";
getline(cin, cad1);
reverso = "";
for (int i = cad1.length() - 1; i >= 0; i--) 
{
reverso.append(1, cad1.at(i));
}
cout << "Reverso: " << reverso << endl;
break;
case 4:
cout << "Ingrese una cadena: ";
getline(cin, cad1);
cout << "Ingrese el caracter a buscar: ";
cin >> buscar;
contador = 0;
for (int i = 0; i < cad1.length(); i++) 
{
if (cad1.at(i) == buscar) 
{
contador++;
}
}
cout << "Cantidad de veces que aparece: " << contador << endl;
break;
case 5:
cout << "Ingrese una cadena: ";
getline(cin, cad1);
contador = 0;
for (int i = 0; i < cad1.length(); i++) 
{
c = cad1.at(i);
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
{
contador++;
}
}
cout << "Cantidad de letras: " << contador << endl;
break;
default:
cout << "Opcion no valida." << endl;
break;
}

return 0;
}
