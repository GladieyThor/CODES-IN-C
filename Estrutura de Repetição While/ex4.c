/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/

#include <stdio.h>

int main(){

    int par = 240;

    while(par <= 730){
        if(par % 2 == 0){
            printf("\n%d", par);
        }
        par++;
    }

    return 0;
}//MAIN;