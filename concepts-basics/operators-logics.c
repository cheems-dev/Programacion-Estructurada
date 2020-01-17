#include <stdio.h>
#include <stdlib.h>

int main()
{   
  int noteStudent;

  printf("Ingrese la nota del examen: \n");
  scanf("%i", &noteStudent);

  if (noteStudent <= 100)
  {
    if (noteStudent < 60)
    {
      printf("La culpa no era mia ni las preguntas que venian en el examen.");
      printf("\n");
      printf("El reprobado eres tu xD!!! ");
      printf("\n");
    }
    else if(noteStudent < 90)
    {
      printf("Aprobado");
      printf("\n");
    }
    else
    {
      printf("Aprobaste el año :D !!! ");
      printf("\n");
    }
  }
  else
  {
    printf("Recuerde que las notas van del 0 al 100!! ");
    printf("\n");
  }
  
  return 0;
}
