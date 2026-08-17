#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 19/03/2026

	Lista de Exercícios VI:
	
	QUESTÃO 05:
	Implementar uma função que, dada uma matriz Mm×n, gere um vetor V de 
	tamanho n, onde cada elemento do vetor consiste na soma dos elementos 
	de uma coluna de M. Ou seja, o elemento V[0] consiste na soma dos 
	elementos da primeira coluna de M, o elemento V[1] consiste na soma 
	dos elementos da segunda coluna de M, e assim por diante.
*/

#define L 5
#define C 5


void criarVetor(int linha, int coluna, int mat[linha][coluna], int vet[linha])
{
	int i,j,c=0, soma;
	
	for(i=0;i<coluna;i++)
	{
		vet[i]=0;
	}
	for(j=0;j<coluna;j++)
	{
		soma=0;
		for(i=0;i<linha;i++)
		{
			soma += mat[i][j];
		}
		vet[c] = soma;
		c++;
	}
}

void preencherMatrizAleatoria (int l, int c, int mat[l][c], int limite)
{
	//declaração de variáveis
	int i, j;
	
	srand (time(NULL));
	
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
			mat[i][j] = rand()%limite;
		}
	}	
}

void exibirVetor (int tamanho, int vetor[tamanho])
{
	//declaração de variáveis
	int i;
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%3d ", vetor[i]);
	}
	
	printf ("\n\n");
}

void exibirMatriz (int l, int c, int mat[l][c])
{
	//declaração de variáveis
	int i, j;
	
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
			printf ("%3d ", mat[i][j]);
		}
		
		printf ("\n");
	}
}		


void main()
{
	int matriz[L][C];
	int vetor[L];
	
	preencherMatrizAleatoria (L, C, matriz, 5);
	
	exibirMatriz (L, C, matriz);
	
	criarVetor(L, C, matriz, vetor);
	
	exibirVetor (L, vetor);
}
