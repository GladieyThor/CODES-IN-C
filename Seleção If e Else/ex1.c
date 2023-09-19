/*
1) Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.
*/


#include <stdio.h>

void converte_nota(float nota){
    if(nota >= 6){
        printf("\nAPROVADO!!!\n\n");
    } else {
        printf("\nREPROVADO!!!\n\n");
    }//IF PARA A INFORMAÇÃO SE O ALUNO FOI APROVADO OU NÃO;
    return;
}//FUNÇÃO PARA CONVERTER A NOTA EM UMA MENSAGEM DE INFORMAÇÃO CASO ELE PASSE OU SEJA REPROVADO;


int main(){

    float nota;

    printf("\n\nDigite sua nota entre 0 a 10\n");
    do{
        setbuf(stdin,NULL);
        printf("Digite sua nota: ");
        scanf("%f", &nota);
    }while(nota > 10 || nota < 0);//FAÇA ENQUANTO NOTA FOR MAIOR QUE 10 OU MENOR QUE 0;

    converte_nota(nota);

    return 0;
}//MAIN;