#include <stdio.h>
/* QUESTÃO 02:
Implementar uma função que, dado um vetor
de reais, troque o 1° e o 2° elementos, em
seguida o 3° e o 4° elementos e assim
sucessivamente, até se chegar ao final do vetor. */

#define TAM 10

void funcao(int vetA[], int tamanho)
{
	int i, step;
	
	
	for(i=1;i<tamanho;i+=2)
	{
		step = vetA[i];
		vetA[i] = vetA[i+1];
		vetA[i+1] = step;
	}
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
	
    preencherVetor (vetor, TAM, 40);
    
    exibirVetor (vetor, TAM);
	
	funcao(vetor, TAM);
	
	exibirVetor (vetor, TAM);
}
