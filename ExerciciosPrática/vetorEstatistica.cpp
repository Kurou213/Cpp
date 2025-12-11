/*
Nome: vetorEstatistica.cpp
Autor: Vinicius Lima
Data: 01/12/25 20:59
Descrição: Programa que le um vetor de 20 elementos inteiros calcula maior
menor, media e quantidade de numeros acima da media.
*/

#include <stdio.h>

main()
{
int vet[5];
float media = 0.0;
int maior, menor, AcimaMedia;
maior = menor = AcimaMedia = 0;

//leitura dos elementos do vetor
printf("Digite 20 numeros inteiros para preencher o vetor: \n");
    for(int i = 0; i < 5; i++)
        {
            printf("Elemento %d: ", i + 1); scanf("%d", &vet[i]);
            media += vet[i]; //soma dos elementos para calcular a media

            if(i == 0)//inicializa maior e menor com o primeiro elemento
                {
                    maior = menor = vet[i];
                }
            else
            {
                if(vet[i] > maior)
                    maior = vet[i];
                if(vet[i] < menor)
                    menor = vet[i];                          
                

            }


        }
        //calculo da media
        media = media / 5;
        //calculo da quantidade de elementos acima
        for(int i = 0; i < 5; i++)
            {
                if(vet[i] > media)
                    AcimaMedia++;
            }

        //exibir os resultados 
        printf("\nMaior elemento: %d\n", maior);
        printf("Menor elemento: %d\n", menor);
        printf("Media dos elementos: %.2f\n", media);
        printf("Quantidade de elementos acima da media: %d\n", AcimaMedia);
        

}//fim programa
