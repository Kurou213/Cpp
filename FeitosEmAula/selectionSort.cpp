/*
	Name:  SelectionSort.cpp
	Author:	Vinicius Lima 
	Date: 22/09/26 10:37
	Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototipação
void selectionSort(int *, int);

//Variaveis globais
int qtdTrocas, qtdComp = 0;

main()
{
 //int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
 int vet[10];
 int tam, i;
 tam = sizeof(vet)/ sizeof(int);
 qtdComp = 0; qtdTrocas = 0;
 	
 	srand(time(NULL));
 	//Geração randômica de conteúdo do vetor
 	for(i = 0; i < tam; i++)
 	{
 		vet[i] = rand()%10000;
	 }
 	puts("Vetor Original:");
 	for(i = 0; i < tam; i++)
 		printf("%d|", vet[i]);
 		
    selectionSort(vet, tam); //invoke 
 	
 	puts("\n\nVetor ordenado pelo Selection Sort:");
 		for(i = 0; i < tam; i++)
 			printf("%d|", vet[i]);
 	
 	printf("\n\nQuantidade de elementos trocados ate a ordenacao: %d\n", qtdTrocas);
	printf("Quantidade de comparacoes ate a ordenacao: %d", qtdComp);
	
}

//função para ordenação com o metodo Selection Sort
void selectionSort(int *V, int Tam)
{
	int i, j; //Para controlar os laços de repetição
	int menor; //Guarda o indice do menor valor do subconjunto
	int chave, aux;
	qtdTrocas;
	qtdComp;
	
	//Laço externo que itera do início ao fim do vetor
	for(i = 0; i < Tam - 1; i++)
	{
		//Assume que o menor elemento está na primeira posição
		chave = i;
		menor = i + 1;
		
		//Laço interno para buscar o menor elemento dentro do subconjunto
		for(j = i + 1; j < Tam; j++)
		{
			if(V[j] < V[menor])
			menor = j; //Guarda o índice d
			qtdComp++;	
		}
	//troca o mnor elemento do subconjunto
	//pelo elemento destacado na chave
	
	if(V[menor] < V[chave])
	{
		aux = V[chave];
		V[chave] = V[menor];
		V[menor] = aux;
		qtdTrocas++;
	}	
	qtdComp++;	
	} 
	
}

