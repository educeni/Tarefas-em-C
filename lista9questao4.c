#include <stdio.h>
/* QUESTÃO 04:
Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o
elementos é igual a 1, entre o 2o e 3o é igual a
2, entre o 3o e o 4o é igual a 3, e assim
sucessivamente. */
/* parametro = vetor /// retorno =  */

#define TAM 50

void funcao(int vetA[], int tamanho)
{
	int i, soma=1;
	
	vetA[0]=1;
	
	for(i=1;i<tamanho;i++)
	{
		vetA[i] = vetA[i-1] + soma;
		soma++;
	}
}

/*void preencherVetor (int vetor[], int tamanho, int limite)
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
}*/


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


	funcao(vetA, TAM);
	
	exibirVetor (vetA, TAM);
}
