#include <stdio.h>
float  prueba1=0;
float prueba2=0;
float tarea1=0;
float tarea2=0;
float tarea3=0; 
float laboratorios=0;
float prueba3=0;

int main(void) {
printf("Utiliza este programa para calcular tu nota minima\n");

printf("Ingrese la nota de la prueba 1\n");
scanf("%f", &prueba1);

printf("Ingrese la nota de la prueba 2\n");
scanf("%f", &prueba2);

printf("Ingrese la nota de la tarea 1\n");
scanf("%f", &tarea1);

printf("Ingrese la nota de la taera 2\n");
scanf("%f", &tarea2);

printf("Ingrese la nota de la tarea 3\n");
scanf("%f", &tarea3);

printf("Ingrese la nota de los laboratorios\n");
scanf("%f", &laboratorios);

prueba3 = (4.0 - 0.5 * (0.2 * tarea1 + 0.25 * tarea2 + 0.35 * tarea3 + 0.2 * laboratorios) - 0.5 * (0.2 * prueba1 + 0.35 * prueba2)) / (0.5 * 0.45);

    printf("Necesitas un %1f en la prueba 3 para pasar tu ramo\n", prueba3);

  return 0;
}