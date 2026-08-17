#include <stdio.h>
#include <string.h>
/* Questão 10:
Implementar uma função recursiva que,
dados uma string str e um caracter ch,
remova de str todas as ocorrências de ch,
retornando o total de remoções realizadas.*/

//protótipo das funções
int funcao(char s[], char c);
int funcaoRec(char str[], char ch, int i, int remocoes);
void passagem(char string[], int i);
void exibirString(char s[]);

// implementação das funções
int funcao(char s[], char c)
{
	int resp = funcaoRec(s, c, 0, 0);
	return resp;
}

int funcaoRec(char str[], char ch, int i, int remocoes)
{
	if(str[i]=='\0')
	{
		return remocoes;
	}
	else
	{
		if(str[i]==ch)
		{
			passagem(str, i);
			return funcaoRec(str, ch, i+1, remocoes+1);		
		}
		else
		{
			return funcaoRec(str, ch, i+1, remocoes);	
		}
	}
}

void passagem(char string[], int i)
{
	int tamanho = strlen(string);
	int j;
	
	for(j=tamanho;j>i;j--)
	{
		string[j-1] = string[j];	
	}
}

void exibirString(char s[])
{
    int i;
    
    printf("\nAssim ficou a string:\n");
    for(i=0; s[i]!='\0';i++)
    {
        printf("%c", s[i]);
    }
}

void main()
{
	char st[30];
	char ch;
	int resp;
	
	printf("Forneca a string: ");
	gets(st);
	
	printf("Forneca o caracter: \n");
	scanf("%c", &ch);
	
 	resp = funcao(st, ch);
 	printf("Foram realizadas %d remocoes. ", resp);
 	exibirString(st);
 	
}
