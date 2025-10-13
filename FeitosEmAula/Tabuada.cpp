/*Programa que recebe um numero de 1 até 10 e calcula a tabuada desse numero.
Autor: Vinicius Lima
Data: 11/10/2025

*/
 #include <locale.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>

main(){
    setlocale(LC_ALL, "Portuguese");
    int N;
    printf("Digite um numero inteiro positivo entre 1 e 10: ");
    scanf("%d", &N);
    if(N<1 || N>10){
        printf("Numero invalido! Digite um numero entre 1 e 10.");
    } else {
        for(int i=1; i<=10; i++){
            printf("%d x %d = %d\n", N, i, N*i);
        }
    }
    Sleep(1000);
}