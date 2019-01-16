#include <stdio.h>


float a_dolares(float a){
  a /= 19.02;

  return a;
}


int main(){

  float pesos;

  printf("Ingresa la cantidad de pesos a cambiar\n");
  scanf("%f", &pesos);

  float dolares = a_dolares(pesos);

  printf("En dolares seria un total de: %.3f\n", dolares);
}
