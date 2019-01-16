#include <stdio.h>

int main(){
  int variable_escondida = 5, variable_usuario;

  printf("Adivina el valor de la variable escondida\n");
  printf("Ingresa tu valor\n");
  scanf("%i", &variable_usuario);

  if (variable_usuario == variable_escondida){
    printf("GANASTEEE!!!!\n");
  } else {
    printf("PERDISTE :C\n");
  }
}
