#include <stdio.h>
#include <stdlib.h>

int main() {
int contador = 0;


printf ("Codigo ascii\n");

for(contador = 0; contador < 256;contador ++){
    printf("%i = %c\n",contador, contador);

}

    return EXIT_SUCCESS;
}
