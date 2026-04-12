/*Nome: Fibonacci.cpp
Autor: Vinicius Lima
Data: 03/04/2026
Escreva um programa passe para uma função um numero inteiro positivo
e dentro dentro desta função seja possível armazenar, em um vetor, a quantidade de números da Sequência de Fibonacci. 
Após isso, este vetor carregado com a sequencia deve ser passado a uma outra função que fará a impressão de todos os elementos.
*/ 
#include <stdio.h>

void gerarFibonacci(int n, int fib[]);
void imprimirFibonacci(int n, int fib[]);

main()
{
    int n;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &n);
    if(n > 0)
    {
        int fib[n];
        gerarFibonacci(n, fib);
        imprimirFibonacci(n, fib);
    }
    else
    {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo. \n");
    }

}

void gerarFibonacci(int n, int fib[])
{    
    fib[0] = 0;
    if(n > 1)
    {
        fib[1] = 1;
        for(int i = 2; i < n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }        
    }

}

void imprimirFibonacci(int n, int fib[])
{
    printf("Sequencia de Fibonacci: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d", fib[i]);
        if(i != n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

