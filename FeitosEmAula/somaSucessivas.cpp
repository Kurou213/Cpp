/*Nome: somaSucessiva.cpp
Autor: Vinicius Lima
Data: 13/06/2026
Descricao: Programa que recebe dois numeros inteiros positivos e por meio
de uma função multip_rec(n1, n2), calcule a multiplicação desses dois inteiros. */

#include <stdio.h>

//prototipaçãp
int multip_rec(int n1, int n2);

main()
{
    int num1, num2;
    printf("Digite o primeiro numero inteiro positivo: "); scanf("%d", &num1);
    printf("Digite o segundo numero: "); scanf("%d", &num2);

    printf("A multiplicacao de %d e %d eh: %d\n", num1, num2, multip_rec(num1, num2));
    return 0;
}

int multip_rec(int n1, int n2)
{
    if (n2 == 1)
        return n1;
    else
        return n1 + multip_rec(n1, n2 - 1);
}