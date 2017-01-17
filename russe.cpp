#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

        //declaro las variables op1, op2, resultado
        //Pedir op1 y op2 al usuario.
        //Poner resultado = 0
        //
        //      Si op2 es impar
        //              Acumular op1 en resultado
        //      Divide op2 entre 2
        //      Duplica op1
        //      Repetir si op1 es mayor que 0
        int op1, o1,
            op2, o2,
            resultado = 0;

       printf("Operando 1: "); //Muestra al usuario por pantalla OPERANDO 1
       scanf(" %i", &op1); //hay que dejar espacio para que los quite, %i lo que hace es pedir un numero del teclado si esta en el scanf, Paso por valor es si te da el operador, Paso por referencia es enviar la localizacion de una variable y se ua con &.
       o1=op1;

       printf("Operando 2: "); //Muestra al usuario por pantalla OPERANDO 2
       scanf(" %i", &op2);
       o2 = op2;
       do {
           if (op2 % 2 == 1)
               resultado += op1;
           op2 >>= 1; //desplaza los bitz a la derecha los bits
           op1 <<= 1; //desplaza a la izquierda los bits

       } while (op2 > 0);

       printf("%i x %i = %i\n", o1, o2, resultado);
        return EXIT_SUCCESS;
}
