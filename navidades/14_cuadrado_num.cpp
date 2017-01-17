#include <stdio.h>
#include <stdlib.h>

int main() {
int numero[10],contador = 0;


for(contador=0;contador <10;contador++){

   numero[contador] = (contador+1) * (contador+1);
   printf(" Numero %i\n", numero[contador]);
}


    return EXIT_SUCCESS;
}
