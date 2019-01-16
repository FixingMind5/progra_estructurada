#include <stdio.h>

int main(){
  printf("Te encuentras en un cuarto oscuro donde no puedes regresar\n");
  printf("Pero hay tres puertas por donde vayas a salir, tienes tres opciones:\n");
  printf("(Recuerda que tu familia esta del otro lado y van a morir)\n");
  int opcion;
  printf("PUERTA 1: 100 ninjas mortiferos asesinos\n");
  printf("PUERTA 2: Un leon que no ha comido en 4 meses\n");
  printf("PUERTA 3: Un estanque con peces asesinos\n");
  printf("Cual puerta elijes?\n");
  scanf("%i", &opcion);

  switch (opcion){
    case 1:
      printf("Moriste, los ninjas te asesinaron\n");
      break;

    case 2:
      printf("Lograste salir, el leon no ha comido en tanto tiempo que ");
      printf("seguramente ya murio, ya puedes ver a tu familia\n");
      break;

    case 3:
      printf("MORISTE, Los peces te comieron\n");
      break;

    default:
      printf("Claro, siempre te puedes quedar\n");
      break;
  }
}
