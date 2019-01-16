#include <stdio.h>

int n_factorial(int a){
  if (a > 1){
    return a *  n_factorial(a - 1); //aqui se esta llamando a si misma
  } else {
    printf("Terminamos\n");//aqui termina el loop porque a = 1
    return 1;
  }
}

int main(){
  printf("Ingrese el numero del cual quiere su recursividad\n");
  int n;
  scanf("%i", &n); //escanea el valor y lo almacena en "n"

  int factorial = n_factorial(n); //aqui entra a la funcion y empiezan los loops

  printf("El resultado es: %i\n", factorial); //resultado de la funcion
}
