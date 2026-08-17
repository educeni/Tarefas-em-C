#include <stdio.h>
/* QUESTÃO 05:
Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares. */
/* parametro = vetorPar, VetorImpar  //// retorno =  */

#define TAM 50

void funcao(int vetPar[], int *tamanhoPar, int vetImpar[], int *tamanhoImpar, int vetor[], int tamanhoVetor)
{
	int i, j=0, k=0;
	
	for(i=0;i<tamanhoVetor;i++)
	{
		if(vetor[i]%2==0)
		{
			vetPar[j] = vetor[i];
			j++;
		}
		else
		{
			vetImpar[k] = vetor[i];
			k++;
		}
	}
	*tamanhoPar = j;
	*tamanhoImpar = k;
}

void exibirVetor (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	printf ("\nElementos do vetor: \n\n");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
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

void main()
{
	int vetor[TAM];
	int vetPar[TAM];
	int vetImpar[TAM];
	int tamanhoImpar, tamanhoPar;
	
	preencherVetor (vetor, TAM, 50);
	
	exibirVetor (vetor, TAM);
	
	funcao(vetPar, &tamanhoImpar, vetImpar, &tamanhoPar, vetor, TAM);
	
	exibirVetor (vetPar, tamanhoPar);
		
	exibirVetor (vetImpar, tamanhoImpar);
}
