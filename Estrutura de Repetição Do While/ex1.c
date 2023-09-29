/*
1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.
*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int alunos = 0;
    float nota1;
    float nota2;
    float media;

    do{
        printf("\n\nDigite suas notas, de 0 a 10, exemplo: 7.5 8\n");
        setbuf(stdin,NULL);
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) / 2;

        printf("\n%d Aluno - Média = %.2f\n", alunos+1, media);

        alunos++;
        if(alunos == 5){
            exit(1);
        }
    }while(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10);
    return 0;
}//MAIN;