/*
1) Escreva um programa para determinar a quantidade de litros
de combustível gastos em uma viagem por um automóvel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
é de 35 min e a velocidade média do automóvel é 80 km/h.
*/

#include <stdio.h>


int main(){
    
    //Vm = D/T;
    float velocidade_media = 80; //Vm = 80Km/h;
    float distancia; //D = ???;
    int tempo = 35; //T = 35min;

    //Conversão de Km/h -> Km/min;
    float velocidade_media_final = velocidade_media / 60;
        printf("\n\nVelocidade Média = %.2fKm/min\n", velocidade_media_final);
    
    //Encontrar a Distância;
    distancia = velocidade_media_final * tempo; //D = Vm * T;
        printf("Distância = %.2fKm\n", distancia);
    
    int media_combustivel = 12; //Cm = 12Km/L;
    float gasto_de_combustivel = distancia / media_combustivel; //Cg = D/Cm;
        printf("Gasto de combustível = %.2fL\n\n", gasto_de_combustivel);

    return 0;
}//MAIN;