#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 30/04/2026

	Lista de Exercícios IX (Arquivos):
	
	Questão 03:
	Desenvolver uma função que, dado um arquivo texto, verifique o número 
	de letras existentes no mesmo (entendendo que no arquivo podem 
	existir letras, algarismos e símbolos).*/

int quantidadeLetras(char nomeArquivo[])
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
			c = toupper (c);
			if((c>='A') && (c<='Z'))
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
		
	printf("Forneca o nome do arquivo: ");
	gets (nomeArquivo);
	
	resp = quantidadeLetras(nomeArquivo);

	
	switch(resp)
	{
		case -1: printf ("\n\nErro na abertura do arquivo %s.", nomeArquivo);
				 break;
				 
		case  0: printf ("\n\nNao possui letras no arquivo %s!", nomeArquivo);
				 break;
		
		default: printf ("\n\nForam encontrados %d letras no arquivo %s.", resp, nomeArquivo);
	}
} 


