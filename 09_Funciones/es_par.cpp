#include <stdio.h>
#include <stdlib.h>


        bool es_par(int n){

        if (n % 2 == 0){
        return 1;

        }
        else {
        return 0;
        }
        }

int main() {

        int numero;
        printf("numero\n");
        scanf("%i", &numero);
        printf("El numero %i %s es par\n",numero,
        es_par(numero) ?  "" : "no" );

    return EXIT_SUCCESS;
}
