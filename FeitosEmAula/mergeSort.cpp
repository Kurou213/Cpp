/*
	Name: MergeSort.cpp
	Author: Vinicius Lima
	Date: 13/10/26 11:23
	Description: Implementação do metodo de ordenação Merge Sort
*/

#include <stdio.h>

//Seção de Prototipação
void mergeSort(int *, int, int); //Quebra tudo em uma unica unidade
void merge(int *, int, int, int); //Mescla todos os sub-vetores

main()
{
	int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int tam, i;
	
	tam = sizeof(vet)/sizeof(int);
	
	puts("Vetor original\n");
		for(i = 0; i < tam; i++){	
			printf("%d|", vet[i]);
		}
	
	//Invoke da Função Merge
	mergeSort(vet, 0, tam - 1);
		
	puts("\n\nVetor ordenado pelo Merge Sort: ");
		for(i = 0; i < tam; i++){
			printf("%d|", vet[i]);
		}
}

//Função recursiva para "quebrar" todo o conjunto de dados em diversos vetores "Lógicos" de um unico elemento
void mergeSort(int *V, int inicio, int fim)
{
	if(inicio < fim)
	{
		int meio = (inicio + fim) / 2; //Calcula o meio do conjunto de dados
		mergeSort(V, inicio, meio); //Divide o lado esquerdo
		mergeSort(V, meio + 1, fim); //Divide o lado direito
		merge(V, inicio, meio, fim);
	}
}
//função para juntar os sub-vetores dividos por mergeSort
void merge(int *V, int inicio, int meio, int fim)
{
	int i, j, k;
	i = j = k = 0;
	int n1, n2; //tamanho dos vetores temporarios	
	n1 = meio - inicio + 1;
	n2 = fim - meio;
	
	//Cria os vetores auxiliares- temporarioss
	int esquerdo[n1];
	int direito[n2];
	
	//copia os dados para os arrays temporarios
	for(i = 0; i < n1; i++)
	{
		esquerdo[i] = V[inicio + i];
	}
	for(j = 0; i < n2; i++)
	{
		direito[j] = V[meio + 1 + j];
	}
	//Mescla os arrays temporarios de volta para o vetor original
	i = 0; //índice inicial do primeiro subarray
	j = 0;// índice inicial do segundo subarray
	k = inicio; //índice inicial do subarray mesclado
	
	while(i < n1 && j < n2)
	{
	
		if(esquerdo[i] < direito[j])
		{
			V[k] = esquerdo[i];
			i++;
		}
		else 
		{
			V[k] = direito[j];
			j++;
		}
	k++;
	}
	
	//Copia os elementos restantes do vetor esquerdo[] se houver
	while(i < n1)
	{
		V[k] = esquerdo[i];
		i++;
		k++;
	}
	
	//copia os elemmentos restantes do vetor direito[] se houver
	while(j < n2)
	{
		V[k] = direito[j];
		k++;
		j++;
		
	}
}
