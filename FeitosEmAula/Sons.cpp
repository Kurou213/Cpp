/*
	Name: Sons.cpp
	Author: Vinicius Lima
	Date: 23/03/26 10:01
	Description: Programa para demonstrar a utilização
	da biblioteca que permite sons.
*/

#include <stdio.h>
#include <windows.h>

main()
{
	
	int freq, tempo;
	int i;
	freq = 900;
	tempo = 100;	
	while(1){
	
		for(i = 0; i < 20; i++)
	{
		Beep(freq, tempo);
		freq = freq - 50;
	}
	for(i = 20; i >= 0; i --)
	{
		Beep(freq, tempo);
		freq = freq + 50;
	}
	}
}

