/*
nome: mercosul.cpp
autor: Vinicius Lima
data: 05/04/2026
Descrição:  Engendre um programa que receba a placa de um veículo já no modelo
do Mercosul, em formato string (use o gets) e, por meio de uma função,
analise mostre qual o dia do rodízio deste carro. Uma função
complementar deve pegar o horário da máquina e analisar se o carro
está dentro do horário do rodízio ou não. Lembrando que o rodízio é
das 7h às 10h no período da manhã e das 17h às 20h no período da
noite.
*/
#include <stdio.h>
#include <time.h>


void analisarPlaca(char placa[]);
void verificarRodizio();

main()
{
    char placa[8];
    printf("Digite a placa do veiculo (formato Mercosul):");
    gets(placa);
    analisarPlaca(placa);
    verificarRodizio();
}

void analisarPlaca(char placa[])
{
    char ultimoDigito = placa[6];
    printf("O ultimo digito da placa eh: %c\n", ultimoDigito);
    if(ultimoDigito == '1' || ultimoDigito == '2')
    {
        printf("O dia do rodizio deste carro eh segunda-feira.\n");
    }
    else if(ultimoDigito == '3' || ultimoDigito == '4')
    {
        printf("o dia do rodizio deste carro eh terca-feira.\n");
    }
    else if(ultimoDigito == '5' || ultimoDigito == '6')
    {
        printf("O dia do rodizio deste carro eh quarta-feira.\n");
    }
    else if(ultimoDigito == '7' || ultimoDigito == '8')
    {
        printf("O dia do rodizio deste carro eh quinta-feira.\n");
    }
    else if(ultimoDigito == '9' || ultimoDigito == '0')
    {
        printf("O dia do rodizio deste carro eh sexta-feira.\n");
    }
    else
    {
        printf("Placa invalida.\n");
    }
   

}

void verificarRodizio()
{
    time_t t = time(NULL);
    int hora = localtime(&t)->tm_hour;

    if((hora >= 7 && hora < 10) || (hora >= 17 && hora < 20))
    {
        printf("O carro esta dentro do horario do rodizio.\n");
    }
    else
    {
        printf("O carro nao esta dentro do horario do rodizio.\n");
    }
}
