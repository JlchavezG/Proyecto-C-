#include <stdlib.h>
#include <stdio.h>
int main(){
    char final;
    while(final!='y'){
      printf("¿Quieres terminar la rutina? (y/n): ");
      scanf("%c",&final);
    }
}