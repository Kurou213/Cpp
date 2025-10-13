/*Programa que lê o sexo de 10 pessoas e informa quantas são casadas e quantas são solteiras.
Autor: Vinicius Lima
Data: 12/10/2025
*/
#include <iostream>
#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    char sexo, casado;
    int casadosM, solteirosM, casadosH, solteirosH;
    casadosM = solteirosM = casadosH = solteirosH = 0;
    int cont = 0;

    while (cont < 10) {
        printf("Sexo (M/F): \n"); scanf(" %c", &sexo);
        printf("Casado (S/N): \n"); scanf(" %c", &casado);

        if (sexo == 'M' || sexo == 'm')//é Homem
            if (casado == 'S' || casado == 's')// é casado
                casadosH++;
            else
                solteirosH++;
        else //é Mulher
            if (casado == 'S' || casado == 's')// é casada
                casadosM++;
            else
                solteirosM++;
    cont++;
    }
    printf("\nQtde de homens Casados: %d", casadosH);
    printf("\nQtde de homens Solteiros: %d", solteirosH);
    printf("\nQtde de mulheres Casadas: %d", casadosM);
    printf("\nQtde de mulheres Solteiras: %d", solteirosM);
    

}

