/*Nome: temperatura.cpp
Autor: Vinicius Lima
Data: 12/04/2026
Descrição: Faça um código em C em que por meio de uma função 
seja capaz de carregar um vetor com 20 temperaturas positivas 
e negativas distribuídas de forma aleatória. Após, em uma 
outra função que receba este vetor, imprima somente os valores 
que estiverem dentro do intervalo -5º a 22º, inclusive
.*/

#include <stdio.h>

//prototipagem
void carregarVetor(float vetor[20]);
void imprimirVetor(float vetor[20]);

main()
{
    float vetor[20];
    carregarVetor(vetor);
    imprimirVetor(vetor);
}

void carregarVetor(float vetor[20])
{
    for(int i = 0; i < 20; i++)
    {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void imprimirVetor(float vetor[20])
{
    printf("Temperaturas entre -5º e 22º: \n");
        for(int i = 0; i < 20; i++)
        {
            if(vetor[i] >= -5 && vetor[i] <= 22)
            {
                printf("%.2f° |", vetor[i]);
            }
        }
}