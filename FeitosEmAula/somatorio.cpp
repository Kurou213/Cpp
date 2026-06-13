/*Nome: somatorio.cpp
Autor: Vinicius Lima
Data: 13/06/2026
Descrição: Programa que por meio de uma função recursiva,
receba um numuero inteiro positivo N e calcule o somatorio dos numeros de 1 a N
*/
#include <stdio.h>

//prototipação
int somatorio(int N);

main()
{
    //Loop pro programa ficar em loop até o usuario digitar 0 para sair   
    int num;
    printf("Digite um numero inteiro positivo: "); scanf("%d", &num);
    printf("O somatorio dos numeros de 1 a %d eh: %d\n", num, somatorio(num));
    return 0;
    
}

int somatorio(int N)
{
    if (N == 1)
        return 1;
    else
        return N + somatorio(N - 1);
}