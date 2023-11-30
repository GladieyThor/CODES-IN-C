/*
3) Altere o exercício anterior para receber os 3 valores no
mesmo scanf. Exemplo:

Digite a conta a ser realizada: 5+8
O resultado é: 13
*/


#include <stdio.h>


void calculadora(float numero1, float numero2, char operador){

    float soma;
    float subtracao;
    float divisao;
    float multiplicacao;
    
    switch(operador){
        case '+':
            soma = numero1 + numero2;
            printf("\nA soma de %.2f + %.2f = %.2f\n\n", numero1, numero2, soma);
        break; 

        case '-':
            subtracao = numero1 - numero2;
            printf("\nA subtração de %.2f - %.2f = %.2f\n\n", numero1, numero2, subtracao);
        break;
        
        case '/':
            divisao = numero1 / numero2;
            printf("\nA divisão de %.2f / %.2f = %.2f\n\n", numero1, numero2, divisao);
        break;

        case 'x':
            multiplicacao = numero1 * numero2;
            printf("\nA multiplicação de %.2f x %.2f = %.2f\n\n", numero1, numero2, multiplicacao);
        break;

        default:
            printf("\n\nERROR: VOCÊ NÃO SELECIONOU NENHUMA OPÇÃO!!!\n\n");
        break;
    }//SWITCH QUE DESIGNA AS OPERAÇÕES;
    return;
}//FUNÇÃO PARA REALIZAR AS OPERAÇÕES DE CALCULADORA;


int main(){

    char operador;
    float numero1;
    float numero2;

    printf("\n\nCALCULADORA\n");
    setbuf(stdin,NULL);
    printf("Exemplo: 2x3 = 6\n");
    printf("Digite a operação que deseja realizar: ");
    scanf("%f %c %f", &numero1, &operador, &numero2);


    calculadora(numero1, numero2, operador);

    return 0;
}//MAIN;
