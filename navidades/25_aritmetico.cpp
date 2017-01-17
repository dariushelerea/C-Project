#include <stdio.h>
#include <stdlib.h>

int main() {

int Lista = 0, fila = 1, columna = 0;

printf ("Introduzca el numero de lista\n");
scanf (" %i",&Lista);

while(Lista > 17){
Lista -=17;
fila++;

}
columna = Lista;

printf("La fila es %i y la columna %i\n",fila,columna);


    return EXIT_SUCCESS;
}
