#include <stdio.h>
#include <stdlib.h>

int main () {
 char palabra[7] = "";
 int contador = 0;
printf("Escriba 7 letras para convertir\n");
    scanf("%s",palabra);
for(contador = 0; contador < sizeof(palabra)/sizeof(char) - 1; contador++){

    printf(" %c", palabra[contador]+3);
}
printf(" \n");

    return EXIT_SUCCESS;
}
