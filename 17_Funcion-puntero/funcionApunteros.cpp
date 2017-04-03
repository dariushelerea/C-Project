#include <stdio.h>
#include <stdlib.h>


double suma(double op1, double op2){return op1 + op2;}
double rest(double op1, double op2){return op1 - op2;}

int main() {

double a= 2, b = 3;

double (*p)(double,double);
char r = '\0';
p = suma;

printf("Restar (s/n) \b");
scanf(" %c", &r);

if(r == 's'){
    p = rest;
printf("%.2lf - %.2lf = %.2lf \n", a, b, p(a, b));
    }
else{
printf("%.2lf + %.2lf = %.2lf \n", a, b, p(a, b));
}
    return EXIT_SUCCESS;
}
