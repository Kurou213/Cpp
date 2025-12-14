/*Nome: treino5.cpp
Autor: Vinicius Lima
Data: 14/12/2025
Descrição: programa que o usuario digita um numero e imprime
todos os numeros pares até chegar no numero digitado
*/

#include <stdio.h>

main()
{
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    printf("numero pares de 0 ate %d: \n", numero);
    for(int i = 0; i <= numero; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        
    }

}//fim programa