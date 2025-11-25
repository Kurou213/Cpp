/*
	Name: P1Ex3.cpp 
	Author: Vinicius Lima
	Date: 25/11/25 10:33
	Description: Exercicio 3 da P1
*/
 
#include <stdio.h>
 
main()
{
	int contAlunos, contTurmas;
	contAlunos = contTurmas = 0;
	float nota, somaNotas, mediaTurma;
	do
	{	
	printf("Calculo da media da %da turma: \n", contTurmas + 1);
	puts("===================================");
	somaNotas = 0;
	mediaTurma = 0;
	contAlunos = 0;
	while(contAlunos <5)
	{
		contAlunos++;
		printf("Nota %do aluno: ", contAlunos);
		scanf("%f", &nota);
		somaNotas = somaNotas + nota;		
	}
	mediaTurma = somaNotas / contAlunos;
	printf("\n ======> Media da turma: %.2f\n", mediaTurma);
	contTurmas++;
	}while(contTurmas < 3);

}//fim programa