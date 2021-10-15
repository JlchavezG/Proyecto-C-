#include<iostream>
#include<stdio.h>
using namespace std;
string username , pass, user = "Sistemas", passw = "Admin01";
char menu, opc1, opc2, opc3, opc4, opc5;
int a,b,c,d,resp;
int main(){
    cout<<"Bienvenido a nuestro aplicativo por favor identificate \n";
    cout<<"Ingresa tu usuario: ";
    cin>>username;
    cout<<"Ingresa tu Password: ";
    cin>>pass;
       if(username == user && pass == passw){
          do{
            cout<<"Porfavor selecciona alguna opción del menu "<<username<<"\n";
            cout<<"a) Programa de sumas \n";
            cout<<"b) Programa de restas \n";
            cout<<"c) Estudia las tablas de multiplicar \n";
            cout<<"d) Vocal o consonante \n";
            cin>>menu;
                if(menu == 'a'){
                   do{
                      cout<<"Bienvenido al programa de sumas: \n";
                      cout<<"Ingresa el primer numero a sumar: ";
                      cin>>a;
                      cout<<"Ingresa el segundo numero a sumar: ";
                      cin>>b;
                      cout<<"Ingresa el tercer numero a sumar: ";
                      cin>>c;
                      cout<<"Ingresa el cuarto numero a sumar: ";
                      cin>>d;
                      resp = a+b+c+d;
                      cout<<"La respuesta de la suma de: "<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<resp<<endl;
                      cout<<"¿Quieres sumar de nuevo(s/n)? ";
                      cin>>opc2;
                   }
                   while(opc2!='n');

                }
                else if(menu == 'b'){
                    do{
                      cout<<"Bienvenido al programa de restas: \n";
                      cout<<"Ingresa el primer numero a restar: ";
                      cin>>a;
                      cout<<"Ingresa el segundo numero a restar: ";
                      cin>>b;
                      cout<<"Ingresa el tercer numero a restar: ";
                      cin>>c;
                      cout<<"Ingresa el cuarto numero a restar: ";
                      cin>>d;
                      resp = a-b-c-d;
                      cout<<"La respuesta de la suma de: "<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<resp<<endl;
                      cout<<"¿Quieres restar de nuevo(s/n)? ";
                      cin>>opc3;
                    }
                    while(opc3!='n');
                }
                else if(menu == 'c'){
                 int multiplica, numero, i;  
                 do{
                  cout<<"Bienvenido a las tablas de multiplicar \n";
                  cout<<"Por favor ingresa el numero de la tabla a generar: ";
                  cin>>numero;
                  for(int i = 1; i<= 10; i++ ){
                      multiplica = i * numero;
                      cout<<numero<<" x "<<i<<" = "<<multiplica<<endl;
                     } 
                     cout<<"¿Quieres generar otra tabla de multiplicar(s/n)? ";
                     fflush(stdin);
                     cin>>opc4; 
                 }  
                 while(opc4!='n');     
    
                }
                else if(menu == 'd'){
                    do{
                      
                    }
                    while(opc5!= 'n')
                }     
                else{
                    cout<<"Opcion invalida ¿quieres regresar al menu(s/n)? \n";
                    cin>>opc1;
                }
              

          }   
          while(opc1!='s');


       }
       else{
           cout<<"Usuario no indentifcado por favor contacta a soporte"<<endl;
       }     
}