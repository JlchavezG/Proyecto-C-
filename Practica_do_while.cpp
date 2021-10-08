#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    string user, pass, usuario = "Sistemas", password = "Admin01";
    char seguir, opc;
    int multiplica, numero, i;
    cout<<"Bienvenido por favor ingresa al sistema:\n";
    cout<<"Ingresa tu usuario: ";
    cin>>user;
    cout<<"Ingresa tu password: ";
    cin>>pass;
    if(user == usuario && pass == password){
    do{
        cout<<"Por favor ingresa el numero de la tabla de multiplicar a genar: ";
        cin>>numero;
        for(int i = 1; i<= 10; i++ ){
             multiplica = i * numero;
             cout<<numero<<" x "<<i<<" = "<<multiplica<<endl;
        }
        cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
        fflush(stdin);
        cin>>seguir;
    }
    while(seguir!='n');
   }
   else{
     cout<<"Usuario no valido por favor contacta a soporte"<<endl;
   }
    cin.get();
    return 0;
}