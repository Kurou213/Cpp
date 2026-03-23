/*Programa que conta do 1 até o numero digitado pelo usuario
com intervalo de 1 segundo entre a contagem
Autor: Vinicius Lima
Data: 13/10/2025
*/
#include <iostream>
#include <stdio.h>
#include <windows.h>

main()
{
    int num, cont;
    cont = 1;
    printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
    if(num < 1){
        printf("Numero invalido! Digite um numero inteiro positivo.");
    } else {
        system("cls");
        while(cont <= num){
            printf("%d\n", cont);
            cont++;
            Sleep(1000);
        }        
    }
    
}