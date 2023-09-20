/*
3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
*/


#include <stdio.h>
#include <math.h>


void raiz_quadrada(float a, float b, float c){

    //RAIZ QUADRADA = B+-VB²-4*A*C / 2 * A;
    float x1, x2;
    float delta = (b * b) - (4 * a * c);

    if(delta > 0){
        x1 = ((- b) + sqrt(delta)) / (2 * a);
        x2 = ((- b) - sqrt(delta)) / (2 * a);
    } else {
        float xn = (-b) / 2 * a;
        printf("\n\nExiste apenas e exclusivamente uma raíz, sendo ela %.2f\n\n", xn);
    }
    

    printf("\n\nAs raízes encontradas foram R1: %.2f e R2: %.2f\n\n", x1, x2);

    return;
}//FUNÇÃO PARA RESOLVER A RAIZ QUADRADA;


int main(){

    float a,b,c;

    printf("\n\nDigite os valores dos coeficientes a,b e c, de uma equação de segundo grau...");
    printf("\nDigite o valor de a: ");
    scanf("%f", &a);
    printf("\nDigite o valor de b: ");
    scanf("%f", &b);
    printf("\nDigite o valor de c: ");
    scanf("%f", &c);

    raiz_quadrada(a,b,c);

    return 0;
}//MAIN;