#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 0x100

int main(int argc, char *argv[]) {

char buffer[N];
char *palabra;
printf ("Nombre\n");
fgets(buffer,N,stdin);

palabra = (char*) malloc(strlen (buffer)+1);
strcpy( palabra, buffer );

printf("Tu palabra es %s\n", palabra);
free (palabra);
    return EXIT_SUCCESS;
}
