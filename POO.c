#include <stdio.h>

struct PersonalData {
  char first_name[20];
  char last_name[20];
  int age;
};

int main(){
  struct PersonalData me;

  printf("Vamos a leer los datos:\n");
  printf("Digita tu nombre:\n");
  gets(me.first_name);
  printf("Digita tu primer apellido\n");
  gets(me.last_name);
  printf("Finalmente digita tu edad\n");
  scanf("%i", &me.age);

  printf("Hola %s\n", me.first_name);
  printf("Tu apellido es %s\n", me.last_name);
  printf("Tu edad es %i\nAdios (: \n", me.age);
}
