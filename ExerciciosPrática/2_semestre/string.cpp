/*Nome: string.cpp
Autor: Vinicius Lima
Data: 13/04/2026
Descrição: programa le uma string e passa para uma função 
que imprimi a string ao contrario e subtrai as letras a,j,p,v. 
*/

#include <stdio.h>

//Sessão de prototipação
void string(char str[]);

main()
{
    char str[150];
    printf("Digite uma string: ");
    gets(str);
    string(str);   
}

void string(char str[])
{
    int i = 0;

    // acha o tamanho
    while(str[i] != '\0') i++;

    printf("String ao contrario: ");

    for(i = i - 1; i >= 0; i--)
    {
        if(str[i] != 'a' && str[i] != 'j' && str[i] != 'p' && str[i] != 'v')
        {
            printf("%c", str[i]);
        }
    }
}