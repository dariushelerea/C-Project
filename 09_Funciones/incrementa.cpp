#include <stdio.h>
#include <stdlib.h>

void incrementa(int *incrementador, int numero){

    *incrementador = *incrementador + numero;


}


int main() {
    int a = 5,b = 2;

    incrementa(&a, 5);
    incrementa(&a, 3);
    incrementa(&a, -2);

    return EXIT_SUCCESS;
}
