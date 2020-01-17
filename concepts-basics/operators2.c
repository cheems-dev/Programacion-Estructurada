#include <stdio.h>
#include <stdlib.h>

int main()
{   
  int integer;

  printf("Ingresa un numero entero");

  scanf("%i", &integer);

  integer %= 5;

  printf("El resultado es: %i", ++integer);
  printf("\n");

  return 0;
}