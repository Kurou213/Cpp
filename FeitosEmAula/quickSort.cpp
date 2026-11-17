/*
	Name: QuickSort.cpp
	Author:	Vinicius Lima 
	Date: 17/11/26 10:45
	Description: programa para implementar o metodo de ordenação quickSort 
*/

#include <stdio.h>
#include <stdlib.h>


//Prototipação
void swap(int *, int *);
void quickSort(int *, int, int);
int partition(int *, int, int);

main()
{
	int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int i;
	int tam = sizeof(vet) / sizeof(int);
	
	puts("Vetor Original: ");
	for(i = 0; i < tam; i++)
		printf("%d|", vet[i]);
	
	quickSort(vet, 0, tam - 1);
	
	puts("\nVetor Ordenado pelo quick sort");

		for(i = 0; i < tam; i++)
			printf("%d|", vet[i]);	
}

//função que realiza as analises nas
//partições do conjunto de dados
int partition(int *V, int inicio, int fim)
{
	int pivot = V[inicio];
	int i = (fim + 1);
	
		for(int j = fim; j >= inicio + 1; j--)
		{
			if(V[j] >= pivot)
			{
				i--;
				swap(&V[i], &V[j]);
			}
		}
		swap(&V[i - 1], &V[inicio]);
		return(i - 1);
}




//função principal Quick Sort
void quickSort(int *V, int inicio, int fim)
{
	if(inicio < fim)
	{
		int pivot = partition(V, inicio, fim);
		quickSort(V, inicio, pivot - 1); //partição lado esquerdo
		quickSort(V, pivot + 1, fim); //partição lado direito
		
	}
}



//função para realizar a troca de elementos
//entre suas posições
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
	
}//fim swap

