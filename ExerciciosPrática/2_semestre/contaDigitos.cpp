/*
Nome: contaDigitos.cpp
Autor: Vinicius Lima
Data: 14/06/2026
Descrição: Programa que recebe um numero inteiro positivo 
e conta quantos dígitos tem esse numero por meio de uma função recursiva.
*/

#include <stdio.h>

//prototipação
int contaDigitos(int n);

main()
{
int num = 0;
printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
if(num < 0)
{
    printf("Numero invalido. Digite um numero inteiro positivo.\n");
    return 1;
}
printf("O numero tem %d digitos", contaDigitos(num));

}

int contaDigitos(int n)
{
	if(n == 0)
		return 0;
	else
		return 1 + contaDigitos(n / 10);
}
