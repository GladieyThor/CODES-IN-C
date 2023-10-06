/*
1) Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma;
*/


#include <stdio.h>


int main(){

    int vetor1[5];
    int vetor2[5];
    int vetor_soma[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite um valor para o %d° vetor: ", 1);
        setbuf(stdin,NULL);
        scanf("%d", &vetor1[i]);

        printf("Digite um valor para o %d° vetor: ", 2);
        setbuf(stdin,NULL);
        scanf("%d", &vetor2[i]);

        vetor_soma[i] = vetor1[i] + vetor2[i];
    }

    for(int i = 0; i < 5; i++){
        printf("\nVetor %d + Vetor %d = %d", 1, 2, vetor_soma[i]);
    }
    return 0;
}//MAIN;