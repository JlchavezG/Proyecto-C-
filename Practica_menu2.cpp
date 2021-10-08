#include<iostream>
#include<stdio.h>
using namespace std;
string user, pass, user1 = "Sistemas", pass1 = "Admin01";
char menu, seguir, opc;
int main(){
cout<<"Bienvenido a la aplicacion por favor identificate \n";
cout<<"Ingresa tu Usuario: ";
cin>>user;
cout<<"Ingresa tu Password: ";
cin>>pass;
    if(user == user1 && pass == pass1){
        do{
             cout<<"Bienvenido al sistema: "<<user<<" Selecciona una opcion del Menu: \n";
             cout<<"a) Juego de sumas \n";
             cout<<"b) Juego de restas \n";
             cout<<"c) Estudia tablas de multiplicar \n";
             cout<<"d) Juego de preguntas \n";
             cin>>menu;
                if(menu == 'a'){
                  int a,b,c,d, resp;
                  cout<<"Ingresa los numeros a sumar: \n";
                  cout<<"Numero 1: ";
                  cin>>a;
                  cout<<"Numero 2: ";
                  cin>>b;
                  cout<<"Numero 3: ";
                  cin>>c;
                  cout<<"Numero 4: ";
                  cin>>d;
                  resp = a+b+c+d;
                  cout<<"La respuesta de la suma de los numeros: "<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" = "<<resp<<endl;
                 }
                 else if(menu == 'b'){
                    cout<<"Juego de restas \n";
                 }
                 else if (menu == 'c') {
                    cout<<"Tablas de multiplicar \n"; 
                 }
                 else if(menu == 'd'){
                    cout<<"Juego de preguntas \n";
                 }

                else{
                    cout<<"Opción no valida"<<endl;
                    cout<<"¿Deceas realizar otra actividad(s/n)? \n";
                    cin>>opc;
                }
        }
          while(opc!='n');
    }
    else{
        cout<<"Usuario no valido contacta a soporte \n";
    }
    return 0;
    cin.get();

}