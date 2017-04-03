#ifndef __NOTAS_H__
#define __NOTAS_H__

#ifdef __cplusplus
extern "C" {
#endif


int cambioINT (char a){

    a = (int)(a-48);
    return a;
  }
char cambioCHAR (int a){
     a = (char)(a+48);
      return a;
}

#ifdef __cplusplus
}
#endif


#endif
