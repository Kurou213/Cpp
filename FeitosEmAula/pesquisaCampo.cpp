/*
	Name: pesquisaCampo.cpp 
	Author: Vinicius Lima
	Date: 25/11/25 12:06
	Description: Programa que consegue diferenciar homens de mulheres em uma pesquisa
	de campo e contabilizar a idade media dos homens e das mulheres.
*/
#include <stdio.h>
 
main()
{
	int  idade = 0;
    char sexo;
    int contH, contM;
    int somaIdadeH, somaIdadeM;
    float mediaH, MediaM;
    contH = contM = 0;
    somaIdadeH = somaIdadeM = 0;   
    mediaH = MediaM = 0.0;

    for(int i = 0; i < 5; i++)
        {
            printf("Digite sua idade: "); scanf("%d", &idade);
            printf("Digite seu sexo (M/F): "); scanf(" %c", &sexo);
            if(sexo == 'M' || sexo == 'm')
                {
                    contH++;
                    somaIdadeH += idade;
                    mediaH = (float)somaIdadeH / contH;
                }
            else if(sexo == 'F' || sexo == 'f')
                {
                    contM++;
                    somaIdadeM += idade;
                    MediaM = (float)somaIdadeM / contM;
                }
                else
                {
                    printf("Sexo invalido! Digite M para masculino ou F para feminino.\n");
                    i--; // Decrementa i para repetir a iteração atual
                    continue;
                }
        }
        printf("\nQuantidade de homens: %d", contH);
        printf("\nQuantidade de mulheres: %d", contM);
        if(contH > 0)
        printf("\nIdade media dos homens: %.2f", mediaH);
        else
        printf("\nNao houve homens na pesquisa.");
        if(contM > 0)
        printf("\nIdade media das mulheres: %.2f", MediaM);
        else
        printf("\nNao houve mulheres na pesquisa.");
	}//fim programa
	

 