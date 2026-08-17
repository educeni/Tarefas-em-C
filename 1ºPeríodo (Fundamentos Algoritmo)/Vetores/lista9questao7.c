#include <stdio.h>
/* QUESTÃO 07:
Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas. */
/* parametro = vetor, elemento //// retorno =  qtd de remocoes */

#define TAM 10

int remover(int n, int vetor[], int *tamanhoVetor)
{
	int i, j, remocao=0, step;
	
	for(i=0;i<(*tamanhoVetor);i++)
	{
		if(vetor[i]==n)
		{
			for(j=(*tamanhoVetor)-1;j>=i;j--)
			{
				step = vetor[j-1];
				vetor[j] = step;
				vetor[j-1] = vetor[j];
			}
		    remocao++;
		    *tamanhoVetor--;
		}
	}	
	return remocao;
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
	int numero, resposta, tamanhoFinal;
	
	printf("Forneca o elemento a ser removido: \n");
	scanf("%d", &numero);
     
	preencherVetor (vetor, TAM, 10);
	
	exibirVetor (vetor, TAM);
	 
	resposta = remover(numero, vetor, &tamanhoFinal); 	
	
	exibirVetor (vetor, tamanhoFinal);
	
	printf("\nForam realizadas %d remocoes\n", resposta);
}
