#include <stdio.h>

int main(){

    int numero;
    int suma;

    printf("Hola esta es la sumatoria de numeros positivos\n\n");
    
    while(numero>=0){
    
    printf("Ingrese otro valor a evaluar\n");
    scanf("%d", &numero);
    
    suma=suma+numero;
    }

  printf("El resultado es: %d \n",suma);

return 0;
