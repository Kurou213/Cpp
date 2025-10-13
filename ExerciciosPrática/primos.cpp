/*Programa que verifica se o número digitado é um número primo
Autor: Vinicius Lima
Data: 13/10/2025
*/

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, cont, divisores;
    cont = divisores = 0;
    while(1){ //loop infinito, para testes consecutivos        
        printf("Digite um numero inteiro positivo (0 para sair):  "); scanf("%d", &num);
if (num == 0) break; //sai do loop se o usuario digitar 0
    if(num < 1){
        printf("Numero invalido! Digite um numero inteiro positivo.");
            system("pause"); //pausa para o usuario ver a mensagem
                system("cls"); //limpa a tela
                    continue; //volta para o inicio do loop
    }

    else {

        divisores = 0; //zera o contador de divisores
        for(cont = 1; cont <= num; cont++){
            if(num % cont == 0){
                divisores++;
            }
        }
        if(divisores == 2)
            printf("%d e um numero primo.\n", num);
            else
                printf("%d nao é um numero primo.\n", num);

    system("pause"); //pausa para o usuario ver o resultado
    system("cls"); //limpa a tela
    }
}
    printf("FIM DO PROGRAMA!\n");
return 0;
}