#include <stdio.h>

int main(){

  int bi_arr[5][6];
  int calificacion, sume = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 6; j++){
      printf("Ingresa una calificacion mayor o igual a 60:\n");
      printf("Posicion (%i, %i) ", i, j);
      scanf(" %i", &calificacion);
      bi_arr[i][j] = calificacion;
    }
  }

  for(int l = 0; l < 5; l++){
    for(int k = 0; k < 6; k++){
      sume += bi_arr[l][k];
    }
    bi_arr[l][5] = sume / 5;
    sume = 0;
  }

  for(int  m = 0; m < 5; m++){
    for(int n = 0; n < 6; n++){
      printf("Estos son tus valores. POS (%i, %i): %i\n", m, n, bi_arr[m][n]);
    }
    printf("Este es tu promedio de la fila %i: %i\n", m, bi_arr[m][5]);
  }
}
