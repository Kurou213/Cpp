/*
	Name:   MultiplicacaoMatrizes.cpp
	Author: Vinicius Lima 
	Date: 11/11/25 09:40
	Description: Programa para realizar a multiplicação de matrizes
	com os dados fornecidos pelo usuário
*/
 
#include <stdio.h>
#include <stdlib.h>
 
main()
{
	int linA, colA, linB, colB; //indices das matrizes
	linA = colA = linB = colB = 0;
	puts("Programa para multiplicacao de matrizes");
	printf("\nNumero de linhas da Matriz A: ");
		scanf("%d", &linA);
	printf("\nNumero de colunas da Matriz A: ");
		scanf("%d", &colA);
	printf("\nNumero de linhas da Matriz B: ");
		scanf("%d", &linB);
	printf("\nNumero de colunas da Matriz B: ");
		scanf("%d", &colB);	
	if (colA != linB)
	{
		puts("NAO E POSSIVEL MULTIPLICAR AS MATRIZES!!");
		exit(0);
	}	

		puts("\nDigite os valores para as matrizes: ");
	int matA[linA][colA], matB[linB][colB], matAB[linA][colB];
		puts("\nMatriz A: ");
			for(int i = 0; i < linA; i++)
				for(int j = 0; j < colA; j++){
					printf("[%d][%d]: ", i, j);
					scanf("%d", &matA[i][j]);
					}
		puts("\nMatriz B: ");
			for(int i = 0; i < linB; i++)
				for(int j = 0; j < colB; j++){
					printf("[%d][%d]: ", i, j);				
					scanf("%d", &matB[i][j]);			
			}
		//laço matriz AB
		puts("\nMatriz AB: ");
        	for(int i = 0; i < linA; i++)
				for(int j = 0; j < colB; j++){
					matAB[i][j] = 0;
					for(int k = 0; k < colA; k++)
						matAB[i][j] += matA[i][k] * matB[k][j];
				}		
		puts("\n====> Matrizes Carregadas! <====");

	puts("\nMatriz A:");
	puts("===========");
	for(int i = 0; i < linA; i++)
	{
		for(int j = 0; j < colA; j++)
			printf("\t%d", matA[i][j]);
	puts("\n");
	}
	puts("\nMatriz B:");
	puts("===========");
	for(int i = 0; i < linB; i++)
	{
		for(int j = 0; j < colB; j++)
			printf("\t%d", matB[i][j]);
	puts("\n");
	}
	puts("\nMatriz AB:");
	puts("============");
	for(int i = 0; i < linA; i++){
		for(int j = 0; j < colB; j++)		
			printf("\t%d", matAB[i][j]);
	puts("\n");
	}
				
}//fim programa