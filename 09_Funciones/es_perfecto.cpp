#include <stdio.h>
#include <stdlib.h>


bool es_primo(int n){
   int res = 0;
   for(int i=1;i<n;i++){

    
   if(n % i == 0){
       res += i;
   }
   }
   if (res == n){
   return 1;
   }
   else{
   return 0;   
 }



    }
int main() {
int num;
    printf(" Numero \n");
    scanf("%i", &num);    
    printf(" %i  %s perfecto.\n", num, es_primo(num)? "es" : "no es ");

    return EXIT_SUCCESS;
}
