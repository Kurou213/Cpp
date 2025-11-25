/*
	Name: imcCidade.cpp 
	Author: Vinicius Lima
	Date: 25/11/25 11:17
	Description: Programa que solicita o imc de uma pessoa e armazena
	em um vetor para a população de 5000 pessoas.
*/
#include <stdio.h>
 
main()
{
	int i, cont;
	float peso, altura, imc[5];
 
	peso = altura =  0.0;
	cont = 0;

 
	
	for(i = 0; i < 5; i++)
	{
			puts("Calculo de IMC da cidade: ");
	printf("Digite seu peso: "); scanf("%f", &peso);
	printf("Digite sua altura: "); scanf("%f", &altura);
	imc[i] = peso / (altura * altura);
	}
	for(i = 0; i < 5; i++)
	{	
	printf("\nO IMC da %da pessoa eh: %.3f", cont + 1, imc[i]);
	cont++;
	}

}//fim programa