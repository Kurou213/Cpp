/*
Nome: temperaturaFuncao.cpp
Autor: Vinicius Lima
Data: 12/04/2026
Descricao: Exercício: Filtro de Telemetria de Hardware
Contexto: Você está desenvolvendo um módulo para um sistema de monitoramento. O programa deve ler as temperaturas de um processador capturadas em intervalos regulares e realizar uma análise de segurança.

O que o programa deve fazer:
Entrada de Dados: Peça ao usuário para digitar 10 valores de temperatura (números reais).

Processamento:

Calcule a Média Aritmética das temperaturas.

Identifique a Temperatura Máxima e a Mínima registrada.

Conte quantas vezes a temperatura excedeu 80°C (considerado alerta de superaquecimento).

Saída: Exiba um relatório formatado com:

A média das temperaturas.

O valor máximo e mínimo.

A quantidade de alertas de superaquecimento.

Uma mensagem final: Se a média for maior que 75°C, exiba "Status: Verifique o Sistema de Resfriamento". Caso contrário, "Status: Operação Normal"
.
*/

#include <stdio.h>


void lerTemp(float temp[], int tam);
void calcularMedia(float temp[], int tam);
void encontrarMax(float temp[], int tam);
void encontrarMin(float temp[], int tam);
void contarAlertas(float temp[], int tam);


main()
{
    float temp[10];
    int tam = sizeof(temp) / sizeof(float);
    lerTemp(temp, tam);
    calcularMedia(temp, tam);
    encontrarMax(temp, tam);
    encontrarMin(temp, tam);
    contarAlertas(temp, tam);
    
}

void lerTemp(float temp[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%f", &temp[i]);
    }    

}

void calcularMedia(float temp[], int tam)
{
    float soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma += temp[i];
    }
    printf("Media das temperaturas: %.2f\n", soma / tam);
    if (soma / tam > 75)
    {
        printf("Status: Verifique o sistema de resfriamento\n");
    }
    else
    {
        printf("Status: Operacao Normal\n");
    }
    
}

void encontrarMax(float temp[], int tam)
{
    float max = temp[0];
    for (int i = 1; i < tam; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
        }
    }
    printf("Temperatura Maxima: %.2f\n", max);
}

void encontrarMin(float temp[], int tam)
{
    float min = temp[0];
    for (int i = 1; i < tam; i++)
    {
        if (temp[i] < min)
        {
            min = temp[i];
        }
    }
    printf("Temperatura Minima: %.2f\n", min);
}

void contarAlertas(float temp[], int tam)
{
    int alertas = 0;
    for (int i = 0; i < tam; i++)
    {
        if (temp[i] > 80)
        {
            alertas++;
        }
    }
    printf("Quantidade de alertas de superaquecimento: %d\n", alertas);
}