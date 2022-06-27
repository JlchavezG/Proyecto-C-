#include "luis.h"
using namespace std;
string nombre, apellido1, apellido2;
int main()
{
  cout<<"\t\t\t Por favor digita tu nombre: ";
  getline(cin,nombre);  
  cout<<"\t\t\t Por favor digita tu Apellido Paterno: ";
  getline(cin,apellido1);
  cout<<"\t\t\t Por favor digita tu Apellido Materno: ";
  getline(cin,apellido2);
  cout<<"Se a cread un archivo de texto con tus datos: por favor revisa \n";
  ofstream file;
  file.open("archivo.txt");
  file << "Tu nombre es: "<<nombre<<" \n";
  file << "Tu Apellido Paterno es: "<<apellido1<<"\n";
  file << "Tu Apellido Materno es: "<<apellido2<<"\n";
  file.close();
  return 0;
}