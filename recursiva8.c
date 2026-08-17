#include <stdio.h>
#include <string.h>
/* Questão 08:
Desenvolver uma função recursiva que, dada
uma string, exiba-a invertida.*/

// prototipo das funcoes
void funcao(char string[]);
void funcaoRec(char string[], int i);

// implementação 
void funcao(char string[])
{
	funcaoRec(string, 0);	
}

void funcaoRec(char str[], int i)
{
	if(str[i]!='\0')
	{
		funcaoRec(str,i+1);
		printf("%c ", str[i]);			
	}
	
}

void main()
{
	char s[] = "teste";
	
	funcao(s);
	
}
