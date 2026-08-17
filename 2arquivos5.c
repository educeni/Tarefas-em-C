#include <stdio.h>
/* Questão 05:
Desenvolver uma função que, dado um arquivo
texto contendo números inteiros, um por linha,
remova dele todos os valores pertencentes ao
intervalo [n1, n2], onde n1 e n2 são valores inteiros,
o primeiro não superior ao segundo. */

// protótipo das funções
int copia(char arquivoA[], char arquivoB[]);
int funcao(int n1, int n2, char arq[]);

// implementação das funções
int funcao(int n1, int n2, char arq[])
{
	FILE *a; 
	FILE *b;
	int i;
	
	a = fopen(arq, "r");
	b = fopen("novoArquivo.txt", "w");
	
	if((!a)||(!b))
	{
		fclose(a);
		fclose(b);
		return -1;
	}
	
	while(fscanf(a, "%d", &i)!=EOF)
	{
		if((i<n1)||(i>n2))
		{
			fprintf(b, "%d\n", i);
			
		}
		
	}
	if(copia(arq, "novoArquivo.txt")==1)
	{
		printf("\nDeu certo!\n");
		
	}
	fclose(a);
	fclose(b);
	return 1;
}

int copia(char arquivoA[], char arquivoB[])
{
	FILE *arqA;
	FILE *arqB;
	int num;
	
	arqA = fopen(arquivoA, "w");
	arqB = fopen(arquivoB, "r");
	
	if((!arqA)||(!arqB))
	{
		fclose(arqA);
		fclose(arqB);
		return -1;
	}
	
	while(fscanf(arqB, "%d", &num)!=EOF)
	{
		fprintf(arqA, "%d\n", num);
	}
	fclose(arqA);
	fclose(arqB); 
	return 1;
}
void main()
{
	char nomeArquivo[30];
	int n1, n2;
	
	printf("Forneca o nome do arquivo: ");
	gets(nomeArquivo);
	
	printf("\n Forneca o intervalo: ");
	scanf("%d %d", &n1, &n2);
	
	if(funcao(n1, n2, nomeArquivo)==-1)
	{
		printf("\nDeu errado.\n");
	}
	else
	{
		printf("\nRealizado.");
	}
}
