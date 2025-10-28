/*
	Name: Palindromo.cpp
	Author: Vinicius Lima
	Date: 28/10/25 11:18
	Description: Programa que identifica se uma string
	é um palindromo
*/
#include <stdio.h>
#include <string.h>
 
main()
{
	char palavra[60];
	int tam, i, j;
	int flag = 1; //teste booleano
	printf("Digite uma palavra: "); gets(palavra);
	tam = strlen(palavra);
	j = tam - 1;
	for(i = 0; i <= j; i++)
		if(palavra[i] == palavra[j])
		{
			j--;
		}
		else
		{
			flag = 0;
			break;
		}
		if( flag == 1)
			puts("\nEh um palindromo!");
		else
			puts("\nNao eh palindromo!!!");

}//fim programa