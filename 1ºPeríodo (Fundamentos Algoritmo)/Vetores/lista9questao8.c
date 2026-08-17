#include <stdio.h>
/* QUESTÃO 08:
Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário). */
/* parametro = vetor, x /// retorno = posicao do x */

#define TAM 20

void organizar(int vetor[], int tamanho)
{
	int i, step;
	
	for(i=0;i<tamanho;i++)
	{
		if(vetor[i]>vetor[i+1])
		{
			step = vetor[i];
			vetor[i] = vetor[i+1];
		    vetor[i+1] = step;
		}
	}
}

int funcao()
{
	
}

void preencherVetor (int vetor[], int tamanho, int limite)
{
	//declaração de variáveis
	int i;
	
	//garantir que cada sequência gerada é diferente da anterior
	srand (time (NULL));
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%limite;
	}
}

void exibirVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
}

void main()
{
	int vetor[TAM];
	int numero;
	
	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	
	preencherVetor (vetor, TAM, 50);
	
	exibirVetor (vetor, TAM);
	
	organizar(vetor, TAM);
	
	exibirVetor (vetor, TAM);
}
