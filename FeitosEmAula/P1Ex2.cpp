/*
	Name: P1Ex2.cpp
	Author: Vinicius Lima
	Date: 25/11/25 10:21
	Description: Exercicio 2 da P1
*/
#include <stdio.h>
 
main()
{
	int quoc, num, resto;
	quoc = num = resto = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	quoc = num/2;
	resto = num - (quoc*2);
	if(num == 0)
		printf("\nResultado 1");
	else if (resto == 0)
		printf("\nResultado %d", num * 3);
	else
		printf("\nResultado %d", num * 2);
        
}//fim programa