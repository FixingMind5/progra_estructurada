#include <stdio.h>

struct PersonalData {
  char first_name[20];
  char last_name[20];
  int age;
};

int main(){
  struct PersonalData me;

  FILE *archive;
  archive = fopen("Datos_personales.dat", "wb");

  if(archive != NULL){
    fflush(stdin);
    printf("Ingresa tu nombre\n");
    gets(me.first_name);
    printf("Ingresa tu apellido\n");
    gets(me.last_name);
    printf("Ingresa tu edad:\n");
    scanf("%i", &me.age);

    printf("Hola %s %s\n", me.first_name, me.last_name);
    printf("Tienes %i primaveras cumplidas\n", me.age);

    fwrite(&me, sizeof(me), 1, archive);
//fwrite(puntero_de_que, el_tamano_de_lo_que_escribes, cuantos_escribes, el_archivo_que_escribes);
    fclose(archive);
  }else{
    printf("El archivo no se creo\n");
  }
}
