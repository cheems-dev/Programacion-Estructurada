#include <stdio.h>
#include <stdlib.h>

int main()
{   
  int integer;

  printf("Ingresa un numero entero: \n");
  scanf("%i", &integer);

  if (integer >= 0 && integer <=10)
  {
    if (integer == 5)
    {
      printf("Adivinaste\n");
    }
    else
    {
      printf("Ese no es, perdiste !!!\n");
    }
  }
  else
  {
    printf("Estas muy de adivinar el numero\n");
  }
  
  return 0;
}