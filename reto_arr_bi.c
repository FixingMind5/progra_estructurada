#include <stdio.h>

int main(){
  int bi_arr[4][5] = { {3, 4, 1, -1, 4},
                       {5, 3, 5, 6, 23},
                       {7, 10, 3, 4, -12},
                       {3, 2, 11, 12, 13} };
  int sume;

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 5; j++){
      printf("Posicion (%i, %i): %i\n", i, j, bi_arr[i][j]);
      sume += bi_arr[i][j];
    }
  }

  printf("La suma es: %i\n", sume);
}
