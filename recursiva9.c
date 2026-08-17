#include <stdio.h>
#define TAM 5
/* Desenvolver uma função recursiva que, dado
um vetor V com quant números inteiros,
determine se seus elementos estão dispostos
de maneira a representar uma progressão
aritmética. */

// prototipo das funcoes
int pa(int vet[], int tamanho);
int paRec(int vet[], int tamanho, int razao);

// implementação das funções

int pa(int vet[], int tamanho)
{
	int razao = vet[1] - vet[0];
	int resp = paRec(vet, tamanho-1, razao);
	
	return resp; 
}

int paRec(int v[], int quant, int razao)
{
	// caso base
	if(quant == 0)
	{
		return 1;
	}
	else
	{
		if(v[quant]-v[quant-1]!=razao)
		{
			return 0;
		}
		else
		{
			return paRec(v, quant-1, razao);
		}
	}
}

void main()
{
	int v[TAM] = {2,5,8,11,14};

	if(pa(v, TAM) == 1)
	{
		printf("este vetor e uma PA. \n", v);
	}
	else
	{
		printf("Este vetor nao e uma PA. \n", v);
	}
}
