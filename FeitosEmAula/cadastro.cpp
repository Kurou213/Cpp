/*
	Name: cadastro.cpp 
	Author: Vinicius Lima
	Date: 23/03/26 10:36
	Description: Fazer o cadastro de uma pessoa
	emitindo beeps ao final de cada entrada (dado lido)
*/
#include <stdio.h>
#include <windows.h>

main()
{
	char *nome;
	int idade;
	float altura, peso, imc;
	char sexo;
	int freq, tempo;
	freq = 1000;
	tempo = 100;
	
	printf("Nome: "), scanf("%s", &nome);
		Beep(freq, tempo);
	printf("Idade: ");	scanf("%d", &idade);
		Beep(freq, tempo);
	printf("Altura: "); scanf("%f", &altura);
		Beep(freq, tempo);
	printf("Peso: "); scanf("%f", &peso);
	Beep(freq, tempo);
	printf("Sexo: "); scanf(" %c", &sexo);
		Beep(freq, tempo);

	imc = peso / (altura * altura);
	
	if (imc < 18.5){

	
		printf("Voce esta com magreza");
		Beep(400, 250);
}   else if (imc < 24.9) {

		printf("Peso normal");
		Beep(900, 250);
}	else if	(imc < 29.9) {

		printf("Voce esta com sobrepeso");
		Beep(400, 250);
}	else if (imc < 39.9) {

		printf("Voce esta com obesidade tipo II");
		Beep(200, 250);
}
	else
		printf("Voce esta com obesidade tipo III");
		Beep(100, 250);
	
}

