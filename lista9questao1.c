#include <stdio.h>
/* QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A. */

#define TAM 10

int buscarValor(int vetA[], int tamanho, int numero)
{
	int i, cont=0;
	
	for(i=0;i<tamanho;i++)
	{
		if(vetA[i] == numero)
		{
			cont++;
		}
	}
	return cont;
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
	int vetA[TAM];
	int resposta, n;
	
	printf("Forneca um numero inteiro: \n");
	scanf("%d", &n);
	
	preencherVetor (vetA, TAM, 10);
	
	exibirVetor (vetA, TAM);
	
	resposta = buscarValor(vetA, TAM, n);
	
	printf("\nEssa e a quantidade de vezes que o numero %d aparece: %d\n", n, resposta);
}
