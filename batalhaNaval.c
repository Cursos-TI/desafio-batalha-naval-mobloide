#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // 1. Definição do Tabuleiro e Constantes
    int tabuleiro[10][10];
    int tamanhoNavio = 3;
    int i, j;

    // Inicializando o tabuleiro com 0 (Água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posicionamento do Navio Horizontal
    // Coordenada inicial: Linha 2, Coluna 1
    int horizontalLinha = 2;
    int horizontalColunaInicial = 1;

    for (j = 0; j < tamanhoNavio; j++) {
        // Mantém a linha fixa e incrementa a coluna
        tabuleiro[horizontalLinha][horizontalColunaInicial + j] = 3;
    }

    // 3. Posicionamento do Navio Vertical
    // Coordenada inicial: Linha 5, Coluna 7
    int verticalLinhaInicial = 5;
    int verticalColuna = 7;

    for (i = 0; i < tamanhoNavio; i++) {
        // Mantém a coluna fixa e incrementa a linha
        tabuleiro[verticalLinhaInicial + i][verticalColuna] = 3;
    }

    // 4. Exibição do Tabuleiro
    printf("--- Tabuleiro Batalha Naval ---\n\n");
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            // Imprime o valor seguido de um espaço para legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        // Quebra de linha ao final de cada linha da matriz
        printf("\n");
    }

    return 0;

}
