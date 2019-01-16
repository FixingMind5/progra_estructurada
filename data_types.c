#include <stdio.h>
#include <stdbool.h> //Esta librería lee los booleanos

int main() {
  int healthPoints;
  float damage;
  char favouriteLetter; //CAMEL CASE!!!
  bool hasFun; //Esto no funcionaría sin #include <stdbool.h>
  double doubleA;

  //printf("Para imprimir un dato double se puede usar %f") sólo como ato
  printf("Ingresa el valor de tu vida\n");
  scanf("%i", &healthPoints);
  printf("El valor de tu vida es %i\n", healthPoints);
}
