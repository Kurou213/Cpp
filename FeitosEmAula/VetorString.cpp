/*
	Name: VetorString.cpp 		 
	Author: Vinicius Lima
	Date: 28/10/25 09:48
	Description: Programa para demonstrar a manipulação de strings
	por meio do vetor de caracteres
*/
#include <stdio.h>
 
main()
{
	char nome[30];
	int i, contaChar;
	contaChar = 0;
	printf("Digite seu nome: ");
	gets(nome);//gets lê uma string e getc lê char
		printf("\n\nSeu nome eh: %s", nome);
	//imprimindo cada posição do vetor de char
	puts("\nConteudo do vetor");
	for(i = 0; nome[i] != '\0'; i++){
		printf("%c|", nome[i]);
	if(nome[i] != ' ' && nome[i] != '.') 
			contaChar++;
	}//fim for
		printf("\nSeu nome tem %d caracteres", contaChar);
}//fim programa