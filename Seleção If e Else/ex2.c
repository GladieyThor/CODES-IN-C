/*
2) Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
 Obs.: Utilize o operador % que retorna o resto da divisão)
*/


#include <stdio.h>


void descobre_par(int numero){
    if(numero % 2 == 0){
        printf("\nO número %d é par!\n\n", numero);
    } else {
        printf("\nO número %d é impar!\n\n", numero);
    }//IF e ELSE PARA DESCOBRIR SE O NÚMERO É PAR;
    return;
}//FUNÇÃO PARA DESCOBRIR SE O NÚMERO DIGITADO É PAR OU ÍMPAR;


int main(){

    int numero;

    printf("\n\nDigite um número: ");
    scanf("%d", &numero);

    descobre_par(numero);

    return 0;
}//MAIN;