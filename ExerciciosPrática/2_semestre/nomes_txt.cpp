/*Nome: nomes_txt.cpp
Autor: Vinicius Lima
Data: 14/06/2026
Descrição: Programa que recebe 5 nomes de usuario
e grava os nomes num arquivo de texto chamado nomes.txt
*/

#include <stdio.h>

main()
{
    char nomes[5][50]; //matriz para os nomes
    FILE *arquivo;

    //leitura dos nomes
    for(int i = 0; i < 5; i++)
    {
        printf("Digite o nome do usuario %d:", i + 1);
        scanf("%s", nomes[i]);
    }
    //abertura do arquivo para escrita
    arquivo = fopen("nomes.txt", "w");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    //escrita dos nomes no arquivo
    for(int i = 0; i < 5; i++)
    {
        fprintf(arquivo, "%s\n", nomes[i]);
    }
    //fechamento do arquivo
    fclose(arquivo);
    printf("Nomes gravados com sucesso no arquivo nomes.txt\n");
    return 0;
}