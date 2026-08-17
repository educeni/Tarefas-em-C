#include <stdio.h>
/* QUESTÃO 06:
Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.
(versão 2: retornando a quantidade de alterações realizadas) */
/* parametro = a,b, vetorReal //// retorno =  */

#define TAM 20

int funcao(int n1, int n2, int vetor[], int tamanho)
{
	int i, cont=0;
	
	for(i=0;i<tamanho;i++)
	{
		if(vetor[i] == n1)
		{
			vetor[i] = n2;
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
	int a, b, resposta;
	int vetor[TAM];
	
	printf("Forneca o numero a ser substituido: \n");
	scanf("%d", &a);
	printf("Forneca o numero que vai substituir: \n");
	scanf("%d", &b);
	
	preencherVetor (vetor, TAM, 10);
	
	exibirVetor (vetor, TAM);
	
	resposta = funcao(a, b, vetor, TAM);
	
	exibirVetor (vetor, TAM);
	
	printf("\nForam realizadas %d alteracoes\n", resposta);
}
