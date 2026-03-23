/*
Nome: VetorPointer.cpp
Autor: Vinicius Lima
Data: 23/03/2026
Descrição: Exercício de vetores e ponteiros
*/

#include <stdio.h>

void imprimirVetor( int *vet, int tam);


main()
{
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Elementos do vetor usando ponteiros: \n");
    int tam = sizeof(vet) / sizeof(int);
    imprimirVetor(vet, tam);

}

void imprimirVetor( int *vetor, int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("%d|", vetor[i]);
        
    }
}