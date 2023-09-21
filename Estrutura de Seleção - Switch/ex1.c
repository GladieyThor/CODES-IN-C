/*
1) Crie um programa que forneça um menu com duas opções. 
Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:

Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:
*/


#include <stdio.h>


void par_impar(){

    int numero;

    setbuf(stdin,NULL);
    printf("\nDigite um número para ser descoberto, se épar ou ímpar: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("\nO número %d é par!!!\n\n", numero);
    } else {
        printf("\nO número %d é ímpar!!!\n\n", numero);
    }//IF e ELSE PARA DEMONSTRAÇÃO DE NÚMERO PAR/ÍMPAR;

    return;
}//FUNÇÃO PARA DESCOBERTA DE NÚMERO PAR/ÍMPAR;

void maior_menor(){

    int idade;

    setbuf(stdin,NULL);
    printf("\nDigite uma idade, para descobrir se é maior ou menor de idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("\nA idade de %d anos, é maior de idade!!!\n\n", idade);
    } else {
        printf("\nA idade de %d anos, é menor de idade!!!\n\n", idade);
    }//IF e ELSE PARA DEMONSTRAÇÃO DA IDADE;

    return;
}//FUNÇÃO PARA DESCOBERTA DA FAIXA ETÁRIA;


int main(){

    int escolha;

    printf("\n\nMenu de programa:\n");
    printf("1 - Verifica par/ímpar\n");
    printf("2 - Verifica maior/menor de idade\n");
    setbuf(stdin,NULL);
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            par_impar();
        break;

        case 2:
            maior_menor();
        break;

        default:
            printf("\n\nVocê não escolheu nenhuma opção disponível!!!\n\n");
        break;
    }//SWITCH DE ACORDO PARA OPÇÃO ESCOLHIDA;

    return 0;
}//MAIN;