/*Programa que começa uma contagem regressiva mostrando os numeros na tela
com intervalo de um segundo entre os numeros
Autor: Vinicius Lima
Data: 13/10/2025
*/
#include <iostream>
#include <stdio.h>
#include <windows.h>

main()
{
    int num, cont;
    num = cont = 0;
        printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
    if(num < 1){
        printf("numero invalido! Digite um numero inteiro positivo.");
    } else {
        system("cls");
        for(cont = num; cont >= 1; cont--){
            printf("%d\n", cont);
            Sleep(1000);
        }
    }
}