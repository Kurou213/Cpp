/*
	Name: Matriz.cpp	
	Author: Vinicius Lima
	Date: 04/11/25 10:50
	Description: Programa para carregar uma matriz 3x3
*/
#include <stdio.h>
 
main()
{
	int mat[3][3];
	int i, j, ordem;
	ordem = 3;
	puts("Carga na Matriz 3x3: \n");
	i = 0;//indice da linha
	j = 0;//indice da coluna
	do
	{
		do{
			printf("[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			j = j +1;	
		}while(j < 3);
	i = i + 1;
	j = 0;
	}while(i < 3);
	puts("\nMatriz Carregada!!!");
	puts("\nConteudo da Matriz: ");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++)
				printf("\t%d ", mat[i][j]);
	puts("\n");
}
puts("\nElementos da diagonal Principal (DP): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		if(i == j)
			printf("%d ", mat[i][j]);
puts("\nElementos da diagonal Secundaria (DS): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		 if(i + j == ordem - 1)
		 	printf("%d ", mat[i][j]);
puts("\nElementos Acima da (DP): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)			
		 if(i < j)
		 	printf("%d ", mat[i][j]);
puts("\nElementos Abaixo da (DP): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)			
		 if(i > j)
			printf("%d ", mat[i][j]);
puts("\nElementos acima da (DS): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		if(i + j < ordem - 1)
			printf("%d ", mat[i][j]);		
puts("\nElementos abaixo da (Ds): ");
for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		if(i + j > ordem - 1)
			printf("%d ", mat[i][j]);
 
}//fim programa