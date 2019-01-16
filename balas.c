#include <stdio.h>

int main(){
  printf("Recoge la municion soldado, cuantas balas tienes?\n");
  int balas;
  scanf("%i", &balas);

  switch (balas){
    case 0:
      printf("Recoge las municiones, cartucho vacio\n");
      break;

    case 1:
      printf("Recoge soldado, antes de que te quedes vacio\n");
      break;

    case 5:
      printf("Arma llena\n");
      break;

    default:
      printf("Numero de balas invalido\n");
      break;
  }
}
