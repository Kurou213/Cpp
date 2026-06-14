/*Nome: contarLinhas_txt.cpp
Autor: Vinicius Lima
Data: 14/06/2026
Descrição: programa que abre um arquivo de texto e conta o número de linhas 
*/
#include <stdio.h>

main()
{
    FILE *arquivo;
    char linha[100];
    int contador = 0;

    //abertura do arquivo para leitura
    arquivo = fopen ("nomes.txt", "r");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    //leitura do arquivo linha por linha e contagem das linhas
    while(fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        contador++;
    }
    printf("O numero de linhas no arquivo nomes.txt eh: %d\n", contador);
    //fechamento do arquivo
    fclose(arquivo);
    return 0;
    
}