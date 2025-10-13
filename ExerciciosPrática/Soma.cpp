/*Programa que soma numeros de 1 até N usando for. N é fornecido pelo usuário.
Autor: Vinicius Lima
Data: 11/10/2025
*/
#include <iostream>
#include <stdio.h>
//#include <windows.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int N, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        soma = soma + i;
    }
    printf("A soma dos numeros de 1 a %d é: %d", N, soma);
    
}