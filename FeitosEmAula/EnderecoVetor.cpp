/*
	Name: EndereçoVetor.cpp
	Author: Vinicius Lima
	Date: 09/03/26 11:35
	Description: manipulação de endereços de memoria
	com vetores
*/
#include <stdio.h>

main()
{
	int vet[10];
	int i;
	int tamanho, tam;
	tamanho = sizeof(vet); 
	tam = sizeof(vet) / sizeof(int);
	printf("Tamanho de um inteiro: %d\n", sizeof(int));
	printf("Tamanho de um float: %d\n", sizeof(float));
	printf("Tamanho de um char: %d\n", sizeof(char));
	printf("Tamanho de um booleano: %d\n", sizeof(bool));
	printf("Tamanho de um double: %d\n", sizeof(double));
	printf("Tamanho do vetor em bytes: %d\n", tamanho);
	printf("quantidade de elementos do vetor: %d\n", tam);
	for(i = 0; i < 10; i++)
		printf("\n%d", &vet[i]);
	
	
}

