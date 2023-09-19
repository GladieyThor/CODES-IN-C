/*
4) Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/


#include <stdio.h>


int main(){

    float numeros_reais[4];
    float total = 0;
    float media;
    int i;

    for(i = 0; i < 4; i++){
        setbuf(stdin,NULL);
        printf("\nDigite um valor real: ");
        scanf("%f", &numeros_reais[i]);
    }//FOR PARA A CHAMADA DE ENTRADA DE VALORES POR 4X;

    for(i = 0; i < 4; i++){
        total = total + numeros_reais[i];
    }//FOR PARA A SOMA DO TOTAL DOS VALORES DIGITADOS;

    media = total / 4;//MEDIA IRÁ RESULTAR O VALOR TOTAL DIVIDIDO PELA QUANTIDADE, DANDO ASSIM A MA;
    printf("\n\nVALOR TOTAL = %.2f | MA: %.2f\n\n", total, media);//EXIBE O VALOR DA MA;

    return 0;
}//MAIN;