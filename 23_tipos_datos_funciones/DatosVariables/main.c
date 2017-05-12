#include <stdio.h>
#include <stdlib.h>

struct Tsuma {
    int op1;
    int op2;
};
struct Tresta {
    int op1;
    int op2;
    int op3;
};

int suma(void *s){
    struct Tsuma x = *((struct Tsuma *) s);
    return x.op1 + x.op2;


}
int resta(void *s){
    struct Tresta y = *((struct Tresta *) s);
    return y.op1 - y.op2 - y.op3;

}

int main() {

    struct Tsuma a = {30,23};
    struct Tresta b = {25,15,5};

    int (*p[2])(void *) = {&suma, &resta};

    printf("%i + %i = %i \n", a.op1, a.op2, (*p[0])(&a));
    printf("%i - %i -%i = %i \n", b.op1, b.op2,b.op3, (*p[1])(&b));

    

    return EXIT_SUCCESS;
}
