/*Nome: VetorImc.cpp
Autor: Vinicius Lima
Data: 26/12/25 16:19
Descricao: Programa que calcula o IMC de 5 pessoas e armazena os resultados em um vetor.
*/
#include <stdio.h>

main()
{    
    float peso, altura, imc[5];
    peso = altura = 0.0;

    for(int i = 0; i < 5; i++)
        {
            printf("Digite o peso da %d pessoa (em kg): ", i + 1); scanf("%f", &peso);
            printf("Digite a altura da %d pessoa (em metros): ", i + 1); scanf("%f", &altura);
            imc[i] = peso / (altura * altura);            
        }
        //exibir os resultados em formato de vetor
    printf("\nIMC das pessoas:\n");
    for(int i = 0; i < 5; i++)
        {
            printf("Pessoa %d: %.2f\n", i + 1, imc[i]);
        }
    //verificar qual é o maior e menor dos IMC's
    float maiorIMc = imc[0];
    float menorIMc = imc[0];
    for(int i = 1; i < 5; i++)
        {
            if(imc[i] > maiorIMc)
                {
                    maiorIMc = imc[i];
                }
            if(imc[i] < menorIMc)
                {
                    menorIMc = imc[i];
                }
        }
        printf("\nMaior ou menor IMC:\n");
        printf("Maior IMC: %.2f\n", maiorIMc);
        printf("Menor IMC: %.2f\n", menorIMc);
    
}//fim programa