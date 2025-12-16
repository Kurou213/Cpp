/*Autor: Vinicius Lima
* Data: 15/12/2025
* Descrição: Programa que o usuário carrega um vetor usando REPITA ATÉ
* e mostre no final
*/
#include <stdio.h>

main()
{
    int vet[10], i;
    i = 0;

    printf("Digite 10 numeros inteiros: \n");
    do{
        printf("Elemento [%d]: ", i + 1);
        scanf("%d", &vet[i]);
        i++;
    }while(i < 10);    
    //mostrar vetor carregado
    puts("==========================");
    
    for(int i = 0; i < 10; i++)
        printf("%d |", vet[i]);
    

}//fim programa