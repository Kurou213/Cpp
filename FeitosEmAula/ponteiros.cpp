/*
	Name: ponteiro.cpp
	Author: Vinciius Lima
	Date: 09/03/26 11:15
	Description: Operações com ponteiros
	(apontadores para endereços de memoria)
*/
#include <stdio.h>

main(){
	int a, b, c;
	//a = 95;
	//b = 24;
	//c = 67;
	
	printf("Conteudo de A: %d\n ", a);
	printf("Conteudo de B: %d\n ", b);
	printf("Conteudo de C: %d\n ", c);
    
    puts("Endereco de memoria em decimal: \n");
	printf("Endereco de de A: %d\n ", &a);
	printf("Endereco de de B: %d\n ", &b);
	printf("Endereco de de C: %d\n ", &c);
	
	puts("Endereco de memoria em hexadecimal: \n");
	printf("Endereco de de A: %p\n ", &a);
	printf("Endereco de de B: %p\n ", &b);
	printf("Endereco de de C: %p\n ", &c);
}
