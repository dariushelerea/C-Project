#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
int data[N] = { 1, 2, 3, 4, 5};
int *pi = data;
int *pf = data + N - 1;
int cambio;



for (int i = 0; i < (N/2); i ++){
cambio = *pi;
*pi = *pf ;
*pi++;
*pf = cambio;
*pf--;
}
printf (" %i, %i, %i, %i, %i \n", data[0], data[1], data[2], data[3], data[4]);

    return EXIT_SUCCESS;
}
