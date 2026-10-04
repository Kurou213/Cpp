/* Nome: insertionSort.cpp
    Autor: Vinicius Lima
    Data: 03/10/2026
    Descrição: programa para implementar a utilização do algoritmo de insertion Sort
*/

#include <stdio.h>

// Prototipação
void insertionSort(int arr[], int n);

// Variáveis globais
int qtdTrocas = 0, qtdComparacoes = 0;

main() {
    int arr[] = {23, 12, 17, 53, 20, 24, 157, 50, 81, -2, -7};
    int tam, i;

    tam = sizeof(arr) / sizeof(int);

    puts("Array original sem ordenacao: ");
    for (int i = 0; i < tam; i++) {
        printf("%d", arr[i]);

        if (i < tam - 1) {
            printf(", ");
        }
    }

    insertionSort(arr, tam);

    puts("\nArray ordenado com insertion sort: ");
    for (int i = 0; i < tam; i++) {
        printf("%d", arr[i]);

        if (i < tam - 1) {
            printf(", ");
        }
    }

    printf("\n\nQuantidade de trocas: %d", qtdTrocas);
    printf("\nQuantidade de comparacoes: %d\n", qtdComparacoes);
}

void insertionSort(int arr[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0) {
            qtdComparacoes++;

            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
                qtdTrocas++;
            }
            else {
                break;
            }
        }

        arr[j + 1] = key;
    }
}

