#include <stdio.h>
#include <stdlib.h>

#include "general.h"

int main(int argc, char *argv[]){
int a=0,b=0,i;
printf(" Dime dumeros para hacer sus operaciones basicas\n");
scanf("%i", &a);
scanf("%i", &b);
   //   struct TOp op = new_suma(a,b);
    struct TOp op[4];

      op[0] = new_suma(a, b );
      op[1] = new_resta(a, b );
      op[2] = new_multi(a, b );
      op[3] = new_divi(a, b );



    for (i=0; i<4; i++)
    printf ( " %2i %c %2i = %2i\n",
    op[i].op1,op[i].sym, op[i].op2,
    (*op[i].operacion)(op[i].op1, op[i].op2)  ); 

    //printf("%i + %i = %i \n", op.op1, op.op2, (*op.operacion)(op.op1, op.op2));




    return EXIT_SUCCESS;
}
