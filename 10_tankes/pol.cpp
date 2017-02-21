#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double pol[20], double grado, double x){
    double a = 0;

    for(int i=0;i<=grado;i++)
        a += pow(x,i)*pol[i];


    return a;
}

int main() {
    double a[20], grado,x;


    printf("indicame el grado\n");
    scanf("%lf", &grado);

    printf("Elije la x\n");
    scanf("%lf", &x);

    for(int i=0; i<=grado;i++){
        printf("coeficiente %i: ", i);
        scanf("%lf",&a[i]);
    }

    printf("%.lf\n", f(a, grado, x));

    return EXIT_SUCCESS;
}
