/*
2) Uma conta de caderneta de poupança foi aberta com um
depósito de R$ 500,00. Imagine que esta conta é remunerada
em 1% de juros ao mês. Qual será o valor da conta após três
meses?
*/

#include <stdio.h>
#include <stdlib.h>

float juros_ao_mes(float saldo_total, float taxa_de_juros){
    printf("\nJuros sendo contabilizados, a partir de agora:");
    for(int i = 0; i < 3; i++){
        saldo_total = (saldo_total + (saldo_total * taxa_de_juros));
        printf("\n%d° mes - %.2f reais", i+1, saldo_total);
    }
    return 1;
}

int main(){

    float deposito = 500; //Dinheiro depositado;
    float taxa_de_juros = 0.01; //Juros ao mês;

    printf("\n\nValor Depositado = %.2f reais\n", deposito);
    juros_ao_mes(deposito, taxa_de_juros);//FUNÇÃO QUE REALIZA OS CÁLCULOS DE JUROS SOBRE MÊS;

    return 0;
}//MAIN;