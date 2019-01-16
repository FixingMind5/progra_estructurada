#include <stdio.h>

int main(){
  float fahrenheit, celcius;

  printf("Dame tus grados fahrenheit:\n");
  scanf("%f", &fahrenheit);

  celcius = (((fahrenheit - 32) *  5) / 9 );

  printf("Estos son tus grados celcius: %.2f\n", celcius);
}
