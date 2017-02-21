#include <stdio.h>
#include <stdlib.h>
double xcuadrado(double x){
double distancia = 0.11111155, a,b;
a = x * x;
b = a + distancia ;

return b - a / distancia; 
}
int main() {
double a = 0;
printf(" dime un dumero\n");
scanf(" %lf", &a);

printf("%lf numero\n", xcuadrado(a));

    return EXIT_SUCCESS;
}
