/*
6) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.
*/


#include <stdio.h>


int main() {
    
    float numero_real;
    float quadrado;

    printf("Digite um número real:");
    scanf("%f", &numero_real);

    while(numero_real > 0){
        quadrado = numero_real * numero_real;
        printf("\n%.2f ao quadrado = %.2f", numero_real, quadrado);

        printf("Digite um numero real: ");
        scanf("%f", &numero_real);
    }

    return 0;
}//MAIN;
