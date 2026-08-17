#include <stdio.h>
/* QUESTÃO 03:
Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente. */
/* parametros : vetor real  /// retorno = (0 ou 1) */

#define TAM 10

int crescente(int vetA[], int tamanho)
{
	int i, cont=0;
	
	for(i=0;i<tamanho;i++)
	{
		if(vetA[i] > vetA[i+1])
		{
			return 0;
		}
    }
    return 1;
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
	int vetA[5] = {2,3,4,5,6};
	int resposta;
	
	
	//preencherVetor (vetA, TAM, 20);
	
	exibirVetor (vetA, 5);
	
	resposta = crescente(vetA, 5);
	
	if (resposta == 0)
	{
		printf ("\nO vetor 1 nao esta ordenado!");
	}
	else
	{
		printf ("\nO vetor 1 esta ordenado!");
	}
}
