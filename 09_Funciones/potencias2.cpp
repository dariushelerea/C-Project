#include <stdio.h>
#include <stdlib.h>
#define N 20

int potencia(int op1){

    return op1 * op1;
}

int main() {
int a;
//while(a = getchar() - '0')
scanf("%i", &a);
printf(" la potencia de %i, es %i\n", a, potencia(a));


    return EXIT_SUCCESS;
}
