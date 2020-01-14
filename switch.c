#include <stdio.h>
#include <stdlib.h>

int main()
{
  int option;
  printf("Escoge una opcion entre las 3\n");
  printf("(1)Adquieres una subcripcion Platzi y comienza a cambiar tu futuro profesional");
  printf("\n");
  printf("(2)Piensas que Star Wars IX fue una buena pelicula");
  printf("\n");
  printf("(3)Vuelves con tu ex. No lo hagas piensalo bien!!!");
  printf("\n");
  scanf("%i", &option); 
  switch (option)
  {
  case 1:
    printf("En un año conseguiste el trabajo de tus sueños ademas de que tus papas estan muy orgullosos de ti y con una novia muy bonita!!!\n");
    break;
  
  case 2:
    printf("Crees que fue una buena inversion pero no es asi :/ \n");
    break;

  case 3:
    printf("Todo el dinero que invertiste como para que lo gastes en ella, piensaslo bien vales mas que eso !!!\n");
    break;
  
  default:
    printf("Hay que dejar de se indeciso :P\n");
    break;
  }

  return 0;
}