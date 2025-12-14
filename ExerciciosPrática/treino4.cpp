/*Nome: treino4.cpp
Autor:Vinicius Lima
Data: 14/12/2025
Descricao: Programa que o usuario digita os elementos de uma matriz 3x3
calcula a soma dos elementos, da diagonal principal e da diagonal secundaria
*/
#include <stdio.h>

main()
{
    int matriz[3][3];
    int soma, dp, ds, ordem;
    soma = dp = ds = 0;
    ordem = 3;

    printf("Digite os elementos da matriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            if(i == j){
                dp += matriz[i][j];            
            }
            if(i + j == ordem - 1){
                ds += matriz[i][j];
            }
        }
    }
    //matriz 3x3
    printf("\nMatriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\t%d", matriz[i][j]);
        }
        puts("\n");
    }
    //operaçoes
    printf("\nSoma do elementos da matriz: %d\n", soma);
    printf("Soma da diagonal principal: %d\n", dp);
    printf("Soma da diagonal secundaria: %d\n", ds);
    

}//fim programa