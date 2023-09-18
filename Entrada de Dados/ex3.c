/*
3) Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido.
*/


#include <stdio.h>


void salario(float total_vendido, float salario_base, float comissao){
    float taxa_de_comissao = total_vendido * comissao;
    float salario_final = salario_base + taxa_de_comissao;

    printf("Taxa de Comissão: %.2f reais\n", taxa_de_comissao);
    printf("Salário Total = %.2f reais\n\n", salario_final);

    return;
}//FUNÇÃO PARA CALCULAR A COMISSÃO + O SALÁRIO BASE DE UM FUNCIONÁRIO;


int main(){

    float total_vendido;
    float salario_base = 1200.00;
    float comissao = 0.10;

    printf("\n\nQuantos reais foram vendidos este mês ???\n");
    scanf("%f", &total_vendido);

    salario(total_vendido, salario_base, comissao);

    return 0;
}//MAIN;