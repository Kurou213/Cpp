/*
	Name: aleatorio.cpp
	Author: Vinicius Lima
	Date: 23/03/26 11:19
	Description: Gerador de numeros aleatorios
*/
#include <stdio.h>
#include <windows.h>
#include <time.h>

main()
{
	
	int num;
	int vet[100];
	int freq, tempo;
	srand(time(NULL)); //semente de acordo com o tempo
	tempo = 250;
	//alimentando vetor com numeros aleatorios
	for(int i = 0; i < 100; i++)
		vet[i] = rand()%6+1;
	//conteudo do vetor
	for(int i = 0; i < 100; i++)
		printf("%d|", vet[i]);
		
	for(int i = 0; i < 100; i++)
	{
	
		printf("%d|", vet[i]);
		freq = vet[i] * 50;
		Beep(freq, tempo);
	}
	
}

