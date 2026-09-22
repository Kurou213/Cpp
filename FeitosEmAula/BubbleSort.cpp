/*
	Name: BubbleSort.cpp
	Author: Vinicius Lima
	Date: 22/09/26 10:44
	Description: implementação do metodo de ordenação Bubble Sort
*/
#include <stdio.h>

//prototipações
void bubble(int *, int);

//Variaveis globais
int  trocas = 0;
int comp = 0; 

//programa
int main()
{
	int vet[] = {23, 12, 17, 53, 20, 24, 157, 50, 81, -2, -7};
	int tam;
	tam = sizeof(vet)/ sizeof(int);

	
	puts("Vetor Original Desordenado: ");
	for(int i = 0; i < tam; i++){
		printf("[%d] ", vet[i]);
	}
	
	bubble(vet, tam); //INVOKE
	
	puts("\n\nVetor Original Ordenado pelo Bubble Sort: ");
	for(int i = 0; i < tam; i++)
	{
		printf("[%d] ", vet[i]);
	}
	printf("\nNumeros de trocas: %d", trocas);
	printf("\nNumeros de comparacoes: %d", comp);
	
}//fim do programa

//FUNÇÕES
	
void bubble(int *vet, int tam)
{
	int inicio, fim, aux;
	fim = tam -1;
	inicio = 0;
	aux = 0;
	
	//MÉTODO DO BUBBLE PARA ORDENAR OS DADOS DO VETOR!
	while(inicio < fim)
	{
		for(int i = 0; i < fim; i++)
		{
			if(vet[i] > vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				trocas++;
			}
			comp++;
		}
		fim--;
	}
	
}//fim função

