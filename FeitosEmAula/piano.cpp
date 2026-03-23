/*
	Name: piano.cpp 
	Author: Vinicius Lima
	Date: 23/03/26 10:18
	Description: simulação de um teclado sonoro qualquer
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>

main()
{
	while(1){
	
	int tecla;
	tecla = getch();
	Beep(1000, 100);
	//printf("%c - %d", tecla, tecla);
}
}
