#include <stdio.h>
#include <string.h>

int main(){
  char cadena[10];
  int size;

  printf("Ingresa tu nombre aqui:\n");
  gets(cadena);

  size = strlen(cadena);
  char temp[size];

  printf("Tu nombre al reves es:\n");
  for(int i = size; i >= 0; i--){
    temp[i - size] = cadena[i];
    printf("%c", temp[i - size]);
  }
} 
