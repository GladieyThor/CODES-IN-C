/*
3) Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.
*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int vetorA[10];
    int contador = 0;
 
    for(int i = 0; i < 10; i++){
        printf("\nDigite uma idade: ");
        setbuf(stdin,NULL);
        scanf("%d", &vetorA[i]);

        if(vetorA[i] > 35){
            contador++;
        }
    }

    printf("\nTem um total de %d pessoas com mais de 35 anos\n\n", contador);
    return 0;
}//MAIN;