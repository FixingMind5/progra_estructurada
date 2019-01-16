#include <stdio.h>

int main(){
  FILE *archive;

  archive = fopen("prueba.dat", "w");

  if (archive != NULL){
    printf("El archivo se ha creado exitosamente\n");
    fclose(archive);
  }else{
    printf("El archivo no se ha creado :(\n");
  }
  
}
