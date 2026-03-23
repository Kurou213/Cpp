/*
	Name: TrocaValoresPorReferencia.cpp
	Author: Vinicius Lima  
	Date: 09/03/26 10:54
	Description: Programa para troca de valores
	entre variáveis com passagem de parâmetros
	por referência
*/

#include <stdio.h>

//Prototipação
void trocar(int *, int *);

main()
{
	int a, b;
	a = b = 0;
	puts("troca de valores com passagem de parametros por referencia");
	printf("A: "); scanf("%d", &a);
	printf("B: "), scanf("%d", &b);
	trocar(&a, &b);
	printf("\nA trocado: %d", a);
	printf("\nB trocado: %d", b);
	
	
	
}

void trocar(int *a, int *b)
{
	int aux;	
	aux = *a;
	*a = *b; 
	*b = aux;
}
