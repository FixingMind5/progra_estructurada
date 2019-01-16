#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
  float radio, altura, area, volumen;

  printf("Dame el valor de tu radio:\n");
  scanf(" %f", &radio);
  printf("Dame el valor de tu altura:\n");
  scanf(" %f", &altura);

  area = (2 * PI * radio) * (altura + radio);
  volumen = PI * (pow(radio, 2)) * altura;

  printf("Este es el valor de tu area:\t%f\n", area);
  printf("Este es el volumen de tu cilindro: \t%f\n", volumen);
}
