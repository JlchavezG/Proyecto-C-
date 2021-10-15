#include<iostream>
#include<stdlib.h>
using namespace std;
char menu,ok,opc,opc1,opc2,opc3,opc4,opc5;
string user, pass, usuario = "Sistemas", password = "Admin01";
int contador = 0;
int main(){
    cout<"Bienvenido al sistema por favor ingresa tus datos: \n";
    cout<<"Ingresa tu Usuario: ";
    cin>>user;
    cout<<"Ingresa tu Password: ";
    cin>>pass;
    if(user == usuario && pass == password){
        cout<<"Bienvenido al sistemas: "<<usuario;
    }
    else{
        contador ++;
        if(contador < 3){
            cout<<"Usuario Invalido superaste el numero de intentos: "<<contador<<endl;
        }
        else{
            cout<<"Usuario invalido este es el intento: "<<contador<<" Solo tienes 3 intentos \n";
        }
    }
    return 0;
    cin.get();
}