#include <stdio.h>
#include <stdlib.h>
#define DELTA 100
double f(double x){
    return x*x;
}
double derivada(double x){
    return (f(x+DELTA) -f(x)) / DELTA; 
}



int main() {

    return EXIT_SUCCESS;
}
