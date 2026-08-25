/*
	Name: LIFO.cpp 
	Author: Vinicius Lima 
	Date: 25/08/26 11:25
	Description: 
*/

#include <stdio.h>
#include <windows.h>


//prototipação
void push(int);
int pop();
int isFull();
int isEmpty();
void showLIFO();

//variaveis globais
int topo = -1;
int pilha[5];

main()
{
	int opc;
	while(1){
	system("cls");
	puts("Menu para manipular a pilha - LIFO");
	puts("==================================");
	puts("1 - Inserir na LIFO\n2 - Retirar da LIFO\n3 - Exibir Pilha\n4 - Sair...");
	puts("==================================");
	printf("Escolha sua opcao: ");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: int elem;
				printf("\nDigite o elemento: ");
				scanf("%d", &elem);
				push(elem);
				break;
		case 2: pop();
				break;
		case 3: showLIFO();
				break;
		case 4: exit(0);
		
		default: puts("Opcao invalida, escolha denovo");
			
	}//fim switch
	Sleep(1000);
	}//fim while
}

void push(int elem)
{
	if(isFull() == 1)
		puts("\nStack overflow - Pilha Cheia!!");
	else
	{
		topo++;
		pilha[topo] = elem;
		printf("\n=====>O elemento %d foi inserido na Pilha\n", elem);
	}
}

int pop()
{
	if(isEmpty() == 1)
	puts("\nA Pilha esta vazia");
	else
	{
		int elemento; 
		elemento = pilha[topo];
		topo--;
		printf("\n=======>O elemento %d foi retirado da Pilha\n", elemento);
		return elemento;
	}
}

int isFull()
{
	if(topo == 4)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if(topo == -1)
		return 1;
	else
		return 0;
}

void showLIFO()
{
	if(isEmpty() == 1)
		puts("Pilha Vazia!!");
	else
	{
		
	for(int i = topo; i >= 0; i--)	
		printf("[%d]\n", pilha[i]);
	}
}

