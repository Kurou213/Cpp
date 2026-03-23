/*
	Name: MatrizReferencia.cpp 
	Author: Vinicius Lima 
	Date: 23/03/26 09:38
	Description: Programa que demonstra como passar um
	array bidimensional - matriz, como referencia à uma função
*/

#include <stdio.h>

//Seção de prototipação

void imprimirMatriz(int mat[][3]);

main()
{
	int mat[3][3] = 
	{
		{4, 6, 8},
		{7, 3, 1},
		{8, 9, 2}	
	};
	imprimirMatriz(mat);
	printf("\nElemento [2][1]: %d\t", mat[2][1]);
	
}//fim programa

//função para imprimir o conteudo da matriz
void imprimirMatriz(int M[][3])
{
	int i, j;
	i = j = 0;
	for(i = 0; i < 3; i++)
	{
	
		for(j = 0; j < 3; j++)
			printf("%d\t", M[i][j]);
		puts("\n");
	}
	M [2][1] = 200;
}

