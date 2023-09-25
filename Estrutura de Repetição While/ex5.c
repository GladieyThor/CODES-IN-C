/*
5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.
*/


#include <stdio.h>


int main(){

    float numero_real[10];
    float quadrado[10];
    int contador = 0;
    
    while(contador < 10){
        printf("\nDigite %d° número real: ", contador+1);
        setbuf(stdin,NULL);
        scanf("%f", &numero_real[contador]);

        quadrado[contador] = numero_real[contador] * numero_real[contador];
        
        contador++;
    }

    contador = 0;

    while(contador < 10){
        printf("\n%.2f ao quadrado = %.2f", numero_real[contador], quadrado[contador]);
        contador++;
    }
    
    return 0;
}//MAIN;