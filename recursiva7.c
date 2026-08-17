#include <stdio.h>
#define TAM 30
/* Questão 07:
Desenvolver uma função recursiva que
determine o número de caracteres comuns
entre duas strings s1 e s2. */

int recursiva(char s1[], char s2[], qtd)
{
	
	if((s1[qtd]=='\0')||(s2[qtd]=='\0')
	{
		return 0;
	}
	else
	{
		
		return 1
		
	}
	
	return recursiva(s1,s2,qtd+1) + recursiva();
}


void main()
{
	char string[TAM];
	char string2[TAM];
	int qtd=0;
	
	printf("Forneca a string 1: ");
	gets(string);
	
	printf("Forneca a string 1: ");
	gets(string2);
}
