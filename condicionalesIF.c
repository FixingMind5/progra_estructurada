#include <stdio.h>

int main(){
  float a, b, c;

  a = b = 100;
  printf("primera condicion\n");

  if (a == b) {
    printf("Son iguales xdddd\n");
    c = a + b;
    printf("El valor de c es: %f\n", c);
  } else if (a != b) {
    printf("A qpd, no son iguales\n");
  } else {
    printf("No, yo no se que este pasando\n");
  }
}
