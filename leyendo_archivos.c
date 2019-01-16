#include <stdio.h>

struct PersonalData{
  char first_name[20];
  char last_name[20];
  int age;
};

int main(){
  struct PersonalData me;

  FILE *archive;
  archive = fopen("Datos_personales.dat", "rb");

  if(archive != NULL){
    fread(&me, sizeof(me), 1, archive);
    printf("Hola %s %s\n", me.first_name, me.last_name);
    printf("Tienes %i primaveras cumplidas\n", me.age);
    fclose(archive);
  }else{
    printf("El archivo no se abre :(\n");
  }
}
