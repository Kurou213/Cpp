/*
	Name: TamanhoString.cpp
	Author: Vinicius Lima 
	Date: 28/10/25 11:04
	Description: Programa que retorna o tamanho de uma string
*/
 
#include <stdio.h>
#include <string.h>
 
main()
{
	char nome[30];
	int tamanho = 0;
	printf("Nome: "); gets(nome);
	tamanho = strlen(nome);
	printf("\n\nTamanho da string %d\n", tamanho);
	for(tamanho--; tamanho >= 0; tamanho--)
	{
		printf("%c|", nome[tamanho]);			
	}//fim for

}//fim programa