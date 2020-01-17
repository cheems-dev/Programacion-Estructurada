#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rows = 5,
   columns = 6,
   add;
  int integers[rows][columns];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      //Cumple la funcion cuando no sea columna  -> 6 y fila -> 5 
      if(j != 5 && i !=4)
      {
        printf("Integers[%i][%i]: ", i, j);
        scanf("%i", &integers[i][j]);
      }
      else
      {
        integers[i][j] = 0;
      }
    }
  }

  // Añadimos la suma de las otras filas a la fila -> 5
  for (int i = 0; i < rows; i++)
  {
    add = 0;
    for (int j = 0; j < columns; j++)
    {
      add += integers[i][j];
    }

    integers[4][i] = add;
  }

  // Imprimimos el resultado de la nueva matriz
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%i ", integers[i][j]);
    }
    printf("\n");
  }

  // Imprimimos la suma de las filas 
  for (int i = 0; i < rows; i++)
  {
    add = 0;
    for (int j = 0; j < columns; j++)
    {
      add += integers[i][j];
    }
    printf("Suma total de la fila %i : %i\n", i , add);
  }

  return 0;
}