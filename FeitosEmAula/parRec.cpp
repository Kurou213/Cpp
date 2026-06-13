/*Nome: parRec.cpp
Autor: Vinicius Lima
Data: 13/06/2026
Descrição: programa que uma função recursiva recebe um numero inteiro positivo par N e imprima todos os numeros pares
de 0 até N em ordem decrescente
*/
#include <stdio.h>

void parRec(int N);

int main()
{
    int num;
    printf("Digite um numero inteiro positivo par: "); scanf("%d", &num);
    if(num < 0 || num % 2 != 0)
    {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo par.\n");
        return 1;
    }
    parRec(num);
    printf("\n");
    return 0;
}

void parRec(int N)
{
    if(N < 0)
        return;
    printf("%d ", N);
    parRec(N - 2);
}
