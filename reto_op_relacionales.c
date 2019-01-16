#include <stdio.h>

int main(){
  int x, y;
  printf("Dame dos numeros para decirte cual de los dos es el menor\n");
  
  printf("Primer numero: ");
  scanf("%i", &x);
  printf("Segundo numero: ");
  scanf("%i", &y);

  if (x < y){
    printf("Este es el numero menor: %i\n", x);
  } else if (x > y) {
    printf("Este es el numero menor: %i\n", y);
  } else {
    printf("Seguramente son iguales\n");
  }
  
}
