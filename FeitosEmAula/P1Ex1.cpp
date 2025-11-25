/*
	Name: P1Ex1.cpp
	Author: Vinicius Lima
	Date: 25/11/25 09:45
	Description: Correção do primeiro exercicio da primeira
	avaliação P1
*/
#include <stdio.h>
 
main()
{
	int qtdeAzulejos = 0;
	float areaAzulejo, areaParede;
	float altAz, largAz, altPar, largPar;
	altAz = largAz = altPar = largPar = 0.0;
	areaAzulejo = areaParede = 0.0;
	//medida do azulejo expresso em centimetros
	printf("Altura Azulejo: "); scanf("%f", &altAz);
	printf("Largura Azulejo: "); scanf("%f", &largAz);
	areaAzulejo = (altAz / 100) * (largAz / 100);
	//medida da parede espressa em metros
	printf("Altura Parede: "); scanf("%f", &altPar);
	printf("Largura Parede: "); scanf("%f", &largPar);
	//areaParede = (altPar * 100) * (largPar * 100);
	areaParede = altPar * largPar;
	//areaParede = areaParede * 10000;
	qtdeAzulejos = areaParede / areaAzulejo;
	printf("Para revestir uma parede de %.1f x %.1f", altPar, largPar);
	printf("\nSerao necessarios %d de azulejos", qtdeAzulejos);	
    
}//fim programa