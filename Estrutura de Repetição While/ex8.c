/*
8) Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.
*/


#include <stdio.h>
#include <stdlib.h>


void menu(int opcao){

    switch(opcao){
        case 1:
            printf("\n\nTeste1\n");
        break;

        case 2:
            printf("\n\nTeste2\n");
        break;

        case 3:
            exit(1); 
        break;

        default:
            printf("\n\nERROR!!!\n");
        break;
    }
    return;
}//FUNÇÃO DE EXIBIÇÃO DE ESCOLHA DO MENU;


int main(){

    int opcao;

    do{
        printf("\n\nMenu do programa:\n");
        printf("1 - Teste 1\n");
        printf("2 - Teste 2\n");
        printf("3 - Sair do programa\n");
        printf("Digite sua opção: ");
        setbuf(stdin,NULL);
        scanf("%d", &opcao);

        menu(opcao);
    
    }while(opcao != 3);
    

    return 0;
}//MAIN;