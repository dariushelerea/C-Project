#include <stdio.h>
#include <stdlib.h>

int main() {

int numero = 0, mult = 0;


printf ("Introduzca un numero\n");
scanf (" %i",&numero);


mult = numero <<6;
mult += numero <<8;

printf("tu numero es %i\n", mult);

    return EXIT_SUCCESS;
}
