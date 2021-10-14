#include<stdio.h>



int  numero1;
int  numero2;
int  resultado=0;
int i=0;

int main (){

    printf("ingrese 2 numeros a multiplicar\n");
    printf("ingrese un valor\n");
    scanf("%d", &numero1);
    printf("ingrese el siguiente valor\n");
    scanf("%d", &numero2);

    for(int i=0; i<numero2; i++){

    resultado=resultado+numero1;
    }
    printf("el resultado es %d\n",resultado);

    return 0;
}