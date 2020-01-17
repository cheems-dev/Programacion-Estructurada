#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size, higher = 0;
  printf("Tamaño al array: ");
  scanf("%i", &size);

  int integers[size];

  for (int i = 0; i < size; i++)
  {
    printf("Integers[%i] ", i);
    scanf("%i", &integers[i]);
    // Hacemos validacion para hallar el numero mayor
    if (higher < integers[i])
    {
      higher = integers[i];
    }
  }

  printf("El numero mas alto es: %i \n", higher);

  return 0;
}