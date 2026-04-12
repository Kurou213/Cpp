/*Nome: imcfunction.cpp
Autor: Vinicius Lima
Data: 05/04/2026
Descricao:  Em um programa receba sexo, altura e peso de pessoas e passe para
uma função calcular o IMC desta pessoa. O valor do apurado deve ser
passado para uma outra função que classifique este IMC de acordo
com atabela internacional da OMS que difere os cálculos para homens
e mulheres. Ao final o programa deve exibir:
"Você é HOMEM, seu IMC é: xx.xxx e você está xxxxxx"
"Você é MULHER, seu IMC é: xx.xxx e você está xxxxxx"
*/

#include <stdio.h>

void calcularIMC(char sexo, float altura, float peso);
void classificarIMC(char sexo, float imc);

main()
{
    char sexo;
    float altura, peso;
    printf("Digite seu sexo (M para masculino, F para feminino):");
    scanf(" %c", &sexo);
    printf("Digite sua altura em metros;");
    scanf("%f", &altura);
    printf("Digite seu peso em kg:");
    scanf("%f", &peso);
    calcularIMC(sexo, altura, peso);
}

void calcularIMC(char sexo, float altura, float peso)
{
    float imc = peso / (altura * altura);
    classificarIMC(sexo, imc);
}

void classificarIMC(char sexo, float imc)
{
    if (sexo == 'M' || sexo == 'm')
    {
        printf("Voce eh Homem, seu IMC eh: %.3f e voce esta ", imc);
        if (imc < 18.5)
        {
            printf("abaixo do peso ideal.\n");
        }
        else if (imc >= 18.5 && imc < 25)
        {
            printf("com peso ideal.\n");
        }
        else
        {
            printf("acima do peso ideal.\n");
        }
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf("Voce eh Mulher, seu IMC eh: %.3f e voce esta ", imc);
        if (imc < 18.5)
        {
            printf("abaixo do peso ideal.\n");
        }
        else if (imc >= 18.5 && imc < 25)
        {
            printf("com peso ideal.\n");
        }
        else
        {
            printf("acima do peso ideal.\n");}
    }
}
  