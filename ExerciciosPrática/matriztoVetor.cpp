/*Nome: MatrizToVetor.cpp
Autor: Vinicius Lima
Data: 01/12/2025 18:18
Descricao: Programa que converte uma matriz 3x3 em um vetor de 9 elementos e exibe o vetor.
*/
#include <stdio.h>

main()
{
    int mat[3][3], vet[9];

    //leitura dos elementos da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                {
                    printf("Elemento [%d][%d]: ", i, j); scanf("%d", &mat[i][j]);
                }
            //conversao da matriz para o vetor
            for(int i = 0; i < 3; i++)
                for(int j = 0; j < 3; j++)
                    {
                        vet[i * 3 + j] = mat[i][j];
                    }
                printf("\nVetor de 9 elementos:\n");
                for(int i = 0; i < 9; i++)
                    {
                        printf("Elemento %d: %d\n", i + 1, vet[i]);
                    }
                    
                
}//fim programa