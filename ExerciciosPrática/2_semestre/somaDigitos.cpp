/*Nome: somaDigitos.cpp
Autor: Vinicius Lima
Data: 14/06/2026
Descrição: programa que por meio de uma função recursiva
recebe um numero inteiro positivo e retorna a soma de seus dígitos
*/

#include <stdio.h>

//prototipação
int somaDigitos(int num);

main()
{
    int num;
    printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
    if(num < 0)
    {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }
    printf("A soma dos digitos de %d eh: %d\n", num, somaDigitos(num));
    return 0;
}

int somaDigitos(int num)
{
    if(num == 0)
        return 0;
    else
        return (num % 10) + somaDigitos(num / 10);    
}