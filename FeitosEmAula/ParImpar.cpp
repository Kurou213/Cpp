/*Programa que lê 5 numeros 
e ve se os numeros são par ou impar somando 2 aos pares
e dividindo por 3 os impares.
Autor: Vinicius Lima
Data: 12/10/2025
*/

#include <iostream>
#include <stdio.h>

#include <windows.h>

main()
{    
    int num, cont, par;    
    cont = par = num = 0;
    do
    {
       printf("Digite um Numero: "); scanf("%d", &num);
         if(num % 2 == 0)
        printf("%d e Par. Somando 2: %d\n", num, num + 2);
        else
            printf("%d e Impar. Dividindo por 3: %.2f\n", num, (float)num / 3);
    cont++;          
    }while(cont < 5);
    
    
}