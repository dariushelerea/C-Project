#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define N 4
#define M 3
#define K 2

int main() {


    int A[M][K] = {{1,2},{5,6},{7,5}},
        B[K][N] = {{1,5,7,5},{4,3,2,5}},
        C[M][N] ;

bzero(C, sizeof(C));

for(int f=0; f<M; f++)
    for(int c=0; c<N; c++)
        for (int k=0; k<K; k++)
            C[f][c] = A[f][k] * B[k][c];

//Limpiar matriz c de resultados.    
//  Recorrer todas las filas
//  Recorrer cada columna
//   cij = 0

//  Para cada valor de k
//   cij += aik * bkj
for (int f=0; f<M; f++){
for (int c=0; c<N; c++) {
    printf(" %7i", C[f][c]);
}
printf("\n");
}



    return EXIT_SUCCESS;
}
