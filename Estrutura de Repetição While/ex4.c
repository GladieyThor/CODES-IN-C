/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/

#include <stdio.h>

int main(){

    int par = 240;

    for(par; par <= 730; par++){
        if(par % 2 == 0){
            printf("\n%d", par);
        }
    }

    return 0;
}//MAIN;