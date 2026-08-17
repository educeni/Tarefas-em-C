#include <stdio.h>
#include <string.h>
#define TAM 20
/*
Questão 06:
Dada uma string s, desenvolver uma função
recursiva que determine se s é ou não um
palíndromo.*/

int recursiva(char s[], int posInicial, int posFinal)
{
   // Caso Base 
   if(posFinal <= posInicial)
   {
   	 return 1;
   }
	// Caso Geral

		if(s[posInicial] != s[posFinal])
		{
			return 0;
		}

	return recursiva(s, posInicial+1, posFinal-1);
}

void main()
{
	char string[TAM];
	int posI = 0;
	
	printf("Forneca a string: \n");
	gets(string);
	
	int posF = strlen (string) - 1;
	
	if(recursiva(string, posI, posF)==1)
	{
		printf("E um palindromo.\n");
	}
	else
	{
		printf("Nao e um palindromo.\n");
	}
}
