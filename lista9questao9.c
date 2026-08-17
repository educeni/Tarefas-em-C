#include <stdio.h>
/* Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar). */
/* parametro = vetor, elemento x //// retorno =  */

#define TAM 10

void funcao(int vetA[], int *tamanho, int num)
{
	int i, j, k;
	
	for(i=0;i<(*tamanho);i++)
	{
		if(num>=vetA[i])
		{
			for(j=i;j<(*tamanho);j++)
			{
				if(vetA[j]<=num)
				{
					for(k=(*tamanho)-1;k>j;k--)
					{
						vetA[k+1] = vetA[k];
						
					}
				}
				else
				{
					vetA[j] = num;
				}
				*tamanho++;
			}
		}
	}
	
}

void preencherVetorOrdenado (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantir que cada sequência gerada é diferente da anterior
	srand (time (NULL));
	
	//percorrendo o vetor
	vetor[0] = rand()%10;
	for (i=1;i<tamanho;i++)
	{
		vetor[i] = vetor[i-1]+rand()%4;
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
	int numero, tamanho;
	
	printf("Forneca um numero para inserir no vetor: \n");
	scanf("%d", &numero);
	
	preencherVetor (vetor, TAM, 20);
	
	preencherVetorOrdenado (vetor, TAM);
	
	exibirVetor (vetor, TAM);
	
	funcao(vetor, &tamanho, numero);
	
	exibirVetor (vetor, TAM);
}
