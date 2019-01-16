#include <stdio.h>

int potencia(int a, int b){
  int r = 1;

  for(int i = 0; i < b; i++)
    r *= a;

  return r;
}

int main(){

  int result = potencia(2, 3);

  printf("%i\n", result);
}
