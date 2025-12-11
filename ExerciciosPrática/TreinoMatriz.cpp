/*Nome: TreinoMatriz.cpp
Autor: Vinicius Lima
Data: 11/12/2025
Descrição: Programa que lê uma matriz 4x4
Transferir para um vetor de 16 elementos,
vericar a quantidade de numeros pares e impares, e o maior e menor numero
*/
#include <stdio.h>

main()
{
 int matriz[4][4], vetor[16];
 int k = 0;
 int maior = 0, menor = 0;
 int quoc, resto = 0;

 int qtdPares = 0, qtdImpares = 0;

    //Leitura dos valores para a matriz 4x
    printf("Digite os elementos da matriz 4x4: \n");
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                {
                    printf("Elemento [%d][%d]: ", i, j);
                    scanf("%d", &matriz[i][j]);
                }
                //Transferência dos valores da matriz para o vetor
                for(int i = 0; i < 4; i++)
                    for(int j = 0; j < 4; j++)
                        {
                            vetor[k] = matriz[i][j];
                            k++;
                        }
                //inicializando maior e menor com o primeiro elemento do vetor
                maior = vetor[0];
                menor = vetor[0];
                //Verificação de maior e menor
                for(int i = 0; i < 16; i++)
                        {
                            if(vetor[i] > maior)
                                maior = vetor[i];
                            if (vetor[i] < menor)
                                menor = vetor[i];
                            //verificação de pares e impares
                            quoc = vetor[i] / 2;
                            resto = vetor[i] - (quoc * 2);
                            if (resto == 0)
                                qtdPares++;
                            else
                                qtdImpares++;
                        }
    //Exibição o matriz, vetor e resultados

    printf("\nMatriz 4x4:\n");
        for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++)
                
                    printf("\t%d", matriz[i][j]);
                
                puts("\n");
        }
        printf("Vetor de 16 elementos:\n");
        for (int i = 0; i < 16; i++)
            {
                printf("| %d", vetor[i]);
            }

        printf("\n\nMaior numero: %d", maior);
        printf("\nMenor numero: %d", menor);
        printf("\nQuantidade de numeros pares: %d", qtdPares);
        printf("\nQuantidade de numeros impares: %d", qtdImpares);


}//fim programa
