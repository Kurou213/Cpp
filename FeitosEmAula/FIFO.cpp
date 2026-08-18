/*
	Name: FIFO.cpp
	Author: Vinicius Lima
	Date: 11/08/26 11:46
	Description: Implementação de uma dila do tipo FIFO - First IN / First OUT.
*/

#include<stdio.h>
#include<windows.h>

int itens[5];
int inicio = -1; int fim = -1;
int tam = 5;

void enQueue(int); // incrementa elemento na fila
int deQueue();     // decrementa elemento na fila
int isFull();      // verifica se esta cheia
int isEmpty();     // verifica se esta vazia
void showFIFO();   // mostra a fila

main(){
	
	int opc;
while (1){
	system("cls");
	puts("Menu para manipular a fila - FIFO");
	puts("=================================");
	puts("1 - inserir na FIFO\n2 - Retirar da FIFO\n3 - Exibir Fila\n4 - Sair...");						
	puts("=================================");
	printf("Escolha sua opcao: ");
	scanf("%d", &opc);
	
	switch(opc)
	{
		case 1: int elem;
				printf("\nDigite o elemento: ");
				scanf("%d", &elem);
				enQueue(elem);
				break;
		case 2: deQueue();
				break;
		case 3: showFIFO();
				break;
		case 4: exit(0);
		
		default: puts("Opcao invalida, escolha corretamente!!");				

		}//fim switch
	Sleep(1000);
	}//fim while
}//fim main
void enQueue(int elem){
if(isFull() == 1)
	puts("\nA fila esta Cheia");
	else
	{
		if(inicio == -1)
		inicio = 0;
		fim = (fim + 1)%tam;
		itens[fim] = elem;
		printf("\nElemento foi inserido na FIFO\n");
		
	}
}

int deQueue(){
	int elem;
	if(isEmpty() == 1)
	{
		puts("\nA fila esta Vazia!!!\n");
		return -1;
	}
	else
	{
		elem = itens[inicio];
		if(inicio == fim)
		{
			inicio = -1;
			fim = -1;
		}
		else{	
		inicio = (inicio + 1)%tam;
	}
}
	printf("\n%d foi retirado da FILA\n", elem);
	return elem;
}

int isFull(){
	if((inicio == (fim+1)%tam) || (inicio == 0 && fim == tam-1))
	return 1;
	return 0;
}

int isEmpty(){
	if(inicio == -1)
	return 1;
	return 0;
}

void showFIFO(){
	int i;
	if(isEmpty() == 1)
	
		puts("\n======>A FIFO esta vazia<======\n");
	
	else{	
		puts("\nConteudo da Fila:");
		for(i = inicio; i != fim;i = (i + 1)%tam)
		{
			printf("%d|", itens[i]);
		}
	}
}
