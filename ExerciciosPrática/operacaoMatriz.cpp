/*Programa que faz operações matematicas simples 
com os dados inseridos na matriz pelo usuario
Nome: Vinicius Lima
Data: 12/11/2025
*/
#include <stdio.h>
#include <vector>

int main()
{
    puts ("Digite o tamanho das matrizes: ");
    int linMatA, colMatA;
    puts("Numero de linhas da Matriz A: ");
        scanf ("%d", &linMatA);
    puts("Numero de colunas da Matriz A: ");
        scanf ("%d", &colMatA);
    int linMatB, colMatB;
    puts("\nNumero de linhas da Matriz B: ");
        scanf ("%d", &linMatB);
    puts("Numero de colunas da Matriz B: ");
        scanf ("%d", &colMatB);
    if (linMatA != linMatB || colMatA != colMatB)
    {
        puts("As duas matrizes devem ter o mesmo numero de linhas e colunas para realizar as operacoes!");
        return 0;
    }
    // Usamos vetores dinâmicos porque arrays de tamanho variável não são padrão em C++
    std::vector<int> matA(linMatA * colMatA), matB(linMatB * colMatB);
    puts("\nDigite os valores para as matrizes: ");
    puts("\nMatriz A: ");
        for (int i = 0; i < linMatA; i++)
            for (int j = 0; j < colMatA; j++)
            {
                printf("[%d][%d]: ", i, j);
                /* índice linear: linha * colunas + coluna */
                scanf ("%d", &matA[i * colMatA + j]);
            }
    puts("\nMatriz B: ");
        for (int i = 0; i < linMatB; i++)
            for (int j = 0; j < colMatB; j++)
            {
                printf("[%d][%d]: ", i, j);
                scanf ("%d", &matB[i * colMatB + j]);
            }
    // Vetores para resultados (inicializados com zeros)
    std::vector<int> matSoma(linMatA * colMatA, 0), matSubtracao(linMatA * colMatA, 0);
    // Realizando a soma e subtração das matrizes (atribuição, não += em memória não inicializada)
    for (int i = 0; i < linMatA; i++)
        for (int j = 0; j < colMatA; j++)
        {
            int idx = i * colMatA + j;
            int idxB = i * colMatB + j; // colMatB == colMatA quando chegamos aqui, por segurança usamos colMatB
            matSoma[idx] = matA[idx] + matB[idxB];
            matSubtracao[idx] = matA[idx] - matB[idxB];
        }
    puts("\n====> Matrizes Carregadas! <====");
    puts("\nMatriz A:");
    puts("===========");
    for (int i = 0; i < linMatA; i++)
    {
        for (int j = 0; j < colMatA; j++)
            printf ("\t%d", matA[i * colMatA + j]);
        puts ("\n");
    }
    puts("\nMatriz B:");
    puts("===========");
    for (int i = 0; i < linMatB; i++)
    {
        for (int j = 0; j < colMatB; j++)
            printf ("\t%d", matB[i * colMatB + j]);
        puts ("\n");
    }
    puts("\nMatriz Soma (A + B):");
    puts("============");
    for (int i = 0; i < linMatA; i++) {
        for (int j = 0; j < colMatA; j++)
            printf ("\t%d", matSoma[i * colMatA + j]);
        
        puts ("\n");
    }
    
    puts("\nMatriz Subtracao (A - B): ");
    puts("============");
    for (int i = 0; i < linMatA; i++) {
        for (int j = 0; j < colMatA; j++)
        printf("\t%d", matSubtracao[i * colMatA + j]);

        puts("\n");
    }


}//fim programa