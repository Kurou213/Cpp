/*Nome: PalindromoRec.cpp
Autor: Vinicius Lima
Data: 15/06/2026
Descrição programa que por meio de uma função recursiva verifica se a string é palindromo
*/

#include <stdio.h>
#include <string.h>


//prototipação
int palRec(char str[], int inicio, int fim);

main()
{
    char str[100];
    printf("Digite alguma coisa: "); gets(str);
    if(palRec(str, 0, strlen(str) - 1))
        printf("A string eh um palindromo.\n");
    else
        printf("A string nao eh palindromo.\n");
    return 0;
    
    
}

int palRec(char str[], int inicio, int fim)
{
    if(inicio >= fim)
        return 1; //é palindromo
    if(str[inicio] != str[fim])
        return 0; //não é palindromo
    return palRec(str, inicio + 1, fim - 1);

}