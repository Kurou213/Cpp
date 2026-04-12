/*
	Name: quadradoMagico.cpp
	Author: Vinicius Lima
	Date: 06/04/26 11:06
	Description: Programa que preenche uma matriz e fala se � um
	quadrado magico ou nao.
*/
#include <stdio.h>

void carregarMat();
void verificarMat(int mat[][3]);
void imprimirMat(int mat[][3]);

main()
{
	puts("Digite os valores da matriz quadrada: ");
	carregarMat();
	
}

void carregarMat()
{
	int mat[3][3];
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++)
			scanf("%d", &mat[i][j]);
	}
	verificarMat(mat);
	imprimirMat(mat);
			
}

void verificarMat(int mat[][3])
{

	int soma_ref = 0;

	//soma da primeira linha (referencia)
	for (int j = 0; j < 3; j++){
	soma_ref += mat[0][j];
	}

	//verificar linhas e colunas
		for(int i = 0; i < 3; i++){
			int soma_linha = 0;
			int soma_coluna = 0;
			for(int j = 0; j < 3; j++){
				soma_linha += mat[i][j];
				soma_coluna += mat[j][i];
			}
			if (soma_linha != soma_ref || soma_coluna != soma_coluna){
				puts("Nao e um quadrado magico.");
				return;
			}
		}
		//verificar diagonais
		int soma_diag1 = 0;
		int soma_diag2 = 0;
			for(int i = 0; i < 3; i++){
				soma_diag1 += mat[i][i];
				soma_diag2 += mat[i][2 - i];
			}
			if (soma_diag1 != soma_ref || soma_diag2 != soma_ref){
				puts("Nao e um quadrado magico.");
				return;
			}
			puts("Eh um quadrado magico.");
					
			
}

void imprimirMat(int mat[][3])
{
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%d\t", mat[i][j]);
		}
		puts("\n");
	}
}
