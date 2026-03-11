#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int movimentoTorre, movimentoBispo = 1, movimentoRainha = 1;

    for (movimentoTorre = 1; movimentoTorre <= 5; movimentoTorre++) {
        printf("a torre foi pra a direita\n");
    }

    while (movimentoBispo <= 5) {
        printf("o bispo foi para cima\n");
        printf("o bispo foi para a direita\n");
        movimentoBispo++;
    }

    do {
        printf("a rainha foi pra a esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha <= 8);

    return 0;
}
