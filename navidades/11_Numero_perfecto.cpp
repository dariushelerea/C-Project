#include <stdio.h>
#include <stdlib.h>

int main() {

int Numero = 0,
    Resultado = 0,
    Divisor = 0;


printf("Dime tu numero\n");
scanf(" %i", &Numero);

for(Divisor = 1;Divisor < Numero ;Divisor ++){


   if(Numero % Divisor == 0){
       Resultado += Divisor;
   }
}


if(Resultado == Numero){
    printf("Es perfecto\n");

}
else {

    printf("no es perfecto\n");
}
    return EXIT_SUCCESS;
}
