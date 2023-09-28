/*
9) Faça um programa que simule um jogo, onde o usuário
deverá descobrir um número aleatório escolhido pelo
computador (de 1 a 100).
 O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário
acertar o número ou esgotar o número máximo de tentativas
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));//FUNÇÃO QUE GERA NÚMERO ALEATÓRIO;
    int numero_aleatorio = rand() % 100 + 1;//NÚMERO QUE O COMPUTADOR VAI SORTEAR DE 1 A 100;

    int contador_tentativas = 0;
    int tentativa;

    printf("\n\nADVINHE UM NÚMERO ENTRE 1 A 100\n");
    while(contador_tentativas < 6){
        printf("\n\n%d° Tentativa - Digite um número: ", contador_tentativas+1);
        setbuf(stdin,NULL);
        scanf("%d", &tentativa);

        if(tentativa == numero_aleatorio){
            printf("\nParabéns você ganhou!!!\n\n");
            exit(1);//FUNÇÃO QUE ENCERRA O PROGRAMA;
        } else if(tentativa > numero_aleatorio){
            printf("\nMUITO ALTO, restam %d tentativas\n", 6-(contador_tentativas+1));
        } else {
            printf("\nMUITO BAIXO, restam %d tentativas\n", 6-(contador_tentativas+1));
        }
        contador_tentativas++;

    }//WHILE JOGO;

    printf("\n\nVOCÊ PERDEU!!! O NÚMERO SORTEADO ERA %d\n\n", numero_aleatorio);
    
    return 0;
}//MAIN;