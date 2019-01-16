#include <stdio.h>

int main(){
  int v = 0, j = 1, z = 0;

  for(int i = 0; i <= 9; i++){
    z = v  + j;
    printf("Valor -> %i\n", z);
    v = j;
    j = z;
  }
}
