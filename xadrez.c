#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoTorre(int passo) {
    if (passo > 5) {
        return;
    }

    for (int i = 1; i <= 1; i++) {
        printf("a torre foi pra a direita\n");
    }

    movimentoTorre(passo + 1);
}

void movimentoBispo(int passo) {

    if (passo > 5) {
        return;
    }

    for (int i = 1; i <= 1; i++) {
        printf("o bispo foi para cima\n");

        for (int j = 1; j <= 1; j++) {
            printf("o bispo foi para a direita\n");
        }
    }

    movimentoBispo(passo + 1);
}

void movimentoRainha(int passo) {

    if (passo > 8) {
        return;
    }

    for (int i = 1; i <= 1; i++) {
        printf("a rainha foi pra a esquerda\n");
    }

    movimentoRainha(passo + 1);
}

int main() {

    movimentoTorre(1);

    printf("\n");

    movimentoBispo(1);

    printf("\n");

    movimentoRainha(1);

    printf("\n");

     for (int i = 0, j = 4; i <= j; i++, j--) {
        if (i == j) {
            printf("o cavalo foi pra cima\n");
        } else {
            printf("o cavalo foi pra a direita\n");
        }
    }

    return 0;
}
