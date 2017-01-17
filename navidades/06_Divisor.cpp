#include <stdio.h>
#include <stdlib.h>

int main() {

int numero = 0,
    division = 0;

printf ("Introduce tu numero\n");
scanf (" %i",&numero);

division = numero%2;
if(division==0){

    printf("Tu numero tiene divisores\n");

}
else{
division = numero%3;
if(division==0){

    printf("Tu numero tiene divisores\n");
}
else{
division = numero%5;
if(division==0){

    printf("Tu numero tiene divisores\n");

}
else{

    printf("Tu numero no tiene divisores\n");

}
}
}

    return EXIT_SUCCESS;
}
