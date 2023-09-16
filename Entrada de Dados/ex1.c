/*
1) Faça um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58
*/

#include <stdio.h>


void peso_ideal(float altura){
    
    float peso_ideal = (72.7 * altura) - 58;
        printf("\nPeso Ideal para um pessoa de %.2fcm = %.2f\n\n", altura, peso_ideal);
    return;    
}//FUNÇÃO PARA CALCULAR O PESO IDEAL;


int main(){
    
    float altura;

    printf("\n\nDigite sua altura, exemplo: 1.82\n");
    scanf("%f", &altura);//SALVA O DADO PEDIDO PARA O USUÁRIO;

    peso_ideal(altura);//CHAMADA DE FUNÇÃO PARA RESOLUÇÃO DO CALCULO;

    return 0;
}//MAIN;