#include <stdio.h>

//========================================================================
const int quantCasas = 5;
int escolha_elemento;
int elemento_i = 1;

// Variáveis para escolhas de movimentação das peças
int escolha_bispo_diagonal; // Bispo : escolha de diagonal
int escolha_torre_dir;      // Torre : escolha de direção
int escolha_dama_direcao;   // Dama  : escolha de direção (ou diagonal)
int escolha_cavalo_direcao; // Cavalo: escolha de direção para cavalo
    // Mais variáveis para o cavalo
    int cavalo_casa_inicial = 2; // Casas que o cavalo pula
    int cavalo_casa_destino = 1; // Casa final a qual o cavalo pulará 
//========================================================================
// Funções para movimentação de peças com recursividade
// Para movimentação da torre
void mover_torre(int casas)
{
    switch(escolha_torre_dir) {
        // Movendo-se a direita
        case 1:
            if (casas > 0) {
                printf("Indo uma casa a direita\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se a esquerda
        case 2:
            if (casas > 0) {
                printf("Indo uma casa a esquerda\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se para cima
        case 3:
            if (casas > 0) {
                printf("Indo uma casa para cima\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se para baixo
        case 4:
            if (casas > 0) {
                printf("Indo uma casa para baixo\n");
                mover_torre(casas - 1);
            }
        break;
    }
}
// Para movimentação do Bispo
void mover_bispo(int casas)
{
    switch(escolha_bispo_diagonal) {
        // Diagonal para direita superior
        case 1:
            if (casas > 0) {
                printf("Cima e ");
                printf("Direita\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para esquerda superior
        case 2:
            if (casas > 0) {
                printf("Cima e ");
                printf("Esquerda\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para direita inferior
        case 3:
            if (casas > 0) {
                printf("Baixo e ");
                printf("direita\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para esquerda inferior
        case 4:
            if (casas > 0) {
                printf("Baixo e ");
                printf("Esquerda\n");
                mover_bispo(casas - 1);
            }
        break;
    }
}
// Para movimentação da Dama
void mover_dama(int casas) 
{
    switch(escolha_bispo_diagonal) {
        // Diagonal para direita superior
        case 1:
            if (casas > 0) {
                printf("Cima e ");
                printf("Direita\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para esquerda superior
        case 2:
            if (casas > 0) {
                printf("Cima e ");
                printf("Esquerda\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para direita inferior
        case 3:
            if (casas > 0) {
                printf("Baixo e ");
                printf("direita\n");
                mover_bispo(casas - 1);
            }
        break;
        // Diagonal para esquerda inferior
        case 4:
            if (casas > 0) {
                printf("Baixo e ");
                printf("Esquerda\n");
                mover_bispo(casas - 1);
            }
        break;
        // Movendo-se a direita
        case 5:
            if (casas > 0) {
                printf("Indo uma casa a direita\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se a esquerda
        case 6:
            if (casas > 0) {
                printf("Indo uma casa a esquerda\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se para cima
        case 7:
            if (casas > 0) {
                printf("Indo uma casa para cima\n");
                mover_torre(casas - 1);
            }
        break;
        // Movendo-se para baixo
        case 8:
            if (casas > 0) {
                printf("Indo uma casa para baixo\n");
                mover_torre(casas - 1);
            }
        break;
    }
}

int main()
{
    // O usuário podendo escolher qual peça ele irá mover
    printf("#################################\n");
    printf("Bem-Vindo ao jogo de Xadrez!\n");
    printf("Escolha qual peça você quer mexer:\n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Dama\n");
    printf("4. Cavalo\n");
    scanf("%d", &escolha_elemento); // Armazenando a escolha do jogador

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

            mover_bispo(5);
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
            
            mover_torre(5);
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

            mover_dama(5);
            
        break;

        // Escolha de Cavalo
        case 4:
            while (cavalo_casa_destino--) {
                for (int i = 0; i < cavalo_casa_inicial; i++) {
                    printf("Pulando casa para cima\n");
                }
                printf("Parando na casa para direita\n");
            }
            // O jogador escolhe qual direção ele quer ir
            /*
            printf("#################################\n");
            printf("Escolha qual direção você quer mexer o cavalo:\n");
            printf("1. Para frente à esquerda\n");
            printf("2. Para frente à direita\n");
            printf("3. Para esquerda à cima\n");
            printf("4. Para esquerda à baixo\n");
            printf("5. Para direita à cima\n");
            printf("6. Para direita à baixo\n");
            printf("7. Para baixo à esquerda\n");
            printf("8. Para baixo à direita\n");
            scanf("%d", &escolha_cavalo_direcao);

                // Escolha de qual diagonal o jogador quer se mover
                switch(escolha_cavalo_direcao)
                {
                    // Para frente à esquerda
                    case 1:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua frente
                            printf("O cavalo pulou uma casa à sua frente\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à esquerda da última casa\n");
                                }
                            }   
                        }
                    break;
                    // Para frente à direita
                    case 2:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua frente
                            printf("O cavalo pulou uma casa à sua frente\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à direita da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para esquerda à cima
                    case 3:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua esquerda
                            printf("O cavalo pulou uma casa à sua esquerda\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à cima da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para esquerda à baixo
                    case 4:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua esquerda
                            printf("O cavalo pulou uma casa à sua esquerda\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à baixo da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para direita à cima
                    case 5:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua direita
                            printf("O cavalo pulou uma casa à sua direita\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à cima da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para direita à baixo
                    case 6:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa à sua direita
                            printf("O cavalo pulou uma casa à sua direita\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à baixo da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para baixo à esquerda
                    case 7:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa a baixo
                            printf("O cavalo pulou uma casa a baixo\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à esquerda da última casa\n");
                                }
                            }
                        }
                    break;
                    // Para baixo à direita
                    case 8:
                        // Loops aninhados
                        for (int i = 1; i <= cavalo_casa_inicial; i++) // loop externo
                        {
                            // O cavalo pulará uma casa a baixo
                            printf("O cavalo pulou uma casa a baixo\n");

                            // Loop interno para verificar se o cavalo atingiu a última casa
                            for (int j = 1; j <= 1; j++)
                            {
                                // SE i chegou no limite de pular casas
                                if (i == cavalo_casa_inicial) {
                                    printf("O cavalo parou à direita da última casa\n");
                                }
                            }
                        }
                    break;
                    */
        
        break;
    }

    return 0;
}
