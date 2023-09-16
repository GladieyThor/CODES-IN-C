/*
3) Faça um programa com 2 variáveis, A e B, onde A terá 
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, 
AxB e A/B. Em seguida, faça B incrementar de uma 
unidade e repita as 4 operações.
*/

#include <stdio.h>


void adicao(int A, int B){
    //A + B
    int operacao = A + B;
        printf("\n\nA + B = %d\n", operacao);
    return;
}//FUNÇÃO PARA SOMAR E EXIBIR O VALOR;

void subtracao(int A, int B){
    //A - B
    int operacao = A - B;
        printf("A - B = %d\n", operacao);
    return;
}//FUNÇÃO PARA SUBTRAIR E EXIBIR O VALOR;

void multiplicacao(int A, int B){
    //A * B
    int operacao = A * B;
        printf("A x B = %d\n", operacao);
    return;
}//FUNÇÃO PARA MULTIPLICAR E EXIBIR O VALOR;

void divisao(int A, int B){
    //A + B
    int operacao = A / B;
        printf("A / B = %d\n\n", operacao);
    return;
}//FUNÇÃO PARA DIVIDIR E EXIBIR O VALOR;

int main(){

    int A = 40;
    int B = -1;

    adicao(A, B);
    subtracao(A, B);
    multiplicacao(A, B);
    divisao(A, B);

        printf("INCREMENTAÇÃO EM B");
        B = B + 1;
    
    adicao(A, B);
    subtracao(A, B);
    multiplicacao(A, B);
    divisao(A, B);

    return 0;
}//MAIN;