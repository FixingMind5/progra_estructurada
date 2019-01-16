#include <stdio.h>
#include "operaciones.h"

int main(){
  int opcion;
  float valueA, valueB, res;
  char next = 'y';
  while(next == 'y'){
    printf("Hola, puedo hacer las operaciones siguientes:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Digita la opcion deseada\n");
    scanf("%i", &opcion);

    switch(opcion){
      case 1:
      printf("SUMA\n");
      printf("Primer valor: ");
      scanf(" %f", &valueA);
      printf("Segundo valor: ");
      scanf(" %f", &valueB);
      res = adittion(valueA, valueB);
      printf("Resultado: %.2f\n", res);
      break;

      case 2:
      printf("RESTA\n");
      printf("Primer valor: ");
      scanf(" %f", &valueA);
      printf("Segundo valor: ");
      scanf(" %f", &valueB);
      res = substraction(valueA, valueB);
      printf("Resultado %.2f\n", res);
      break;

      case 3:
      printf("MULTIPLICACION\n");
      printf("Primer valor: ");
      scanf(" %f", &valueA);
      printf("Segundo valor: ");
      scanf(" %f", &valueB);
      res = multip(valueA, valueB);
      printf("Resultado: %.2f\n", res);
      break;

      case 4:
      printf("DIVISION\n");
      printf("Primer valor: ");
      scanf(" %f", &valueA);
      printf("Segundo valor: ");
      scanf(" %f", &valueB);
      res = division(valueA, valueB);
      printf("Resultado: %.2f\n", res);
      break;

      default:
      printf("Opcion no valida\n");
      break;
    }
    printf("Deseas continuar y/n?:\n");
    scanf(" %c", &next);
  }
}
