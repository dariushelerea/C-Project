
#include "general.h"

int suma(int op1, int  op2){return op1 + op2;}
int resta(int op1, int op2){return op1 - op2;}
int multi(int op1, int op2){return op1 * op2;}
int divi(int op1, int op2){return op1 / op2;}


struct TOp new_op(int op1, int op2,char sym, int (*pf)(int, int) ) {
    struct TOp gnu;
    gnu.op1 = op1;
    gnu.op2 = op2;
    gnu.sym = sym;
    gnu.operacion = pf;

    return gnu;
}
struct TOp new_suma(int op1, int op2) { return new_op(op1, op2, '+', &suma);}
struct TOp new_resta(int op1, int op2) { return new_op(op1, op2, '-', &resta);}
struct TOp new_multi(int op1, int op2) { return new_op(op1, op2, '*', &multi);}
struct TOp new_divi(int op1, int op2) { return new_op(op1, op2, '/', &divi);}

