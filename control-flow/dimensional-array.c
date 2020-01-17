#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size = 5;
  int arrayInteger[size];
  int value = 1;

  for (int i = 0; i < size; i++)
  {
    printf("Array[%i]: ", i + 1);
    scanf("%i: ", &arrayInteger[i]);
    value *= arrayInteger[i];
  }
  
  printf("El resultado es: %i", value);
  printf("\n");

  return 0;
}