/*Programa que calcula a media de n notas usando for
Autor: Vinicius Lima
Data: 13/10/2025  */

#include <iostream>
#include <stdio.h>

main()
{
    int cont;
    float nota, soma, media;
    soma = media = nota = 0.0;
    
    for(cont = 0; ; cont++){
        printf("Digite a nota do aluno: "); scanf("%f", &nota);
        soma = soma + nota;
        if (nota == 0)
            break;
        

    }
    media = soma / cont;
    printf("A media das notas e: %.2f", media);
}