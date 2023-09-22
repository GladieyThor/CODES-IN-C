/*
2) Crie uma calculadora usando a instrução switch, que
pergunte qual das operações básicas quer fazer (+, -, *
e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles.
*/


#include <stdio.h>


void calculadora(int operacao){

    float numero1;
    float numero2;
    float soma;
    float subtracao;
    float divisao;
    float multiplicacao;
    
    switch(operacao){
        case 1:
            setbuf(stdin,NULL);
            printf("Digite um número que deseja somar: ");
            scanf("%f", &numero1);
            setbuf(stdin,NULL);
            printf("Digite um número que deseja somar: ");
            scanf("%f", &numero2);

            soma = numero1 + numero2;
            printf("\nA soma de %.2f + %.2f = %.2f\n\n", numero1, numero2, soma);
        break; 

        case 2:
            setbuf(stdin,NULL);
            printf("Digite um número que deseja subtrair: ");
            scanf("%f", &numero1);
            setbuf(stdin,NULL);
            printf("Digite um número que deseja subtrair: ");
            scanf("%f", &numero2);

            subtracao = numero1 - numero2;
            printf("\nA subtração de %.2f - %.2f = %.2f\n\n", numero1, numero2, subtracao);
        break;
        
        case 3:
            setbuf(stdin,NULL);
            printf("Digite um número que deseja dividir: ");
            scanf("%f", &numero1);
            setbuf(stdin,NULL);
            printf("Digite um número que deseja dividir: ");
            scanf("%f", &numero2);

            divisao = numero1 / numero2;
            printf("\nA divisão de %.2f / %.2f = %.2f\n\n", numero1, numero2, divisao);
        break;

        case 4:
            setbuf(stdin,NULL);
            printf("Digite um número que deseja multiplicar: ");
            scanf("%f", &numero1);
            setbuf(stdin,NULL);
            printf("Digite um número que deseja multiplicar: ");
            scanf("%f", &numero2);

            multiplicacao = numero1 * numero2;
            printf("\nA multiplicação de %.2f x %.2f = %.2f\n\n", numero1, numero2, multiplicacao);
        break;

        default:
            printf("\n\nERROR: VOCÊ NÃO SELECIONOU NENHUMA OPÇÃO!!!\n\n");
        break;
    }
    return;
}//MAIN;


int main(){

    int escolha;

    printf("\n\nCALCULADORA\n");
    printf("1 - SOMA (+)\n");
    printf("2 - SUBTRAÇÃO (-)\n");
    printf("3 - DIVISÃO (/)\n");
    printf("4 - MULTIPLICAÇÃO (*)\n");
    setbuf(stdin,NULL);
    printf("QUAL OPERAÇÃO DESEJA REALIZAR???\n");
    scanf("%d", &escolha);

    calculadora(escolha);

    return 0;
}//MAIN;