#include <stdio.h>
#include <stdlib.h>

int main() {

int Numero = 0,
    Mayor = 0,
    Contador = 0;

for(Contador = 0;Contador < 10;Contador ++){


    printf("Dime tus numeros\n");
    scanf(" %i", &Numero);

    if(Numero > Mayor){
        Mayor = Numero;

    }
}
printf(" El numero mayor es: %i\n",Mayor);


    return EXIT_SUCCESS;
}
