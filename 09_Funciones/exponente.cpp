#include <stdio.h>
#include <stdlib.h>

void leer(double *base,double *exponente)
{
printf("Pon tu numero base\n");
scanf(" %lf", base);
printf("Pon tu numero exponente\n");
scanf("%lf", exponente);
}
int main() {
double base,exponente;
leer(&base,&exponente);
printf("%.2lf y %.2lf \n", base, exponente);
    return EXIT_SUCCESS;
}
