#include <stdio.h>

char nombre_alumno[20];
int calificacion;

void es_aprobado(int a){
  if (a >= 70)
    printf("El alumno %s esta aprobado\n", nombre_alumno);
  else
    printf("El alumno %s esta reprobado\n", nombre_alumno);
}

int main(){
  
  printf("Ingresa el nombre del alumno:\n");
  gets(nombre_alumno);
  printf("Ingresa la calificacion del alumno:\n");
  scanf(" %i", &calificacion);

  es_aprobado(calificacion);
    
}
