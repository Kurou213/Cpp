/*
    Name: P1Ex1.cpp
    Author: Vinicius Lima
    Date: 25/11/25 09:45
    Description: Correção do primeiro exercício da P1
*/

#include <stdio.h>

main()
{
    int qtdeAzulejos = 0;
    float altAz, largAz, altPar, largPar;
    float areaAzulejo, areaParede;

    // Medidas do azulejo (em centímetros)
    printf("Altura do azulejo (cm): ");
    scanf("%f", &altAz);

    printf("Largura do azulejo (cm): ");
    scanf("%f", &largAz);

    areaAzulejo = (altAz / 100) * (largAz / 100);

    // Medidas da parede (em metros)
    printf("Altura da parede (m): ");
    scanf("%f", &altPar);

    printf("Largura da parede (m): ");
    scanf("%f", &largPar);

    areaParede = altPar * largPar;

    qtdeAzulejos = areaParede / areaAzulejo;

    printf("\nPara revestir uma parede de %.1f x %.1f metros", altPar, largPar);
    printf("\nSerão necessários %d azulejos", qtdeAzulejos);
}