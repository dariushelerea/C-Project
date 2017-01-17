#include <stdio.h>
#include <stdlib.h>

int main() {

char nombreAp[100];
char nombre[50], apellido[50];

printf("Introduce tu nombre:\n");
scanf(" %s", nombre);

printf("Introduce tu apellido:\n");
scanf(" %s", apellido);

sprintf(nombreAp, "%s %s", nombre, apellido);
printf("Has escrito: %s.\n", nombreAp);

    return EXIT_SUCCESS;
}
