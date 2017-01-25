#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//
// correcicon profesor
//int suma(int op1, intop2){
//return op1 + op2;
//
// }


int suma(int numero1, int numero2){
int resultado;
    resultado = numero1 + numero2;
    return resultado;
}


int main(int argc, char *argv[]){
int resultado;

resultado = suma(2, 3);

printf(" %i\n", resultado);

return EXIT_SUCCESS;

}
