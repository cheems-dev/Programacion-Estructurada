#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[50];
  char aux, lengt_temp;
  int size;

  printf("Ingrese una palabra: ");
  fgets(name, sizeof name, stdin);

  printf("Palabra ingresada: ");
  puts(name);

  size = strlen(name);
  lengt_temp = size;
  
  if (size %2 ==  0)
  {
    size /= 2;
  }
  else
  {
    --size;
    size /= 2;
  }
  
  printf("El tamaño del arreglo de caracteres es %i.\n", --lengt_temp);

  for (int i = 0; i < size; i++)
  {
    aux = name[i];
    name[i] = name[--lengt_temp];
    name[lengt_temp] = aux;
  }

  printf("Palabra invertida: ");
  puts(name);
    
  return 0;
}