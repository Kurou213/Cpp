/*
	Name: trocavariavelglobal.cpp
	Author: Vinicius Lima
	Date: 09/03/26 10:41
	Description: programa 
*/

#include <stdio.h>
//seção de prototipação
void trocar();

//variaveis globais
int a, b;	


main()
{
	a = b = 0;
		
	puts("Troca de valores entre variaveis utilizando funcao");
	printf("A: "); scanf("%d", &a);
	printf("B: "); scanf("%d", &b);	
	
	printf("valor antes da troca: A:%d B:%d\n", a, b);
	
	trocar();
	
	printf("Valor depois da troca: A:%d B:%d", a, b );
	
		
}
//Função para trocar os valores de duas variáveis
//entre elas
void trocar ()
{
	int aux = 0;
	aux = a;
	a = b;
	b = aux;
}

