/*
	Name:  VetorReferencia.cpp
	Author: Vinicius Lima 
	Date: 16/03/26 09:44
	Description: Programa para implementar opera��es com arrays
	unidimensionais dentro de fun��es
*/
//secao de importacao de bibliotecas
#include <stdio.h>

//Secao de prototipacao
void imprimirVetG();
void imprimirVetGContrario();

//vetor global - variaveis globais
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

//Fun��o para imprimir o vetor
void imprimirVetG()
{
	puts("\n\nConteudo do vetor vetG: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", vetG[i]);
			
}
//Funcao para imprimir o vetor vetG ao contrario
void imprimirVetGContrario()
{
	puts("\nConteudo do vetor vetG ao contrario: ");
	for(tam = tam - 1; tam >= 0; tam --)
		printf("%d|", vetG[tam]);
		
}
