/*Nome: FuncaoTriplicar.cpp
Autor: Vinicius Lima
Data: 23/03/2026
Descricao: programa que triplica valores de um vetor usando funcoes
*/

#include <stdio.h>

void triplicarVetor(int *vet, int tam);

main()
{
    int vet[] = {23, 66, 64, 242, 20};
    int tam = sizeof(vet) / sizeof(int);
    printf("Vetor original: \n");
    for(int i = 0; i < tam; i++)
        {
            printf("%d|", vet[i]);
        }
    printf("\nVetor triplicado: \n");
    triplicarVetor(vet, tam);
}

void triplicarVetor(int *vet, int tam)
{
    for(int i = 0; i < tam; i++)
        {
            vet[i] = vet[i] * 3;
            printf("%d|", vet[i]);
        }
}