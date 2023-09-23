/*
3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322.
*/


#include <stdio.h>


int main(){

    int i = 1;

    while(i <= 322){
        if(i % 3 == 0){
            printf("\n%d", i);
        }//IF PARA SELECIONAR OS MÚLTIPLOS DE 3
        i = i + 1;
    }//ENQUANTO i FOR MENOR QUE 322, ENTÃO RODA O QUE ESTIVER DENTRO;
    

    return 0;
}//MAIN;