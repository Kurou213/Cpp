/*Nome: merge.cpp
Autor: Vinicius Lima
Data: 12/04/2026
Descrição:Elabore um programa em que sejam utilizadas funções 
para carregar duas "strings"por meio de funções separadas chamadas 
"cargaStringA" e "cargaStringB". Após as cargas das strings nos 
devidos vetores, o programa deverá efetuar por meio de uma função chamada "merge", 
uma mistura dos caracteres gerando assim uma nova string, armazenada em um novo vetor,
 com os dados encriptados. Considere o exemplo abaixo:
a. Entrada 1: Fatec Santana de Parnaiba
b. Entrada 2: Melhor cidade para viver
c. Saída do vetor Merge: FMaetlehco rScaindtadna…
*/

#include <stdio.h>

//prototipagem
void cargaStringA(char strA[]);
void cargaStringB(char strB[]);
void Merge(char strA[], char strB[], char strMerge[]);

main()
{
    char strA[150], strB[150], strMerge[250];
    cargaStringA(strA);
    cargaStringB(strB);
    Merge(strA, strB, strMerge);

}

void cargaStringA(char strA[])
{
    printf("Digite a string A:");
    gets(strA);
}

void cargaStringB(char strB[])
{
    printf("Digite a string B:");
    gets(strB);
}

void Merge(char strA[], char strB[], char Merge[])
{
    int i = 0, j = 0, k = 0;
    while (strA[i] != '\0' || strB[j] != '\0')
    {
        if (strA[i] != '\0')
        {
            Merge[k] = strA[i];
            i++;
            k++;
        }
        if (strB[j] != '\0')
        {
            Merge[k] = strB[j];
            j++;
            k++;
        }

    }
    Merge[k] = '\0';
    printf("Merge: %s", Merge);
}