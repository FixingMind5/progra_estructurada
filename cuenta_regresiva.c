#include <stdio.h>

int main(){
  int upper_limit, bottom_limit;

  printf("Define el limite superior:\n");
  scanf("%i", &upper_limit);
  printf("Define el limite inferior:\n");
  scanf("%i", &bottom_limit);

  for(int i = upper_limit; i >= bottom_limit; i--)
    printf("Numero:_%i\n", i);
}
