#include <stdio.h>
#include <limits.h>
#define TAM 30
/* Questão 05:
Faça uma função que, dado um arquivo A
contendo números reais, um por linha, crie um
novo arquivo B contendo os mesmos
elementos de A, porém ordenados
decrescentemente e sem repetição.
*/

int funcao(char nomearqA[], char nomearqB[])
{
	FILE *arqA, *arqB, *arqC;
	float numero, maior, limite = INT_MAX;
	
	arqA = fopen(nomearqA,"r");
	arqB = fopen(nomearqB,"r");
	arqC = fopen("arquivoC.txt","w");
	
	if((arqA==NULL)||(arqB==NULL)||(arqC==NULL)) // ou (!a)
	{
		fclose(arqA);
		fclose(arqB);
		fclose(arqC);
		return -1;
	}
	else
	{
		while(buscar(arqA, &maior, limite) != 0)
		{
			if()
			
			
			
			limite = maior;
		}
		fclose(arqA);
		fclose(arqB);
		fclose(arqC);
		return 1;
	}
	
}

int buscar(char nomearquivo[], float *maior, float limite)
{
	FILE *arquivo;
	float n, *maior= INT_MIN;
	int achou= 0;
	
	
    arquivo = fopen(nomearquivo,"r");
	
	while(fscanf(arquivo, "%f", &n) != EOF)
	{
		if(n<limite)
		{
		  achou = 1;	
		  if(n>*maior)
		  {
		  	maior = n;
		  	
		  }	
		}
		
	}
	fclose(arquivo);
	return achou;
}


void main()
{
	char arquivoA[TAM];
	char arquivoB[TAM];
	int resp;
	
	printf("Forneca o arquivo A: ");
	gets(arquivoA);
	printf("Forneca o arquivo B: ");
	gets(arquivoB);
	
	resp = funcao(arquivoA, arquivoB);
	printf("%d", resp);
}
