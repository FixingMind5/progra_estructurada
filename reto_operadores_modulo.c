#include <stdio.h>

int main(){
  int x;

  printf("ingresa el valor de x:\n");
  scanf("%i", &x);

  x %= 5;
  x++;

  printf("Ahora el valor de x es: %i\n", x);
}
