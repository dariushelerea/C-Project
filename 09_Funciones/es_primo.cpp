#include <stdio.h>
#include <stdlib.h>


bool es_primo(int n){
int a = 0;
   for(int i=2;i<n;i++){ 
       if (n % i == 0){

        a++;

       }
   }
       if (a == 0)
       return true;
       
       
       
       else
       return false;




    }
int main() {
int num;
    printf(" Numero \n");
    scanf("%i", &num);    
    printf(" %i  %s primo.\n", num, es_primo(7)? "es" : "no es ");

    return EXIT_SUCCESS;
}
