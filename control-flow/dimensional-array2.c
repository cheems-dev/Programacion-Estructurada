#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rows = 3,
    columns = 4,
    arrayInteger[rows][columns];

  int account,
    firstAdd ,
    secondAdd ,
    thirdAdd,
    condition = 0;

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        printf("arrayInteger[%i][%i]: ", i, j);
        scanf("%i", &arrayInteger[i][j]);
      }
    }

    for (int i = 0; i < rows; i++)
    {
      account = 0;
      for (int j = 0; j < columns; j++)
      {
        account += arrayInteger[i][j];
      }
      if (account == 4)
      {
        firstAdd = account;
        ++condition;
      }
      else if (account == 10)
      {
        secondAdd = account;
        ++condition;
      }
      else if (account == 26)
      {
        thirdAdd = account;
        ++condition;
      }
    }
    
    if (condition == 3)
    {
      printf("Las condiciones del reto fueron cumplidos.\n");
    }
    

    printf("La suma de la primera fila es: %i \n", firstAdd);
    printf("La suma de la primera fila es: %i \n", secondAdd);
    printf("La suma de la primera fila es: %i \n", thirdAdd);
    
  
    return 0;
}