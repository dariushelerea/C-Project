#include <stdio.h>
#include <stdlib.h>

int main() {


char palabra[] = "Samuel";
int contador = 0;
int longitud = sizeof(palabra)/sizeof(char) - 1;
char invertido[5];
for(contador = 0; contador < sizeof(palabra)/sizeof(char) - 1; contador++){
invertido[longitud] = palabra[contador];
longitud --;
}
printf(" %s\n", invertido);

    return EXIT_SUCCESS;
}
