#include <stdio.h>
#include <string.h>

/* Questão 07:
Implementar uma função recursiva que verifique se uma string s1 é igual à string s2, porém invertida. */

// prototipo das funcoes
int identico(char s1[], char s2[]);
int identicoRec(char s1[], char s2[], int i, int t);

// implementação das funcoes
int identico(char s1[], char s2[])
{
	int t = strlen(s2);
	int resp = identicoRec(s1, s2, 0, t-1);
	return resp;
	
}

int identicoRec(char s1[], char s2[], int i, int j)
{
	//caso base
	if(s1[i] == '\0')
	{
		return 1;
	}
	else
	{
		if(s1[i]!=s2[j])
		{
			return 0;
		}
		else
		{
			return identicoRec(s1, s2, i+1, j-1);
		}
	}
}

void main()
{
	char s1[] = "subinoonibus";  
	char s2[] = "subinoonibus";
		
	if(identico(s1, s2)==1)
	{
		printf("As strings sao identicas. \n");
		
	}
	else
	{
		printf("As strings sao diferentes. \n");
	}
}
