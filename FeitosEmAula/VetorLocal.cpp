/*
	Name: VetorLocal.cpp
	Author: Vinicius Lima
	Date: 16/03/26 10:23
	Description: Programa para demonstrar a passagem de um vetor por parâmetro
	para uma função
*/
#include <stdio.h>

//seção de prototipação
void imprimirVetor(int *, int);
void imprimirVetorContrario(int *, int);
void somarVetores(int *, int *, int);

main()
{
	int vetor[] = {2, 102, 777, 103, 224};
	int vetor2[] = {245, 304, 67, 335, 10};
	int tam = sizeof(vetor) / sizeof(int);
	imprimirVetor(vetor, tam);
	puts("\n");
	imprimirVetor(vetor2, tam);
	puts("\n");
	//imprimirVetorContrario(vetor, tam);
	somarVetores(vetor, vetor2, tam);
	
}//FIM PROGRAMA

void imprimirVetor(int *V, int tam)
{	
	//puts("Conteudo do vetor: ");
	for(int i = 0; i < tam; i++)
		printf("%d|", V[i]);
}

void imprimirVetorContrario(int *VC, int tam)
{
	puts("\nConteudo do vetor ao contrario: ");
	for(int tam = tam - 1; tam >= 0; tam--)
		printf("%d|", VC[tam]);
}

void somarVetores(int *V1, int *V2, int tam)
{
	int soma[tam];
	puts("\nConteudo da soma dos vetores: ");
	for (int i = 0; i < tam; i++)
	soma[i] = V1[i] + V2[i];
	imprimirVetor(soma, tam);	
}
