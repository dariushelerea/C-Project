#include <stdio.h>
#include <stdlib.h>

int main() {

int Numero = 0,
    Menor,
    Contador = 0;

for(Contador = 0;Contador < 10;Contador ++){


    printf("Dime tus numeros\n");
    scanf(" %i", &Numero);

    if(Numero < Menor){
        Menor = Numero;

    }
}
printf(" El numero menor es: %i\n",Menor);


    return EXIT_SUCCESS;
}
