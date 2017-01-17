#include <stdio.h>
#include <stdlib.h>
//#define si 1
//#define no 0
int main() {

int azul, rojo, amarillo;

printf("¿Que color ves? Pulsa 1 para si y 0 para no\n");
printf("1.- ¿Ves rojo? \n");
scanf("%i", &rojo);

printf("2.- ¿Ves azul?\n");
scanf("%i", &azul);

printf("3.- ¿Ves amarillo?\n");
scanf("%i", &amarillo);

if (rojo == 1 && azul == 1 && amarillo == 1)
{
printf("Estas viendo el BLANCO\n");
}
if (rojo == 1 && azul == 0 && amarillo == 0)
{
printf("Estas viendo el color ROJO\n");
}
if (rojo == 1 && azul == 1 && amarillo == 0)
{
printf("Estas viendo el color MORADO\n");
}
if (rojo == 1 && azul == 0 && amarillo == 1)
{
    printf("Estas viendo el color NARANJA\n");
}
if (rojo == 0 && azul == 1 && amarillo == 0)
{
    printf("Estas viendo el color AZUL\n");
}
if (rojo == 0 && azul == 1 && amarillo == 1)
{
    printf("Estas viendo el color VERDE\n");
}
if (rojo == 0 && azul == 0 && amarillo == 1)
{
    printf("Estas viendo el color AMARILLO\n");
}
if (rojo == 0 && azul == 0 && amarillo == 0)
{
    printf("Estas viendo el color NEGRO\n");
}





        return EXIT_SUCCESS;

      }
