/*
5) Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/


#include <stdio.h>
#include <math.h>


void raiz_quadrada(float numero){

    float numero_ao_quadrado = sqrt(numero);
    printf("\n RQ de %.2f = %.2f\n\n", numero, numero_ao_quadrado);
    
    return;
}//FUNÇÃO PARA REALIZAR A EQUAÇÃO DA RAIZ QUADRADA;

int main(){

    float numero;

    printf("\n\nDigite um número para ter sua raiz calculada: ");
    scanf("%f", &numero);

    raiz_quadrada(numero);

    return 0;
}//MAIN;