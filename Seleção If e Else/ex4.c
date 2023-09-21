/*
4) Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:

imposto = salário x alíquota – parcela da dedução

Base de Cálculo (R$)          Alíquota (%)      Parcela a Deduzir (R$)
de 0,00 até 1.903,98           isento                 0,00
de 1.903,99 até 2.826,65        7,5                   142,80
de 2.826,66 até 3.751,05        15                    354,80
de 3.751,06 até 4.664,68       22,5                   636,13
a partir de 4.664,68           27,5                   869,36
*/


#include <stdio.h>


void imposto(float salario){

    float imposto_pago;

    if(salario <= 1903.98){
        imposto_pago = (salario * 1) - 0;
        printf("\nSalário Recebeido = %.2f, impostos = %.2f reais\n\n", salario, imposto_pago);
    } else if(salario <= 2826.65){
        imposto_pago = (salario * 0.075) - 142.80;
        printf("\nSalário Recebeido = %.2f, impostos = %.2f reais\n\n", salario, imposto_pago);
    } else if(salario <= 3751.05){
        imposto_pago = (salario * 0.15) - 354.80;
        printf("\nSalário Recebeido = %.2f, impostos = %.2f reais\n\n", salario, imposto_pago);
    } else if(salario <= 4664.68){
        imposto_pago = (salario * 0.225) - 636.13;
        printf("\nSalário Recebeido = %.2f, impostos = %.2f reais\n\n", salario, imposto_pago);
    } else {
        imposto_pago = (salario * 0.275) - 869.36;
        printf("\nSalário Recebeido = %.2f, impostos = %.2f reais\n\n", salario, imposto_pago);
    }
    return;
}//FUNÇÃO QUE CALCULA IMPOSTO A SER PAGO, DE ACORDO COM O SALÁRIO INFORMADO;


int main(){

    float salario;

    printf("\n\nDigite seu salário: ");
    scanf("%f", &salario);

    imposto(salario);

    return 0;
}//MAIN;