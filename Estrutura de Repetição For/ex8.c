/*
8) Desenvolva um programa que receba um numero
tamanho e exiba um quadrado de tamanho tamanho
utilizando o carácter #
Exemplo:
Digite o tamanho: 5
# # # # #
# # # # #
# # # # #
# # # # #
# # # # #
*/


#include <stdio.h>
#include <stdlib.h>


void quadrado_exibido(int numero){

    for(int i = 0; i < numero; i++){
        for(int j = 0; j < numero; j++){
            printf("# ");
        }
        printf("\n");
    }
    
    return;
}//FUNÇÃO PARA EXIBIR  O QUADRADO;


int main(){

    int numero;

    printf("\n\nDigite um número para ter o cubo realizado: ");
    setbuf(stdin,NULL);
    scanf("%d", &numero);

    quadrado_exibido(numero);

    return 0;
}//MAIN;