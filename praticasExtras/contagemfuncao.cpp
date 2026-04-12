/*Nome: contagemfuncao.cpp
Autor: Vinicius Lima
Data: 03/04/2026
Escreva um programa que receba um número inteiro, passe para umafunção e que faça a seguinte verificação:
a. Se o número é positivo, senão exibe uma mensagem solicitando um novo número ao usuário e fica em loop. 
b. O número sendo válido, exibir uma contagem regressiva comoseu equivalente negativo, ou seja, caso seja digitado o valor 3, exibir: 3, 2, 1, 0, -1, -2, -3. 
c. O programa deve finalizar quando o usuário der entrada como número 0 (zero).
*/
#include <stdio.h>

void contagemRegressiva(int num);

main()
{
    int num;
    do
    {
        printf("\nDigite um numero inteiro (0 para sair):");
        scanf("%d", &num);
        if(num > 0)
        {
            contagemRegressiva(num);
        }
        else if(num < 0)
        {
            printf("Numero invalido. Por favor, digite um numero positivo. \n");
        }
        }while(num != 0);
    }

void contagemRegressiva(int num)
{
    for(int i = num; i >= -num; i--)
    {
        printf("%d", i);
        if(i != -num)
        {
            printf(", ");
        }

    }
}