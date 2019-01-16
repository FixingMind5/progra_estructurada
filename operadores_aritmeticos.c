#include <stdio.h>

int main(){
  int r_sum, r_mod;
  float r_rest, r_div, r_mult;

  r_sum = 3 + 4;
  r_mult = 3 * 4;
  r_rest = 45 - 54;
  r_div = 3.0 / 4.0;
  r_mod = 7 % 3;

  printf("Resultado de la suma: %i\n", r_sum);
  printf("Resultado de la resta: %f\n", r_rest);
  printf("Resultado de la division: %f\n", r_div);
  printf("Resultado de la multiplicacion: %f\n", r_mult);
  printf("Resultado del modulo %i\n", r_mod);
}
