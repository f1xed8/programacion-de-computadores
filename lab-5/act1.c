#include <stadio.h>

int main(){
int numero1 = 0;
int numero2 = 0;
int resultado = 0;

printf("ingrese el primer valor deseado:\n");
scanf("%t") , &numero1);
printf("Ingrese el segundo valor deseado:\n")
scanf("%t" , &numero2);
resultado = numero1 + numero2;

printf("El resultado de la suma de entre los 2 valores que son %t y %t es: %t\n" , numero1, numero2, resultado);

return 0;