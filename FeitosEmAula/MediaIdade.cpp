/*Programa que lê 7 idades e calcula a media entre elas
Autor: Vinicius Lima
Data: 12/10/2025
*/
#include <iostream>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade, somaIdades, cont;
    float media = 0.0;
    idade = somaIdades = cont = 0;

    do{
        printf("Digite a idade: ");
        scanf("%d", &idade);
        somaIdades = somaIdades + idade;
        cont++;
    }while(cont < 7);
    media = (float)somaIdades / cont;
    printf("A media das idades é: %.3f", media);
}