#include <stdio.h>
/* Questão 04:
Dado um arquivo texto, contendo números, um por
linha, desenvolver uma função que remova n
valores a partir da posição p do arquivo
(considerando que o primeiro valor está na posição
1). */

// protótipo das funções
int remocao(char nomeArquivo[], int p, int n);
int escrita(FILE *a, int n);
int copia(char nomeArquivo[], char nomeArquivoB[]);

// implementação das funções
int remocao(char nomeArquivo[], int p, int n)
{
	FILE *a;
	FILE *a2;
	int i, cont=1, resp;
	
	a = fopen(nomeArquivo, "r");
	a2 = fopen("novoArquivo.txt", "w");
	
	if((!a)||(!a2))
	{
		fclose(a);
		fclose(a2);
		return -1;
	}
	else
	{
		while(fscanf(a, "%d", &i)!=EOF)
		{
			if(cont==p)
			{
				resp = escrita(a, n);
				if(resp == -1)
				{
					return -1;
				}
				cont++;
			}
			else
			{
			
				fprintf(a2, "%d\n", i);
				cont++;
			}
		}
	}
	fclose(a);
	fclose(a2);
	resp = copia(nomeArquivo, "novoArquivo.txt");
	
	if(resp == -1)
	{
		return -1;
	}
	return 1;	
}

int escrita(FILE *a, int n)
{
	int cont = 0, i;
	
	if(!a)
	{
		return -1;
	}
	
	while(fscanf(a, "%d", &i)!=EOF)
	{	
		if(cont==n-1)
		{
			break;
		}
		cont++;
	}
	return 1;
}

int copia(char nomeArquivo[], char nomeArquivoB[])
{
	FILE *a;
	FILE *a2;
	int i;
	
	a = fopen(nomeArquivo, "w");
	a2 = fopen(nomeArquivoB, "r");
	
	if((!a)||(!a2))
	{
		fclose(a);
		fclose(a2);
		return -1;
	}
	
	while(fscanf(a2, "%d", &i)!=EOF)
	{
		fprintf(a, "%d\n",i);
	}
	fclose(a);
	fclose(a2);
	return 1;
}

void main()
{
	char nomeArquivo[30];
	int p, n;
	
	printf("Forneca o nome do arquivo: ");
	gets(nomeArquivo);
	
	printf("Forneca a posicao p. \n");
	scanf("%d", &p);
	
	printf("Forneca quantos valores deseja remover. \n");
	scanf("%d", &n);
	
	if(remocao(nomeArquivo, p, n) == -1)
	{
		printf("\nErro na abertura do arquivo. \n");
	}
	else
	{
		printf("Remocao realizada com sucesso. \n");
	}
}
