#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Calcular el area de un cilindro

    float PI = 3.14,
          altura,
          radio,
          area,
          volumen;

    printf("Ingrese el radio del cilindro\n");
    scanf("%f", &radio);
    printf("Ingrese el altura del cilindro\n");
    scanf("%f", &altura);

    area = 2 * PI * radio * (radio + altura);

    printf("El area total del cilindro es %f", area);
    printf("\n");

    // Calcular el volumen de un cilindro

    volumen = PI * radio * radio * altura;

    printf("El volumen total del cilindro es %f", area);
    printf("\n");

    
    return 0;
}