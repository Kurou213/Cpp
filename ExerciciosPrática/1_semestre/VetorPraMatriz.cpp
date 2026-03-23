/*Nome: VetorParaMatriz.cpp
Autor: Vinicius Lima
Data: 26/12/25 17:36
Descricao: Programa que converte um vetor de 9 elementos em uma matriz 3x3 e exibe a matriz.
*/
#include <stdio.h>

main()
{
    int vet[9], mat[3][3];

    //leitura dos elementos do vetor
    printf("Digite 9 numeros inteiros para preencher o vetor: \n");
        for(int i = 0; i < 9; i++)
            {
                printf("Elemento %d: ", i + 1); scanf("%d", &vet[i]);
            }
            //conversao do vetor para a matriz 3x3

        for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j <3; j++)
                    {
                        mat[i][j] = vet[i * 3 + j];
                    }
            }
    //exibir a matriz 3x3
    printf("\nMatriz 3x3:\n");
        for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                    {
                        printf("%d\t", mat[i][j]);
                    }
                    puts("\n");
            }
            
}//fim programa