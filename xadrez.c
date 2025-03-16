#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.
// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.
// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.
#include <stdio.h>

//Função do Header e Footer
void header_footer();
// Funções recursivas para Torre, Bispo e Rainha
void torre(int avanco);
void bispo(int avanco);
void rainha(int avanco);

// Função para o movimento do Cavalo com loops
void cavalo();

// Função para o movimento do Bispo com loops aninhados
void bispo_loops(int avanco);

// Função principal
int main() {
    int avanco;

    //Header
    header_footer();
    // Movimento da Torre
    printf("|Jogada da Torre:|\n\n");
    avanco = 5;  // Número de casas a serem movidas
    torre(avanco);
    printf("\n");

    // Movimento do Bispo
    printf("|Jogada do Bispo:|\n\n");
    avanco = 5;  // Número de casas a serem movidas
    bispo(avanco);
    printf("\n");

    // Movimento da Rainha
    printf("|Jogada da Rainha:|\n\n");
    avanco = 8;  // Número de casas a serem movidas
    rainha(avanco);
    printf("\n");

    // Movimento do Cavalo
    printf("|Jogada do Cavalo:|\n\n");
    cavalo();
    printf("\n");

    // Movimento do Bispo (loops)
    printf("|Jogada do Bispo (loops):|\n\n");
    avanco = 5;  // Número de casas a serem movidas
    bispo_loops(avanco);
    printf("\n");

    //Footer
    header_footer();
    return 0;
}
//Função para exibir o reader e o footer
void header_footer(){

    printf("**************************************************************************\n");
    printf("***************************| DESAFIO XADREZ |*****************************\n");
    printf("**************************************************************************\n\n");

}
// Função recursiva para a Torre
void torre(int avanco) {
    if (avanco > 0) {
        printf("|Movimentando|Para a Direita|\n");  // Movimento da Torre para a direita
        torre(avanco - 1);  // Chamada recursiva
    }
}

// Função recursiva para o Bispo
void bispo(int avanco) {
    if (avanco > 0) {
        printf("|Movimentando|Para Cima e para a Direita|\n");  // Movimento do Bispo na diagonal
        bispo(avanco - 1);  // Chamada recursiva
    }
}

// Função recursiva para a Rainha
void rainha(int avanco) {
    if (avanco > 0) {
        printf("|Movimentando|Para a Esquerda|\n");  // Movimento da Rainha para a esquerda
        rainha(avanco - 1);  // Chamada recursiva
    }
}

// Função para o movimento do Cavalo com loops 
void cavalo() {
    int i, j;

    // Loop para simular o movimento em "L" (2 casas para cima, 1 para a direita)
    for (i = 1; i <= 2; i++) {
        printf("|Movimentando|Para Cima|\n");  // Duas casas para cima
    }

    for (j = 1; j <= 1; j++) {
        printf("|Movimentando|Para a Direita|\n");  // Uma casa para a direita
    }
}

// Função para o movimento do Bispo com loops aninhados
void bispo_loops(int avanco) {
    int i, j;

    // Loop externo para o movimento vertical
    for (i = 1; i <= avanco; i++) {
        // Loop interno para o movimento horizontal
        for (j = 1; j <= avanco; j++) {
            if (i == j) {  // Apenas movimentos na diagonal
                printf("|Movimentando|Para Cima e para a Direita|\n");
            }
        }
    }
}
