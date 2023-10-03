/*
7) Utilizando a estrutura do laço for aninhado, crie um
programa que exiba a tabuada de todos os números de
1 a 10 no seguinte formato:
Tabuada do 1:
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
...
Tabuada do 5:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
...
*/

#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            printf("\n%d x %d = %d", i, j, j * i);
        }
    }

    return 0;
}//MAIN;