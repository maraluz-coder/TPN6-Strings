#include <iostream>
#include <string>
using namespace std;

int main() {
string cad;
char c;
int contador;

cout << "Ingrese una cadena: ";
getline(cin, cad);

contador = 0;
for (int i = 0; i < cad.length(); i++) 
{
c = cad.at(i);
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
{
contador++;
}
}

cout << "Cantidad de letras: " << contador << endl;
return 0;
}
