/*Nome: pesoIdeal.cpp
Autor: Vinicius Lima
Data: 13/04/2026
Descrição: programa pede o sexo e altura do usuario
 e por meio de uma função verifica se esta no peso ideal(homens72.7 x alt-58) (mulheres 62.1 x alt - 44.7).
*/

#include <stdio.h>

//Sessao de prototipação
void pesoIdeal(float altura, char sexo);

main()
{
    float altura = 0.0;
    char sexo;
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);
    pesoIdeal(altura, sexo);

}

void pesoIdeal(float altura, char sexo)
{
    float pesoIdeal;
    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = 72.7 * altura - 58;
        printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);
    } 
    else if (sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = 62.1 * altura - 44.7;
        printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);
    }
    else
    {
        printf("Sexo invalido. por favor, digite M para masculino ou F para feminino.\n");
    }

}
