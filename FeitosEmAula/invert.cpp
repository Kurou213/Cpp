/*Nome: invert.cpp
Autor: Vinicius Lima
Data: 13/06/2026
Descrição: programa que recebe um numero inteiro N e por meio de uma função recursiva
inverta este numero*/

#include <stdio.h>

void invert(int N);

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("O numero invertido de %d eh: ", num);
    invert(num);
    printf("\n");

    return 0;
}

void invert(int N)
{
    if(N == 0)
        return;

    printf("%d", N % 10);
    invert(N / 10);
}
