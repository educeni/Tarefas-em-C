#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 30/04/2026

	Lista de Exercícios IX (Arquivos):
	
	Questão 02:
	Desenvolver uma função que, dado um arquivo texto, verifique o número 
	de vezes que um determinado caracter aparece no arquivo.*/

int quantidadeOcorrenciaCaracteres(char nomeArquivo[], char ch)
{
	FILE* a;
	int cont=0;
	char c;
	
	a = fopen (nomeArquivo, "r");
	
	if(a==NULL) // ou (!a)
	{
		return -1;
	}
	else
	{
		while (fscanf (a, "%c", &c) != EOF)
		{
			if(c==ch)
			{
				
			
			cont++;
		    }
		}
		fclose (a);
		return cont;
	}
}


void main()
{
	char nomeArquivo[30];
	int resp;
	char caracter;
		
	printf("Forneca o nome do arquivo: ");
	gets (nomeArquivo);
	printf("forneca o caracter: \n");
	scanf("%c", &caracter);
	
	resp = quantidadeOcorrenciaCaracteres(nomeArquivo, caracter);

	
	switch(resp)
	{
		case -1: printf ("\n\nErro na abertura do arquivo %s.", nomeArquivo);
				 break;
				 
		case  0: printf ("\n\nNao possui o caracter %c no arquivo %s!", caracter, nomeArquivo);
				 break;
		
		default: printf ("\n\nForam encontrados %d vezes o caracter %c no arquivo %s.", resp, caracter, nomeArquivo);
	}
} 


