#include <stdio.h>

char contador[3][3];

int fila;

int columna;

bool ganador = false;

int turnos = 0;

int main(){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            contador[i][j] = '-';
        }
    }



    printf("%c  |  %c  |  %c\n", contador[0][0], contador[0][1], contador[0][2]);
    printf("----------------\n");

    printf("%c  |  %c  |  %c\n", contador[1][0], contador[1][1], contador[1][2]);
    printf("----------------\n");

    printf("%c  |  %c  |  %c\n", contador[2][0], contador[2][1], contador[2][2]);




    while(!vencedor && turnos < 9){
        
        if(turnos%2 == 0){

            printf("Participante X -> Ingrese su movimiento de forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            contador[fila - 1][columna - 1] = 'X'; 
        } else {
            printf("Participante O -> Ingrese su movimiento de forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            contador[fila - 1][columna - 1] = 'O'; 
        }


        printf("%c  |  %c  |  %c\n", contador[0][0], contador[0][1], contador[0][2]);
        printf("----------------\n");

        printf("%c  |  %c  |  %c\n", contador[1][0], contador[1][1], contador[1][2]);
        printf("----------------\n");
        
        printf("%c  |  %c  |  %c\n", contador[2][0], contador[2][1], contador[2][2]);




        if((contador[0][0] == contador[0][1]) && (contador[0][1] == contador[0][2]) && (contador[0][0] != '-')){
            printf("Usted ha ganado, felicidades.");
            ganador = true;


        }
        if((contador[1][0] == contador[1][1]) && (contador[1][1] == contador[1][2]) && (contador[1][0] != '-')){
            printf("Usted ha ganado, felicidades.");
            ganador = true;
        }


        if((contador[2][0] == contador[2][1]) && (contador[2][1] == contador[2][2]) && (contador[2][0] != '-')){
            printf("Usted ha ganado, felicidades.");
            ganador = true;
        }



        if((contador[0][0] == contador[1][0]) && (contador[1][0] == contador[2][0]) && (contador[0][0] != '-')){
            printf("Usted ha ganado, felicidades.");
            ganador = true;
        }

        turnos++;
    }

    return 0;
}