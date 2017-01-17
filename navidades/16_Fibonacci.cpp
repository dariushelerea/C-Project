#include <stdio.h>
#include <stdlib.h>

int main() {
int Posicion1=0,Posicion2=1,Posicion3=0,contador=0;

printf(" %i\n %i\n", Posicion1, Posicion2);


for(contador=0;contador<20;contador++){

   Posicion3 = Posicion1 + Posicion2;
   printf(" %i\n",Posicion3);
   Posicion1 = Posicion2;
   Posicion2 = Posicion3;

}
printf(" \n");

    return EXIT_SUCCESS;
}
