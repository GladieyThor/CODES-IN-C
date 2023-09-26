/*
7) Faça um programa que calcule o fatorial de um número a ser
digitado.
*/


#include <stdio.h>


int fatorial(int numero){

    int fat = 1;

    for(int i = 1; i <= numero; i++){
        fat = fat * i;
    }

    return fat;
}//FUNÇÃO PARA REALIZAR O CALCULO DO FATORIAL E EXIBIR NA MAIN;


int main(){

    int numero;

    printf("\n\nDigite um número para ter seu fatorial realizado: ");
    scanf("%d", &numero);

    printf("\nFatorial de %d = %d\n\n", numero, fatorial(numero));

    return 0;
}//MAIN;