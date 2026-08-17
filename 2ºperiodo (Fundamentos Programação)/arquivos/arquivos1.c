#include <stdio.h>
/* Questão 01:
Desenvolver uma função que, dado um arquivo
texto, verifique o número de caracteres no
mesmo. */

int quantidadeCaracteres(char nomeArquivo[])
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
			cont++;
			
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
	
	resp = quantidadeCaracteres(nomeArquivo);

	
	switch(resp)
	{
		case -1: printf ("\n\nErro na abertura do arquivo %s.", nomeArquivo);
				 break;
				 
		case  0: printf ("\n\nO arquivo %s esta vazio!", nomeArquivo);
				 break;
		
		default: printf ("\n\nForam encontrados %d caracteres no arquivo %s.", resp, nomeArquivo);
	}
} 


