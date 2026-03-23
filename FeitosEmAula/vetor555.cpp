/*
	Name: Vetor555.cpp
	Author: Vinicius Lima
	Date: 16/03/26 11:31
	Description: Programa para imprimir o conteudo de um vetor com o 555
	como interruptor
*/
#include <stdio.h>
//seção de prototipação
void interruptor(int *, int);

main()
{
	int vet[] = {102, 9, 555, 23, 56, 75, 555, 100, 555, 333, 60, 555, 24, 700, 18, 555, 56, 777, 555, 1000};
	int tam = sizeof(vet) / sizeof(int);
	for(int i = 0; i < tam; i++){	
		printf("%d|", vet[i]);
}
	puts("\nConteudo com interruptor: ");
	interruptor(vet, tam);
	
}//fim programa

void interruptor(int *vet, int tam)
{
	int flag = 1;
	for(int i = 0; i < tam; i++)	
	{
		if(flag == 1 && vet[i] != 555)
			printf("%d|", vet[i]);
		if(vet[i] == 555 && flag == 1)
			flag = 0;
		else if (vet[i] == 555 && flag == 0)
			flag = 1;
			
	}

}

