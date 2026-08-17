#include <stdio.h>
#include <string.h>
/* Questão 10:
Implementar uma função recursiva que,
dados uma string str e um caracter ch,
remova de str todas as ocorrências de ch,
retornando o total de remoções realizadas. */

// prototipo das funcoes
int remocao(char str[], char ch);
int remocaoRec(char str[], char ch, int i, int remocoes);
void passagem(char s[], int i);


// implementação das funções
int remocao(char str[], char ch)
{
	int resp = remocaoRec(str, ch, 0,0);
	return resp;
}

int remocaoRec(char str[], char ch, int i, int remocoes)
{
	if(str[i] == '\0')	
	{
		return remocoes;
	}
	else
	{
		if(str[i] == ch)
		{
			passagem(str, i);
			return remocaoRec(str, ch, i, remocoes+1);
		}
		else
		{
			return remocaoRec(str, ch, i+1, remocoes);
		}
	}
}

void passagem(char s[], int i)
{
	for(;s[i]!='\0';i++)
	{	
		s[i] = s[i+1];
	}
	s[i-1] = '\0';
}

void main()
{
	char string[] = "teste"; // ese 	
	char c; 				
	int resp;
	
	printf("Forneca o caracter a ser removido:");
	scanf("%c", &c);
	
	resp = remocao(string, c);
	
	printf("Foram realizadas %d remocoes, a string ficou assim: %s\n", resp, string);
} 
