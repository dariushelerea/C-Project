#include <stdio.h>
#include <stdlib.h>
#define DELTA 0.1
#define Y 1
#define X 0
double vx(double v, int s, double x){
 int cont=1;
  for(s;s>=0;s--){

   for (double i=DELTA; i<1; i+=DELTA){

       v+=x*DELTA;
       printf("--En el segundo %i,%lf, la velocidad de X es %lf \n",cont-1,i,v);
   }

   printf("-En el segundo %i la velocidad de X es %lf\n",cont,v);
   cont++;

  }
   return v;
}
double vy(double v, int s, double y){
 int cont=1;

//y=-10;
  for(s;s>=0;s--){

   for(double i=DELTA; i<1;i+=DELTA){
    if(v>0) {
     v+=y*DELTA;
     printf("--En el segundo %i,%lf, la velocidad de Y es %lf \n",cont-1,i,v);
    }

   }

  printf("-En el segundo %i la velocidad de Y es %lf\n",cont,v);
  cont ++;
  }
  return v;
}

int main() {
 double x = 0, y = 0,v[2]={0,-10};
 int s = 0;
  printf("Velocidad en X\n");
  scanf("%lf", &x);
  printf("Velocidad en Y\n");
  scanf("%lf", &y);
  printf("Segundo para comprobar\n");
  scanf("%i", &s);
  printf("Velocidad final x %lf\n", vx(x,s,v[X]));
  printf("Velocidad final y %lf\n", vy(y,s,v[Y]));


    return EXIT_SUCCESS;
}
