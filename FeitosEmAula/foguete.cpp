/*Programa que o usuario digita um numero e começa uma contagem regressiva
no final exibindo FOGO!! usando For
Autor: Vinicius Lima
Data:13/10/2025
*/
#include <iostream>
#include <stdio.h>
#include <windows.h>

main()
{
    int num;
    printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
    if(num < 1){
        printf("Numero invalido! Digite um numero inteiro positivo.");
    } else {
        system("cls");
        for(int cont = num; cont >= 1; cont--){
            printf("%d\n", cont);
            Sleep(1000);
        }
        printf("FOGO!!\n");
        Sleep(1000);
    }
}