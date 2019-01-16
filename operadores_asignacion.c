#include <stdio.h>

int main(){
  int value;

  value = 11;
  value += 3;

  printf("El valor de nuestra variable es: %i\n", value);

  value++;

  printf("Value es igual a %i\n", value);

  ++value;
  printf("Value vale en este momento %i\n", value);
}
