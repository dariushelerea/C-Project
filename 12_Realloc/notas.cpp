#include <stdio.h>
#include <stdlib.h>

double medias(int alumno, double *notas){
double media = 0;

for (int i =0; i<alumno;i++)
    media += notas[i];

return media /= alumno;
}
int main() {

double *notas = NULL;
double numnota;
int alumnos;


do {

   printf("Introduzca una nota, fializar con un numero negativo\n");
   scanf(" %lf", &numnota);
   if (numnota >= 0){

   notas = (double *) realloc(notas,++ alumnos * sizeof(double));
   notas[alumnos -1] = numnota;
   }
}while(numnota >= 0);



printf(" La media es %lf\n", medias(alumnos,notas));

free(notas);
    return EXIT_SUCCESS;
}
