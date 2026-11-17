/*
	Name: bogoSort.cpp
	Author: Vinicius Lima
	Date: 17/11/26 11:24
	Description: Programa pra implementar o metodo de Ordenação "altamente
	eficiente" do bogo Sort usando de sorteios aleatorios e testes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//prototipação 
bool  is_sorted(int *, int); //está em ordem?
void  shuffle(int *, int); //embaralha
void bogoSort(int *, int);

main()
{
	int vet[] = {23, 12, 17, -2, 20, 24, 157, 50, 81, 53};
	int i;
	int tam = sizeof(vet) / sizeof(int);
	
	puts("Vetor original: ");
		for(i = 0; i < tam; i++)
			printf("%d|", vet[i]);	
	
		bogoSort(vet, tam);
		puts("\nVetor ordernado pelo bogoSort");
			for(i = 0; i < tam; i++)
				printf("%d|", vet[i]);
}

//função principal bogoSort
void bogoSort(int *V, int tam)
{
	while(!is_sorted(V, tam))
		shuffle(V, tam);
}

//função que embaralha os elementos no Vetor
void shuffle(int *V, int tam)
{
	int i, temp, r;
	for(i = 0; i < tam; i++)
	{
		temp = V[i];
		r = rand()%tam;
		V[i] = V[r];
		V[r] = temp;
	}
}

//função que testa se o vetor esta em ordem
bool is_sorted(int *V, int tam)
{
	while(--tam >= 1)
	{
		if(V[tam] < V[tam -1])
			return false;
	}
	return true;
}
