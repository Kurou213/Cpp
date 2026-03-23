/*
	Name: trocaPorFuncao.cpp
	Author: Vinicius Lima
	Date: 09/03/26 10:17
	Description: Programa para trocar o valor entre duas variáveis
	usando função de troca 
*/

#include <stdio.h>
//seção de prototipação
void trocar(int, int);

	int a, b = 0;	

main()
{

	
	puts("Troca de valores entre variaveis utilizando funcao");
	printf("A: "); scanf("%d", &a);
	printf("B: "); scanf("%d", &b);	
	
	printf("valor antes da troca: A:%d B:%d\n", a, b);
	
	trocar(a, b);
	
	printf("Valor depois da troca: A:%d B:%d", a, b );
	
		
}
//Função para trocar os valores de duas variáveis
//entre elas
void trocar (int a, int b)
{
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
}
