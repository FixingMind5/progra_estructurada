#include <stdio.h>
#define N 164
#define O 162

int main(){
  int s;

  printf("Digite el tama%co del arreglo:\n", N);
  scanf(" %i", &s);

  int arr[s];
  int max, value;
  
  for(int i = 0; i < s; i++){
    printf("Ingrese posici%cn %i: \n", O, i);
    scanf(" %i", &value);
    arr[i] = value;

    if (max < arr[i])
      max = arr[i];
  }
  
  printf("El numero mayor es: %i\n", max);
}
