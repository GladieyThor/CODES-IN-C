/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/


#include <stdio.h>


int main(){

    for(int i = 240; i <= 730; i++){
        if(i % 2 == 0){
            printf("\n%d", i);
        }
    }
    return 0;
}//MAIN;