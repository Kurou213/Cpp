/*
Nome: FuncoesPonteiros.cpp
Autor: Vinicius Lima
Data: 23/03/2026
descrição: Exercício de funções e ponteiros
*/

#include <stdio.h>

//seção de prototipos
void multiplicar(int *a, int *b, int *resultado);

main()
{
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    multiplicar(&num1, &num2, &resultado);

}

void multiplicar(int *a, int *b, int *resultado)
{
    *resultado = (*a) * (*b);
    printf("O resultado da multiplicacao eh: %d\n", *resultado);
}