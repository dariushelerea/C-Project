#include <stdio.h>
#include <stdlib.h>

int main() {

int num1 = 0,
    num2 = 0,
    num3 = 0;

printf ("Introduce tu primer numero\n");
scanf (" %i",&num1);

printf ("Introduce tu segundo numero\n");
scanf (" %i",&num2);

num3 = num1;
num1 = num2;
num2 = num3;

printf("Ahora tu primer numero es %i y tu segundo numero es %i\n", num1, num2);

    return EXIT_SUCCESS;
}
