#include <iostream>
#include <string>
using namespace std;

int main() {
string cad, reverso;

cout << "Ingrese una cadena: ";
getline(cin, cad);

reverso = "";
for (int i = cad.length() - 1; i >= 0; i--) 
{
reverso.append(1, cad.at(i));
}

cout << "Reverso: " << reverso << endl;
return 0;
}
