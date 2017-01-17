#include <stdio.h>
#include <stdlib.h>

int main() {

int Numero = 0,
    Media = 0,
    Contador = 0,
    Resultado =0;

for(Contador = 0;Contador < 10;Contador ++){


    printf("Dime tus numeros\n");
    scanf(" %i", &Numero);

        Media += Numero;


}
Resultado = Media / Contador;
printf(" Tu media es: %i\n",Resultado);


    return EXIT_SUCCESS;
}
