/*Nome: triangulo.cpp
Autor: Vinicius Lima
Data: 13/04/2026
Descrição: programa pede X,Y,Z e por meio de uma função verifica se os comprimentos podem formar um triangulo (cada lado for menor que a soma dos outros 2) e verifica se ele é 
equilatero(3 lados iguais)
isoceles ( 2 lados iguais)
escaleno ( 3 lados diferentes)
*/

#include <stdio.h>

//Sessão de prototipação
void triangulo(float x, float y, float z);

main()
{
    float x, y, z;
    printf("Digite os comprimentos dos lados do triangulo (X Y Z): ");
    scanf("%f", &x); scanf("%f", &y); scanf("%f", &z);
    triangulo(x, y, z);
}

void triangulo(float x, float y, float z)
{
    if (x > y + z || y > x + z || z > x + y)
    {
        printf("Nao eh um triangulo.\n");
    }

    if(x == y && y == z)
    {
        printf("O triangulo eh equilatero.\n");
    }
    else if (x != y && y != z)
    {
        printf("O triangulo eh escaleno.\n");
    }
    else
    {
        printf("O triangulo eh isosceles.\n");
    }
    
}