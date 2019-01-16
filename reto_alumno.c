#include <stdio.h>

int main(){
  int calificacion;

  printf("Vamos a ver si el alumno esta aprobado o no\n");
  printf("Ingresa la calificacion del alumno\n");
  scanf("%i", &calificacion);

  if (calificacion <= 60){
    printf("Lo siento reprobaste :c\n");
  } else if (calificacion > 60 && calificacion <= 90){
    printf("Oh si, aprobasteee\n");
  } else {
    printf("Mas de 90, seguro eres alumno de platzi\n");
  }
}
