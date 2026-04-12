/*Nome: CargaMatriz.c
Autor: Vinicius Lima
Data: 12/04/2026
Descrição: Escreva um programa que faça a carga em uma matriz com a quantidade de linhas e colunas 
definida pelo usuário. A carga deve ser feita por meio de uma função. Após a carga, os elementos da 
matriz deverá ser passado para um vetor, em uma nova função. Ao final, tanto o vetor quanto a matriz 
devem sem impressos cada um por uma função.
*/

#include <stdio.h>

//prototipagem
void cargaMatriz(int lin, int col, int matriz[][col]);
void passarMatriz(int lin, int col, int matriz[][col], int vetor[]);
void imprimirMatriz(int lin, int col, int matriz[][col]);
void imprimirVetor(int lin, int col, int vetor[]);


int main()
{
    int lin, col;
    printf("Digite o numero de linhas: ");
    scanf("%d", &lin);
    printf("Digite o numero de colunas:");
    scanf("%d", &col);
    int matriz[lin][col];
    cargaMatriz(lin, col, matriz);
    int vetor[lin * col];

    passarMatriz(lin, col, matriz, vetor);
    imprimirMatriz(lin, col, matriz);
    imprimirVetor(lin, col, vetor);
    
    return 0;
}

void cargaMatriz(int lin, int col, int matriz[][col])
{
    for (int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void passarMatriz(int lin, int col, int matriz[][col], int vetor[])
{
    int k = 0;
    for (int i = 0; i < lin; i++)
        {
            for(int j = 0; j < col; j++)
            {
                vetor[k] = matriz[i][j];
                k++;
            }
        }    
    
}

void imprimirMatriz(int lin, int col, int matriz[][col])
{
    printf("Matriz de %d x %d: \n", lin, col);
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirVetor(int lin, int col, int vetor[])
{
    printf("Vetor: \n");
    for (int i = 0; i < lin * col; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
