#include "menus.h"
#include <stdio.h>

void menu_inicial(){
    printf("\n-------------BEM VINDO--------------\n");
    printf("Digite a opcao desejada: \n");
    printf("(1)converter binario para decimal\n");
    printf("(2)fazer operacoes com binario\n");
    printf("(3)converter decimal para binario\n");
    printf("(4)Menu Octal\n");
    printf("(5)Sair\n");
}

void menu_operacao(){
    printf("Qual operacao deseja fazer?\n");
    printf("(1)Adicao\n");
    printf("(2)Subtracao\n");
    printf("(3)Multiplicacao\n");
    printf("(4)Divisao\n");
}

void menu_Octal(){
    printf("\n-------------Octal--------------\n");
    printf("Digite a opcao desejada: \n");
    printf("(1)converter Decimal para Octal\n");
    printf("(2)converter Octal para Decimal\n");
}