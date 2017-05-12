#include <stdio.h>
#include <stdlib.h>


void suma(void *op1, void *op2){

    int a = *((int *) op1);
    int b = *((int *) op2);

    printf("%i + %i = %i\n",a,b,a+b);

}
void inicial( void *l1,void  *l2){

    char a = *((char *) l1);
    char b = *((char *) l2);
   printf("Hola soy %c, pero llamame %c\n", a, b) 
     ;}

int main() {
int a = 7, b = 9;
char s = 'A', f ='B';
void (*p)(void *, void *)  = &suma;
(*p)(&a,&b);
p = &inicial;
(*p)(&s,&f);



//(*p)(int, int ) = &suma; 


    return EXIT_SUCCESS;
}
