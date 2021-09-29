#include <stdio.h>

int main (){

int radio= 0;
float perimetro=0;
float area=0;
const float PI = 3.14;

printf( "A continuacion ingrese el radio de la circunferencia :\n");
scanf("%i", &radio);

printf("Se dara el paso a calcular el area y perimetro");

area = (radio * radio) * PI;
perimetro = (2*PI*radio);

printf(" El area de su circunferencia es: %f" , area);
printf( " y el perimetro de su circunferencia es: %f", perimetro);

return 0; 
}