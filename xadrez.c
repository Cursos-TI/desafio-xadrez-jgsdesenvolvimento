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
int main() {

    //Delcarando as variaveis
    int bispo = 1, torre = 1, rainha,cavalo;

    //Header
    printf("**************************************************************************\n");
    printf("***************************| DESAFIO XADREZ |*****************************\n");
    printf("**************************************************************************\n\n");

    //Movimentação do bispo 5 casas na diagonal superior direita
    printf("|JOGADA| BISPO |\n\n");
    while (bispo <= 5){

        printf("|Movimento| Para cima e para Direira |\n");
        bispo ++;
    }
    printf("**************************************************************************\n");
    //Movimentação da torre 5 casas para a direita
    printf("|JOGADA| TORRE |\n\n");
    do
    {

        printf("|Movimento| Para Direira |\n");
        torre ++;

    } while (torre <= 5);
    printf("**************************************************************************\n");
    //Movimentação da rainha 8 casas para a esquerda
    printf("|JOGADA| RAINHA |\n\n");

    for (rainha = 1; rainha <= 8 ; rainha++)
    {
        printf("|Movimento| Para Esquerda |\n");
    }
    printf("**************************************************************************\n");
    //Movimentação do Cavalo em L para Baixo e para o lado
    printf("|JOGADA| Cavalo |\n\n");

    for (cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("|Movimento| Para Baixo |\n");

    }

    int movimento_cvl = 1;
    while (movimento_cvl <= 1)
    {
        printf("|Movimento| Para Esquerda |\n");
        movimento_cvl++;
    }
    printf("**************************************************************************\n");

    return 0;
}
