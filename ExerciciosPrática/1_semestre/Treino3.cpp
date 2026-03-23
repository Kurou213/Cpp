/*Nome: Treino3.cpp
Autor: Vinicius Lima
Data: 11/12/2025
Descrição: Programa que o usuario digita o tamanho de um triangulo e fala se ele é equilatero, isosceles ou escaleno
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

main()
{
    char sair[5];
    float lado1, lado2, lado3;    

    while(1){       
        puts("Programa para identificar o tipo de triangulo.");
        puts("Digite 'sair' para encerrar o programa ou aperte ENTER para continuar.");
        fgets(sair, sizeof(sair), stdin);
        if(strcmp(sair, "sair") == 0){
            printf("Encerrando o programa...\n");
            Sleep(2000);
            break;
        }

    printf("Digite o primeiro lado do triangulo: "); scanf("%f", &lado1);
    
    printf("Digite o segundo lado do triangulo: "); scanf("%f", &lado2);

    printf("Digite o terceiro lado do triangulo: "); scanf("%f", &lado3);

    if(lado1 == 0 || lado2 == 0 || lado3 == 0){
            printf("Dado invalido, digite valores maiores que zero.\n");
            continue;
        }

    if(lado1 == lado2 && lado2 == lado3){
        printf("O triangulo eh equilatero. \n");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("o triangulo eh isosceles. \n");
    }
    else{
        printf("O triangulo eh escaleno. \n");
    }
    
    
    }
    
     
    


    
}
