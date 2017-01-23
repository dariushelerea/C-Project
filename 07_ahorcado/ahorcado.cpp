
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 50
#define M 20
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)
const char *palabra[] = {"callo",
                         "cara",
                         "ancla",
                         "sombra",
                         "cazador",
                         "samurai",
                         "lima",
                         "homo",
                         "topo",
                         "zapo",
                         "router",
                         "raton",
                         "entrenador",
                         "roble",
                         "amar",
                         "timar",
                         "adorar",
                         "tirar",
                         "anular",
                         "enfrentar",
                         "enorme",
                         "enunciar",
                         "tirar",
                         "destrozar",
                         NULL};


int main () {

char adivinado[N], errores[M];
const char *elegida;
char letra = 0, aleatorio = 0, Letras = 0, Errores = 0;
 srand(time(NULL));
 aleatorio = rand() % CANTIDAD(palabra);
 elegida = palabra[aleatorio];

  bzero(adivinado,N);
  bzero(errores,M);
  Letras = strlen(elegida);

for(int cont=0; cont<Letras; cont++)

  adivinado[cont]='-';
  printf(" %s \n", adivinado);

while(Letras > 0 && Errores < 10){

  printf("Prueba una letra: ");
  scanf(" %c", &letra);

int Letras2 = Letras;

for(int cont=0; cont<strlen(elegida); cont++){

if(letra == elegida[cont]){
 adivinado[cont] = letra;
 Letras --;
}
}

if(Letras2 == Letras)
 errores[Errores++] = letra;

  printf(" %s \n", adivinado);
  printf(" Numero de fallos: %i \n Te quedan: %i fallos! \n", Errores, 10-Errores);
if(Errores > 0)

  printf(" Letras falladas: %s \n",errores);
}
if(Letras == 0)

  printf(" Has adivinado la respuesta es %s \n",elegida);

else if(Errores == 10)

  printf("Has perdido la respuesta es %s\n",elegida);



        return EXIT_SUCCESS;
}













 
