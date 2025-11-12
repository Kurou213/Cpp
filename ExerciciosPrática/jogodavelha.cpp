/* Programa para fazer um jogo da velha usando matriz 3x3 com a maquina jogando contra o usuario
   Nome: Vinicius Lima
   Data: 12/11/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char matriz[3][3];
    char jogador[50];

    // Inicializa matriz com espaços
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matriz[i][j] = ' ';

    printf("Digite o nome do jogador: ");
    fgets(jogador, sizeof(jogador), stdin);

    // Remove o \n do nome, se existir
    for (int i = 0; jogador[i] != '\0'; i++) {
        if (jogador[i] == '\n') {
            jogador[i] = '\0';
            break;
        }
    }

    printf("Bem-vindo ao Jogo da Velha, %s!\n", jogador);

    srand(time(0));

    for (int turno = 0; turno < 9; turno++)
    {
        int linha, coluna;

        // Jogador joga
        puts("Sua vez! Digite a linha e a coluna (de 1 a 3): ");
        scanf("%d %d", &linha, &coluna);

        linha--; // Ajusta para índice interno (0 a 2)
        coluna--; // Ajusta para índice interno (0 a 2)

        // Validação de entrada
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            puts("Posicao invalida! Tente novamente.");
            turno--;
            continue;
        }

        if (matriz[linha][coluna] != ' ') {
            puts("Posicao já ocupada! Tente novamente.");
            turno--;
            continue;
        }

        matriz[linha][coluna] = 'X';

        // Jogada da máquina
        if (turno < 8) { // só joga se ainda houver espaço
            int maquinaLinha, maquinaColuna;
            do {
                maquinaLinha = rand() % 3;
                maquinaColuna = rand() % 3;
            } while (matriz[maquinaLinha][maquinaColuna] != ' ');
            matriz[maquinaLinha][maquinaColuna] = 'O';
        }

        // Mostra o tabuleiro
        puts("\nTabuleiro atual:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf(" %c ", matriz[i][j]);
                if (j < 2) printf("|");
            }
            printf("\n");
            if (i < 2) printf("---+---+---\n");
        }
        printf("\n");

        // Verifica linhas e colunas
        for (int i = 0; i < 3; i++) {
            if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2] && matriz[i][0] != ' ') {
                printf("Jogador %s venceu!\n", matriz[i][0] == 'X' ? jogador : "Máquina");
                return 0;
            }
            if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i] && matriz[0][i] != ' ') {
                printf("Jogador %s venceu!\n", matriz[0][i] == 'X' ? jogador : "Máquina");
                return 0;
            }
        }

        // Verifica diagonais
        if ((matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2] && matriz[0][0] != ' ') ||
            (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0] && matriz[0][2] != ' ')) {
            printf("Jogador %s venceu!\n", matriz[1][1] == 'X' ? jogador : "Máquina");
            return 0;
        }
       
    }
    puts("Empate! Ninguém venceu.\n");
    return 0;

    
}