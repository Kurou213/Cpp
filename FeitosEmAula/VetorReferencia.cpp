/*
	Name:  VetorReferencia.cpp
	Author: Vinicius Lima 
	Date: 16/03/26 09:44
	Description: Programa para implementar operações com arrays
	unidimensionais dentro de funções
*/
//seção de importação de bibliotecas
#include <stdio.h>

//Seção de prototipação
void imprimirVetG();
void imprimirVetGContrario();

//vetor global - variáveis globais
int vetG [] = {3, 9, 5, 8, 1};
int tam = 0;
main()
{
	
	tam = sizeof(vetG) / sizeof(int);
	printf("O vetor vetG tem %d elementos", tam);
	//Invoke
	imprimirVetG();
	imprimirVetGContrario();
}//FIM PROGRAMA

//Função para imprimir o vetor
void imprimirVetG()
{
	puts("\n\nConteudo do vetor vetG: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vetG[i]);
			
}
//Função para imprimir o vetor vetG ao contrário
void imprimirVetGContrario()
{
	puts("\nConteudo do vetor vetG ao contrario: ");
	for(tam = tam - 1; tam >= 0; tam --)
		printf("%d|", vetG[tam]);
		
}
