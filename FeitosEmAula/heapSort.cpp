/*
	Name: HeapSort.cpp
	Author: Vinicius Lima
	Date: 10/11/26 10:54
	Description: Programa pra implementar metodo de ordenação Heap Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Seção de Prototipação
void heapfy(int *, int, int);
void heapSort(int *, int);
void swap(int*, int *);
void imprimir(int *);
int tam;

main()
{
	clock_t inicio, fim;
	double tempoDecorrido;
	//int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int vet[10000];
	int i;
	tam = sizeof(vet) / sizeof(int);
	
	//geração randomic de elementos
	srand(time(NULL)); //planta a semente aleatoria de acordo com o tempó
		for(i = 0; i < tam; i++)
		vet[i] = rand() % 10000;
	puts("Vetor Original: ");
	imprimir(vet);
	//captura tempo inicial
	inicio = clock();
	heapSort(vet, tam);
	fim = clock();
	tempoDecorrido = ((double)fim-inicio/CLOCKS_PER_SEC)/1000;
	puts("\nVetor Ordenado Pelo Heap Sort: ");
	imprimir(vet);
	
	printf("\n\n Tempo de ordenacao: %.3f", tempoDecorrido);
	
}//fim main
//função principal que monta a arvore e submete a função
//recursiva heapfy para verificar se as regras de max ou min heap 
//estão atendidas
void heapSort(int *V, int n)
{
	//1 Constroi um max Heap
	for(int i = n/2 - 1; i >= 0; i--)
		heapfy(V, n, i);
	
	//2 Troca a raiz com o ultimo elemento
	//e reduz a arvore
	for(int i = n - 1; i > 0; i--)
	{
		//Move o elemento atual (Maior - Max Heap)
		//para o fim do array
		swap(&V[0], &V[i]);
		//Invoca a função heapfy na raiz para restaurar
		//as propriedades do heap
		heapfy(V, i, 0);
	}	


}

void imprimir(int vet[])
{
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
	puts("");
}

//Função que realiza a troca do ultimo elemento com o primeiro da arvore
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
	
}
//Função que realiza o heapfy, ou seja, testa se o pai é maior que o filho (MAX Heap)
//ou se é menor que o filho (MIN Heap) e faz o "Swap! para fozer a troca entre eles.
void heapfy(int *V, int n, int i)
{
	//imprimir(vet);
	int maior = i;//inicializa o maior como sendo a raiz
	int esq = 2 * i + 1;//indice filho da esquerda
	int dir = 2 * i + 2;//indice filho da direita
	
	//se o filho é maior que o pai
	if(esq < n && V[esq] > V[maior])
		maior = esq;
		//se filho da direita for maior que o pai
	if (dir < n && V[dir] > V[maior])
		maior = dir;
		
	if(maior != i)
	{
		swap(&V[i], &V[maior]);
		//invoca recursivamente heapfy
		//na sub-árvore afetada
		heapfy(V, n, maior);
	}
}
