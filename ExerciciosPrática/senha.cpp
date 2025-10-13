/*Programa que o verifica se a senha é a correta
Autor: Vinicius Lima
Data: 12/10/2025 
*/
#include <iostream>
#include <stdio.h>

main ()
{
    int senha = 0;

    while (senha != 1234) {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1234) {
            printf("Senha incorreta!\n");
        }
        else
            printf("Senha Correta!\n");
    }
    return 0;

    
}