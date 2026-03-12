#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int movimentoTorre, movimentoBispo = 1, movimentoRainha = 1, movimentoCavalo;

    for (movimentoTorre = 1; movimentoTorre <= 5; movimentoTorre++) {
        printf("a torre foi pra a direita\n");
    }

    printf("\n");

    while (movimentoBispo <= 5) {
        printf("o bispo foi para cima\n");
        printf("o bispo foi para a direita\n");
        movimentoBispo++;
    }

    printf("\n");

    do {
        printf("a rainha foi pra a esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha <= 8);

    printf("\n");

     for (movimentoCavalo = 1; movimentoCavalo <= 2; movimentoCavalo++) {
        printf("o cavalo foi pra baixo\n");
        while (movimentoCavalo == 2) {
            printf("o cavalo foi pra esquerda\n");
            break;
        }
    }

    return 0;
}
