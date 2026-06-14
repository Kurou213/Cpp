/*Nome: potenciaRec.cpp
Autor: Vinicius Lima
Data: 14/06/2026
Descrição: Programa que por meio de uma função recursiva sem usar pow
calcule base^expoente entre dois numeros inteiros positivos
*/

#include <stdio.h>

//prototipação
int potenciaRec(int base, int expoente);

main()
{
    int base, expoente;
    printf("Digite a base (numero inteiro positivo): "); scanf("%d", &base);
    printf("Digite o expoente (numero inteiro positivo): "); scanf("%d", &expoente);
    if(base < 0 || expoente < 0)
    {
        printf("Numero invalido. Por favor, digite numeros inteiros positivos.\n");
        return 1;
    }
    printf("%d elevado a %d eh: %d\n", base, expoente, potenciaRec(base, expoente));
    return 0;
}

int potenciaRec(int base, int expoente)
{
    if(expoente == 0)
        return 1;
    else
        return base * potenciaRec(base, expoente - 1);
}