#include <stdio.h>
/* QUESTÃO 11:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B. */
/* parametro = vetA, vetB, vetC ///  retorno = interseçao */

void intersecao(int vetA[], int tamanhoA, int vetB[], int tamanhoB, int vetC[], int *tamanhoC)
{
	int i, j,tamanho=0;
	
	for(i=0;i<tamanhoA;i++)
	{
		for(j=0;j<tamanhoB;j++)
		{
			if(vetA[i] == vetB[j])
			{
				vetC[tamanho] = vetA[i];
				tamanho++;
				break;
			}
		}
	}
	*tamanhoC = tamanho;
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
	int vetorA[4];
	int vetorB[6];
	int vetorC[4];
	int tamC;
	
	preencherVetor (vetorA, 4, 5);
	exibirVetor (vetorA, 4);
	
	preencherVetor (vetorB, 6, 10);
	exibirVetor (vetorB, 6);
	
	intersecao (vetorA, 4, vetorB, 6, vetorC, &tamC);
	exibirVetor (vetorC, tamC);
}
