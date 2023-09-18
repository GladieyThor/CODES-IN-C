/*
2) Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.
*/


#include <stdio.h>


void idade(int nascimento, int ano){
    int idade = ano - nascimento;
    printf("\nVocê nasceu em %d e tem %d anos\n\n", nascimento, idade);

    return;
}//FUNÇÃO PARA REALIZAR A DESCOBERTA DA IDADE ATUAL DA PESSOA;


int main(){

    int idade_nascimento;
    int ano_atual;

    setbuf(stdin,NULL);
    printf("\n\nEm que ano você nasceu???\n");
    scanf("%d", &idade_nascimento);
    
    setbuf(stdin,NULL);
    printf("\nQual é o ano atual???\n");
    scanf("%d", &ano_atual);

    idade(idade_nascimento, ano_atual);

    return 0;
}//MAIN;