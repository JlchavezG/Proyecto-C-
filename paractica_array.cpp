#include<iostream>
using namespace std;
int main() {
    // imprimir un array o un arreglo con la palabra Programacion Basica
    char x[22];
         x[0]='J';
         x[1]='o';
         x[2]='s';
         x[3]='e';
         x[4]=' ';
         x[5]='L';
         x[6]='u';
         x[7]='i';
         x[8]='s';
         x[9]=' ';
         x[10]='C';
         x[11]='h';
         x[12]='a';
         x[13]='v';
         x[14]='e';
         x[15]='z';
         x[16]=' ';
         x[17]='G';
         x[18]='o';
         x[19]='m';
         x[20]='e';
         x[21]='z';
         for(int z=0; z<22; z++){ // declar el ciclo de las veces que se hara la impresión
            cout<<x[z];
            cout<<endl;
         }
    return 0;
    cin.get();
}