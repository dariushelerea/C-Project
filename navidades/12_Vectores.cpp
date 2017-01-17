#include <stdio.h>
#include <stdlib.h>

int main() {
int vector1 [2], vector2[2],Pescalar;

printf(" Valor X del primer vector \n");
scanf(" %i", &vector1[0]);

printf(" Valor Y del primer vector \n");
scanf(" %i", &vector1[1]);

printf(" Valor X del segundo vector \n");
scanf(" %i", &vector2[0]);

printf(" Valor Y del segundo vector \n");
scanf(" %i", &vector2[1]);

Pescalar = vector1[0] * vector2[0] + vector1[1] * vector2[1];

printf("El producto escalar de tus vectores es %i \n", Pescalar);


    return EXIT_SUCCESS;
}
