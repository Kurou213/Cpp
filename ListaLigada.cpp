/*
	Name: ListaLigada.cpp
	Author: Vinicius Lima
	Date: 08/09/26 09:57
	Description: Programa para implementar um Lista Ligada contendo vários nós ( NODE )
*/

//Bibliotecas	
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

//Definição da estrutura de um nó
typedef struct No{
	char nome[20];
	int idade;
	No *prox;
}No;

// Variavél Global
int tamanho; // Armazenta o tamanho da lista

 //Seção de Prototipação
int vazia ( No *);
No *alocaMemoria();
void inserirNoFim(No *);
No *retirarNoFim(No *);
void inserirNoInicio(No *);
No *retirarNoInicio(No *);
void exibirLista(No *);
void iniciarLista(No *);
int menu();
void tratarOpcao(No *, int);

//Função Principal
main(){
	No *Lista = (No *) malloc(sizeof(No));
	if(!Lista)
	{
		puts("\n===> Sem memoria para criar a lista!!");
		exit(1);
	}else{
		int opc = 0;
		do{
			opc = menu();
			tratarOpcao(Lista, opc);
			system("pause");
			system("cls");			
		}while(opc);
	}
	
} // fim do programa

//Função para Exibir um menu de opções ao usuário | int menu();
int menu()
{
	int opc= 0;
	puts("\nEscolha sua Opcao:");
	puts("=========================================");
	printf("1 - Zerar a Lista\n"); 
	printf("2 - Exibir a Lista\n");
	printf("3 - Inserir elemento no INICIO da Lista\n"); 
	printf("4 - Inserir elemento no FIM da Lista\n");
	printf("5 - Excluir elemento do INICIO da Lista\n"); 
	printf("6 - Excluir elemento do FIM da Lista\n");
	printf("7 - Sair ...\n");
	puts("=========================================\n");
	printf("Opcao: ");scanf("%d", &opc);
	return opc;
}

//Função para Tratar as opções do Menu | void tratarOpcao(No *, int);
void tratarOpcao(No *Lista, int opc)
{
	No *temp; // Nó temporário
	switch(opc)
	{
		case 1: iniciarLista(Lista);
				break;
		case 2: exibirLista(Lista);
				break;
		case 3: inserirNoInicio(Lista);
				break;
		case 4: inserirNoFim(Lista);
				break;
		case 5: retirarNoInicio(Lista);
				break;
		case 6: retirarNoFim(Lista);
				break;
		case 7: exit(0);
		
		default:
				puts("Opcao Invalida - Verifique!!!");
				break;
		
	}// fim do switch
}

//Função para inciar a lista | void inciarLista(No *);
void iniciarLista(No *Lista)
{
	Lista->prox = NULL;
	tamanho = 0;
}

//Função que testa se a lista está vazia | vazia ( No *)
int vazia (No *Lista)
{
	if(Lista->prox == NULL && tamanho == 0)
		return 1; // A lista está vazia
	else
		return 0; // Não está vazia
}

//Função para alocar alocar a quantidade de memória para armazenar um nó | alocaMemoria()

No *alocaMemoria()
{
	No *novo = (No *) malloc(sizeof(No));
	if(!novo) // Caso não seja possivel alocar em memoria ( sem armazenamento )
	{
		puts("Sem Memoria disponivel para criar um novo No !!!");
		exit(1);
	}
	else 
	{
		printf("Nome: "); scanf("%s", &novo->nome);
		printf("Idade: "); scanf("%d", &novo->idade);
		return novo;
	}
}

//Função para inserir um Nó no fim da Lista
void inserirNoFim(No *Lista)
{
	No *novo = alocaMemoria();
	novo->prox = NULL;
	if(vazia(Lista))
		Lista->prox = novo;
		else
 	{
 		No *tmp = Lista->prox;
 		while(tmp->prox != NULL) tmp = tmp->prox;
 		tmp->prox = novo;
	 }
	tamanho++;
	puts("Elemento inserido no final da lista!");
}

No *retirarNoFim(No *Lista){
	if(Lista->prox == NULL){
		puts("A lista ja esta vazia!");
		return NULL;
	}
	else{
		No *ultimo = Lista->prox;
		No *penultimo = Lista;
		while(ultimo->prox != NULL){
			penultimo = ultimo;
				ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		tamanho--;
		return ultimo;
	}
}

//Função para inserir um Nó no inicio da lista
void inserirNoInicio(No *Lista)
{
	No *novo = alocaMemoria();
	No *head = Lista->prox;
	
	Lista->prox = novo;
	novo->prox = head;
	puts("Elemento inserido no INICIO da Lista com sucesso");
	tamanho++;
}

//Função para retirar um Nó do INÍCIO da Lista
No *retirarNoInicio(No *Lista)
{
	if(Lista->prox == NULL)
	{
		puts("\nA Lista esta vazia!!");
		return NULL;
	}
	else
	{
		No *tmp = Lista->prox;
		Lista->prox = tmp->prox;
		tamanho--;
		return tmp;
	}
}

//Função para exibir todo o conteúdo da Lista
void exibirLista(No *Lista)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Cor original
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	//salvar os atributos de cores
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes; //Salva a cor original
	if(vazia(Lista))
	{
		puts("\nLista vazia!!\n");
		return;
	}
	else
	{
		No *tmp;
		tmp = Lista->prox;
		printf("Lista: ");
			while(tmp != NULL)
			{
				printf("%s", tmp->nome);
				printf("%d", tmp->idade);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED); //Define a cor do texto
				printf("-->");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				
			tmp = tmp->prox;
			}
			printf("NULL\n\n");
	}
}
