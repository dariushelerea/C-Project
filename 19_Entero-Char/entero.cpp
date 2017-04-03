#include <stdio.h>
#include <stdlib.h>

int cambioINT (char a){

    a = (int)(a-48);
    return a;
}
char cambioCHAR (int a){
    a = (char)(a+48);
    return a;

}
int main() {
char caracter;
int b=0,numero = 0;

    printf(" Elije 0 para Char ==> Int, elije cualquier otra cosa para Int ==> Char \n");
    scanf(" %i", &b);
    system("clear");
    if (b==0){
    printf("Dame un caracter y te doy ese caracter como entero\n");
    scanf(" %c", &caracter);
    printf(" Tu caracter %c ===> %i\n",caracter, cambioINT(caracter));
    }
    else {

        printf("Dame un entero y te doy ese entero como caracter\n");
        scanf(" %i", &numero);
        printf(" Tu entero %i ===> %c\n",numero, cambioCHAR(numero));

    }


    return EXIT_SUCCESS;
}
