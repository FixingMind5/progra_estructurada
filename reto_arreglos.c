#include <stdio.h>

int main(){
  int arr[5] = {1, 45, 2, 33, 6};
  int multiplicacion = 1;

  for(int i = 0; i < 5; i++){
    printf("Posicion [%i]: %i\n", i, arr[i]);
    multiplicacion *= arr[i];
  }

  printf("Multiplicacion: %i\n", multiplicacion);
}
