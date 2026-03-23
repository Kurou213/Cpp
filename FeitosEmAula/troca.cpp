/*
	Name:  troca.cpp
	Author: Vinicius Lima
	Date: 09/03/26 09:46
	Description: programa para efetuar a troca de valores entre variáveis
*/

#include <stdio.h>

int c, d; //variaveis globais
main()
{	
	int a, b, aux; //variáveis locais
	a = b = aux = 0;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	puts("Conteudo das variáveis antes da troca\n");
	printf("Valor de A: %d\n", a);
	printf("Valor de B:% d\n", b);
	
	//fazendo a troca de valores
	aux = a;
	a = b;
	b = aux;	
	
	puts("Conteudo das variáveis depois da troca: ");
	printf("A: %d", a);
	printf("\nB: %d", b);
		

	
}

