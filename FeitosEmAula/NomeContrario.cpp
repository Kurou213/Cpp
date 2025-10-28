/*
	Name: NomeContrario.cpp
	Author: Vinicius Lima 
	Date: 28/10/25 10:30
	Description: Programa que armazena o nome em um vetor mostra ele ao contrario.
*/
#include <stdio.h>
 
main()
{
	char nome[50];
	int i, contchar;
	contchar = 0;
	printf("Digite seu nome: "); gets(nome);
		printf("\n\nSeu nome eh: %s ",  nome);
		//imprimindo o nome ao contrario
		for(i = 0; nome[i] != '\0'; i++)
		{
			if(nome[i] != ' ' && nome[i] != '.') 
			contchar++;
		}
	puts("\nNome ao contrario: ");
	for(i; i >= 0; i--)
	{
		printf("%c|", nome[i]);			
	}//fim for
	printf("\nSeu nome tem %d caracteres", contchar);
 
		
}//fim programa