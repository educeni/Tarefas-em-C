#include <stdio.h>
/* QUESTÃO 10:
Fazer uma função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.
Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B. */
/* parametro = vetA, vetB //// retorno =  */

#define TAM 10

void uniao(int vetA[], int tamanhoA, int vetB[], int tamanhoB, int vetC[], int *tamanhoC)
{
	int i, j, tamanho = 0;
	
	
	for(i=0;i<tamanhoA;i++)
	{
		vetC[i] = vetA[i];
		tamanho++;
		
		for(j=0;j<tamanhoB;j++)
		{
		  if(vetB[j]!=vetC[i])
		  {
		  	vetC[i+1] = vetB[j];
		  	tamanho++;
		  	i++;
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
	int vetorC[10];
	int tamC;
	
	preencherVetor (vetorA, 4, 5);
	preencherVetor (vetorB, 6, 10);
	exibirVetor (vetorA, 4);
	exibirVetor (vetorB, 6);
	
	uniao(vetorA, 4, vetorB, 6, vetorC, &tamC);
	exibirVetor (vetorC, tamC);
}
