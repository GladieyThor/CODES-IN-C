/*
5) Faça um programa que calcule o fatorial de um número a ser
digitado.
*/


#include <stdio.h>


int calcular_fatorial(int numero){

    int fat = 1;

    for(int i = 1; i <= numero; i++){
        fat = fat * i;
    }

    return fat;
}//FUNÇÃO PARA CALCULAR O FATORIAL DE UM NÚMERO RECEBIDO;


int main(){

    int fatorial;

    printf("\nDigite um número a ser calculado o fatorial: ");
    setbuf(stdin,NULL);
    scanf("%d", &fatorial);

    printf("\nFatorial de %d é %d\n\n", fatorial, calcular_fatorial(fatorial));

    return 0;
}//MAIN;