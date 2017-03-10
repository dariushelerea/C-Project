#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define N 3
#define M 5

int main() {


    int A[N][N] = {{1,2,3},{5,6,3},{5,6,7}},
        B[N][N] = {{1,5,7},{7,5,3},{8,5,3}},
        C[N][N] ;

bzero(C, sizeof(C));

for(int f=0; f<N; f++)
    for(int c=0; c<N; c++)
        for (int k=0; k<N; k++)
            C[f][c] = A[f][k] * B[k][c];

//Limpiar matriz c de resultados.    
//  Recorrer todas las filas
//  Recorrer cada columna
//   cij = 0

//  Para cada valor de k
//   cij += aik * bkj
for (int f=0; f<N; f++){
for (int c=0; c<N; c++) {
    printf(" %7i", C[f][c]);
}
printf("\n");
}



    return EXIT_SUCCESS;
}
