#include <stdio.h>
#include <limits.h>
/*
	FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 30/04/2026

	Lista de Exercícios IX (Arquivos):
	
	Questão 04:
	Desenvolver uma função que, dado um arquivo texto contendo números, 
	determine se estes encontram-se ordenados crescentemente.
*/

int verificarOrdenacao(char nomeArquivo[])
{
	FILE* a;
	int num;
	int i = INT_MIN;
	
	a = fopen (nomeArquivo, "r");
	
	if(a==NULL) // ou (!a)
	{
		return -1;
	}
	else
	{
		while (fscanf (a, "%d", &num) != EOF)
		{

		  if(num<i)
		  {
		  	fclose (a);
		  	return 0;
		  }
		   i = num;
		}
		fclose (a);
		return 1;
	}
}


void main()
{
	char nomeArquivo[30];
	int resp;
		
	printf("Forneca o nome do arquivo: ");
	gets (nomeArquivo);
	
	resp = verificarOrdenacao(nomeArquivo);

	switch(resp)
	{
		case -1: printf ("\n\nErro na abertura do arquivo %s.", nomeArquivo);
				 break;
				 
		case  0: printf ("\n\nNao esta crescente o arquivo %s!", nomeArquivo);
				 break;
		
		default: printf ("\n\nEsta crescente o arquivo %s.", nomeArquivo);
	}
} 


