#include <stdio.h>
//Cambiando el valor de las variables

int main(){
  int x, y, temp1;

  printf("Dame el valor de x\n");
  scanf(" %i", &x);
  printf("Dame el valor de tu y\n");
  scanf(" %i", &y);

  //cambio
  temp1 = x;
  x = y;
  y = temp1;

  printf("Ahora tus nuevos valores son x: %i\n y: %i\n", x, y);
}

