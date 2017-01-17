#include <stdio.h>
#include <stdlib.h>

int main() {
int nombre[] = {68,97,114,121,0};
int contador = 0;

for(contador=0;contador<sizeof(nombre)/sizeof(int);contador++){

   printf(" %c", nombre[contador]);

}
printf(" \n");

    return EXIT_SUCCESS;
}
