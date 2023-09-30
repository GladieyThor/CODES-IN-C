/*
2) Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
programa deverá parar de solicitar valores, exibir quantos valores
válidos foram digitados e finalizar.
*/


#include <stdio.h>


int main(){

    int valor;
    int contador = 0;

    do{
        printf("\nDigite um valor entre 500 a 1000: ");
        setbuf(stdin,NULL);
        scanf("%d", &valor);

        if(valor < 500 || valor > 1000){
            break;
        }//IF PARA CASO O USUÁRIO DIGITE UM VALOR INVÁLIDO, O PROGRAMA SAIA DO DO WHILE;

        contador++;
    }while(valor >= 500 && valor <= 1000);

    printf("\nQuantidade de números digitados corretamente = %d\n", contador);

    return 0;
}//MAIN;