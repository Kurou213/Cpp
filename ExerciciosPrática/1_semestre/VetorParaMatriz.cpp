/*Nome: VetorParaMatriz.cpp
Autor: Vinicius Lima
Data: 10/12/25  23:31
Descricao: Programa que o usuario insere 16 valores em um vetor e passa para uma matriz 4x4
*/
#include <stdio.h>

main()
{
    int vetor[16], matriz[4][4];
    int k = 0;

    //Leitura dos valores para o vetor
    printf("Digite 16 valores para o vetor: \n");
    for(int i = 0; i < 16; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    //Transferencia dos valores do vetor para a matriz 4x4
    for(int i = 0; i < 4; i++)        
            for(int j = 0; j < 4; j++)
            {
             matriz[i][j] = vetor[k];
             k++;   
            }
        
        //Exibindo o vetor
        printf("\nVetor de 16 elementos:\n");
        for(int i = 0; i < 16; i++)
        {
            printf("%d ", vetor[i]);
        }
        
        //Exibindo a matriz 4x4
        printf("\n\nMatriz 4x4:\n");
        for(int i = 0; i < 4; i++) {           
                for(int j = 0; j < 4; j++)
                {
                    printf("\t%d", matriz[i][j]);
                }            
            puts("\n");
            }

}//fim programa