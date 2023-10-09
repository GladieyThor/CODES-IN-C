/*
2) Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A
*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite um número para ter seu quadrado exibido:");
        setbuf(stdin,NULL);
        scanf("%d", &vetorA[i]);

        vetorB[i] = vetorA[i] * vetorA[i];
    }

    for(int i = 0; i < 10; i++){
        printf("\nNúmero %d - Quadrado %d", vetorA[i], vetorB[i]);
    }

    return 0;
}//MAIN;