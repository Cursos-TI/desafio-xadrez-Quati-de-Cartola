#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int quantCasas = 5;
    int escolha_elemento;
    int elemento_i = 1;

    // Variáveis para escolhas de movimentação das peças
    int escolha_bispo_diagonal; // Bispo: escolha de diagonal
    int escolha_torre_dir;      // Torre: escolha de direção
    int escolha_dama_direcao;   // Dama : escolha de direção (ou diagonal)

    // O usuário podendo escolher qual peça ele irá mover
    printf("#################################\n");
    printf("Bem-Vindo ao jogo de Xadrez!\n");
    printf("Escolha qual peça você quer mexer:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Dama\n");
    scanf("%d", &escolha_elemento);

    // Escolha de qual elemento o usuário quer mexer
    switch (escolha_elemento)
    {
        // Escolha de bispo
        case 1:
            // O jogador escolhe qual diagonal ele quer ir
            printf("#################################\n");
            printf("Escolha qual diagonal você quer mexer o bispo:\n");
            printf("1. Diagonal superior para direita\n");
            printf("2. Diagonal superior para esquerda\n");
            printf("3. Diagonal inferior para direita\n");
            printf("4. Diagonal inferior para esquerda\n");
            scanf("%d", &escolha_bispo_diagonal);

                // Escolha de qual diagonal o jogador quer se mover
                switch(escolha_bispo_diagonal)
                {
                    // Diagonal superior para direita
                    case 1:
                        // Implementação de Movimentação do Bispo
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Cima e ");
                            printf("Direita\n");
                        }
                    break;
                    // Diagonal superior para esquerda
                    case 2:
                        // Implementação de Movimentação do Bispo
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Cima e ");
                            printf("Esquerda\n");
                        }
                    break;
                    // Diagonal inferior para direita
                    case 3:
                        // Implementação de Movimentação do Bispo
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Baixo e ");
                            printf("Direita\n");
                        }
                    break;
                    // Diagonal inferior para esquerda
                    case 4:
                        // Implementação de Movimentação do Bispo
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Baixo e ");
                            printf("Esquerda\n");
                        }
                    break;
                }
        
        break;

        // Escolha de Torre
        case 2:
            // O jogador escolhe qual diagonal ele quer ir
            printf("#################################\n");
            printf("Escolha qual direção você quer mexer a torre:\n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");
            printf("3. Cima\n");
            printf("4. Baixo\n");
            scanf("%d", &escolha_torre_dir);

                // Escolha de qual direção o jogador quer se mover com a torre
                switch(escolha_torre_dir)
                {
                    // Direita
                    case 1:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Direita\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Esquerda
                    case 2:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Esquerda\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Cima
                    case 3:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Cima\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Baixo
                    case 4:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Baixo\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                }
        break;

        // Escolha de rainha (dama)
        case 3:
            // O jogador escolhe qual diagonal ele quer ir
            printf("#################################\n");
            printf("Escolha qual direção você quer mexer a dama:\n");
            printf("1. Diagonal superior para direita\n");
            printf("2. Diagonal superior para esquerda\n");
            printf("3. Diagonal inferior para direita\n");
            printf("4. Diagonal inferior para esquerda\n");
            printf("5. Direita\n");
            printf("6. Esquerda\n");
            printf("7. Cima\n");
            printf("8. Baixo\n");
            scanf("%d", &escolha_dama_direcao);

                // Escolha de qual diagonal o jogador quer se mover
                switch(escolha_dama_direcao)
                {
                    // Diagonal superior para direita
                    case 1:
                        // Implementação de Movimentação da dama
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Dama em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Cima e ");
                            printf("Direita\n");
                        }
                    break;
                    // Diagonal superior para esquerda
                    case 2:
                        // Implementação de Movimentação da Dama
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da dama em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Cima e ");
                            printf("Esquerda\n");
                        }
                    break;
                    // Diagonal inferior para direita
                    case 3:
                        // Implementação de Movimentação da Dama
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da dama em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Baixo e ");
                            printf("Direita\n");
                        }
                    break;
                    // Diagonal inferior para esquerda
                    case 4:
                        // Implementação de Movimentação da Dama
                        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Dama em diagonal.
                        for (elemento_i; elemento_i <= quantCasas; elemento_i++)
                        {
                            printf("Baixo e ");
                            printf("Esquerda\n");
                        }
                    break;
                    // Direita
                    case 5:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Direita\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Esquerda
                    case 6:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Esquerda\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Cima
                    case 7:
                        while (elemento_i <= quantCasas)
                        {
                            // Imprimindo para ir a direita
                            printf("Cima\n");
                            // evitando loop infinito
                            elemento_i++;
                        }
                    break;
                    // Baixo
                    case 8:
                        do
                        {
                            // Fazendo uma vez
                            printf("Baixo\n");
                            // Aumentando um no elemento_i
                            elemento_i++; // evitando loop infinito
                        } while(elemento_i <= quantCasas);
                    break;
                }
        
        break;
    }
    
    return 0;
}
