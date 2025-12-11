/*
	Name: P1Ex4.cpp 
	Author: Vinicius Lima
	Date: 25/11/25 10:55
	Description: Exercicio 4 da P1
*/
#include <stdio.h>
 
main()
{
	int x,b, pim, i;
	int cont = 0;
	x = 0;
	b = 3;
	pim = 25;
	for(i = 4; b < pim; i++){
		x = x + i;
		b = b + 2;
		pim = pim -x;
		cont++;
	}
	printf("x: %d", x);
	printf("\nb %d", b);
	printf("\npim: %d", pim);
	printf("\nQtas vezes passou no laco: %d", cont);
	
    
}//FIM PROGRAMA