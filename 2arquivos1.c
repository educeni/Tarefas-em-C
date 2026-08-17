#include <stdio.h>
/* Questão 01:
Desenvolver uma função que, dados dois arquivos
textos arqA e arqB, contendo números inteiros,
determine se possuem os mesmos valores
(independentemente da quantidade de
ocorrências), retornando 1 se possuírem ou 0, caso
contrário. */

//protótipo das funções
int buscar(char nomeArquivoB[], int n);
int funcao(char nomeArquivoA[], char nomeArquivoB[]);

//implementação das funções
int funcao(char nomeArquivoA[], char nomeArquivoB[])
{
	int n, n2;
	FILE* arqA;
	FILE* arqB;
	
	arqA = fopen (nomeArquivoA,"r");
	arqB = fopen (nomeArquivoB,"r");
	
	if((arqA==NULL)||(arqB==NULL)) // ou (!a)
	{
		fclose(arqA);
		fclose(arqB);
		return -1;
	}
	else
	{
		while (fscanf (arqA, "%d", &n) != EOF)
		{
			if(buscar(nomeArquivoB, n)==0)
			{
				fclose(arqA);
				fclose(arqB);
				return 0;
			}
		}
		while (fscanf (arqB, "%d", &n2) != EOF)
		{
			if(buscar(nomeArquivoA, n2)==0)
			{
				fclose(arqA);
				fclose(arqB);
				return 0;
			}
		}
		fclose(arqA);
		fclose(arqB);
		return 1;
	}
}

int buscar(char nomeArquivoB[], int n)
{
	int n2;
	FILE* arqB;
	arqB = fopen (nomeArquivoB,"r");
	
	while (fscanf (arqB, "%d", &n2) != EOF)
	{
		if(n==n2)
		{
			fclose(arqB);
			return 1;
		}
	}
	fclose(arqB);
	return 0;
}

void main()
{
	char arqA[30], arqB[30];
		
	printf("Forneca o nome do arquivo A: ");
	gets(arqA);
	printf("\n\nForneca o nome arquivo B: ");
	gets(arqB);
	
	if(funcao(arqA, arqB)==1)
	{
		printf("Os arquivos possuem os mesmos valores \n");
	}
	else if(funcao(arqA, arqB)==0)
	{
		printf("Os arquivos nao possuem mesmos valores \n");
	}
	else
	{
		printf("O arquivos nao abriram \n");
	}
}
