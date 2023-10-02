/*
6) Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez).
*/


#include <stdio.h>


int quadrado_calculado(int numero){
    
    int quadrado;

    quadrado = numero * numero;
    
    return quadrado;
}//FUNÇÃO PARA CALCULAR O QUADRADO DE UM NÚMERO DIGITADO;


int main(){

    int numero;

    for(int i = 0; i < 10; i++){
        printf("\nDigite um número inteiro para ter seu quadrado calculado: ");
        setbuf(stdin,NULL);
        scanf("%d", &numero);
        printf("O quadrado de %d é %d\n", numero, quadrado_calculado(numero));
    }
    return 0;
}//MAIN;