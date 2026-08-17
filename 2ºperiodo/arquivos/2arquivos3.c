#include <stdio.h>
/* Questão 03:
Considerem dois arquivos textos, arqA e arqB,
contendo números inteiros, um por linha.
Implementar uma função que receba estes
arquivos e gere um terceiro – arqC – contendo, em
cada linha, cada valor do arqA acompanhado da
quantidade de vezes que ele aparece em arqB. */

// protótipo das funções
int novoArquivo(char arquivoA[], char arquivoB[]);
int contagemRepeticoes(char arquivoB[], int n);

// implementação das funções 
int novoArquivo(char arquivoA[], char arquivoB[])
{
	int i, validacao;
	FILE *arq1;
	FILE *arq2;
	FILE *arq3;
	
	arq1 = fopen(arquivoA, "r");
	arq2 = fopen(arquivoB, "r");
	arq3 = fopen("arqC.txt", "w");
	
	if((!arq1)||(!arq2)||(!arq3))
	{
		fclose(arq1);
		fclose(arq2);
		fclose(arq3);
		return -1;
	}
	else
	{
		while(fscanf(arq1, "%d", &i)!=EOF)
		{
			validacao = contagemRepeticoes(arquivoB, i);
			
			if(validacao == -1)
			{
				return -1;	
			}	
			fprintf(arq3, "%d %d\n",i, validacao);
		}
	}
	fclose(arq1);
	fclose(arq2);
	fclose(arq3);
	return 1;
}

int contagemRepeticoes(char arquivoB[], int n)
{
	int i, cont=0;
	FILE *arq2;
	
	arq2 = fopen(arquivoB, "r");
	
	if(!arq2)
	{
		return -1;
	}
	
	while(fscanf(arq2, "%d", &i)!=EOF)
	{
		if(i==n)
		{
			cont++;
		}
	}
	fclose(arq2);
	return cont;
}


void main()
{
	char nomeArquivoA[30], nomeArquivoB[30];
	
	printf("Forneca o nome do arquivo A: ");
	gets(nomeArquivoA);
	
	printf("\nForneca o nome do arquivo B: ");
	gets(nomeArquivoB);
	
	if(novoArquivo(nomeArquivoA, nomeArquivoB)==1)
	{
		printf("Arquivo C gerado com sucesso. \n\n");
	}
	else
	{
		printf("Arquivos nao foram abertos. \n\n");
	}
}
