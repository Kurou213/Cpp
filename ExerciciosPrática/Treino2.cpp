/*Nome: treino2.cpp
Autor: Vinicius Lima 
Data: 11/12/2025
Descricao: programa que calcula a media da nota de 5 alunos de 3 turmas
usando while e do while
*/
#include <stdio.h>

main()
{
    int alunos, turmas;
    float nota, somaNotas, mediaTurma, somaMedias, mediaFinal;
    turmas = 1;
    somaMedias = 0;
    while(turmas <= 3){
        alunos = 1;
        somaNotas = 0;
        do{
            printf("Digite a nota do aluno %d da turma %d: ", alunos, turmas);
            scanf("%f", &nota);
            somaNotas = somaNotas + nota;
            alunos++;
        }
        while(alunos <= 5);
        mediaTurma = somaNotas / 5;
        printf("Media da turma %d: %.2f\n", turmas, mediaTurma);
        somaMedias = somaMedias + mediaTurma;
        turmas++;
    }
    mediaFinal = somaMedias / 3;
    printf("\nMedia final das 3 turmas: %.2f\n", mediaFinal);
    
}//fim programa