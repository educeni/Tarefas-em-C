#include <stdio.h>
#include <float.h>
#define TAM 30
/* Questão 05:
Faça uma função que, dado um arquivo A
contendo números reais, um por linha, crie um
novo arquivo B contendo os mesmos
elementos de A, porém ordenados
decrescentemente e sem repetição.
*/

int buscar(char nomearquivo[], float limite, float *maior);

int funcao(char nomearqA[], char nomearqB[])
{
	FILE *arqA, *arqB;
	float numero, maior, limite = FLT_MAX;
	
	arqA = fopen(nomearqA,"r");
	arqB = fopen(nomearqB,"w");
	
	if((arqA==NULL)||(arqB==NULL))// ou (!a)
	{
		fclose(arqA);
		fclose(arqB);
		return -1;
	}
	else
	{
		fclose(arqA);
		
		while(buscar (nomearqA, limite, &maior) != 0)
		{
			fprintf(arqB, "%f\n", maior);
			
			limite = maior;
		}
		fclose(arqA);
		fclose(arqB);
		return 1;
	}	
}

int buscar(char nomearquivo[], float limite, float *maior)
{
	FILE *arquivo;
	float n;
	int achou = 0;
	
    arquivo = fopen(nomearquivo, "r");

    *maior = FLT_MIN;
	
	while(fscanf(arquivo, "%f", &n) != EOF)
	{
		if(n<limite)
		{
		  achou = 1;	
		  if(n>*maior)
		  {
		  	*maior = n;
		  	
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
