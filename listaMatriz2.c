#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 18/03/2026

	Lista de Exercícios VI:
	
	QUESTÃO 02:
	Desenvolver uma função que, dada uma matriz Mm×n, determine se um 
	número X se encontra na linha L da matriz. 
*/

#define L 10
#define C 5

void main()
{
	
	int mat[L][C];
	int num, linha;
	
	printf("Forneca o numero: \n\n");
	scanf("%d", &num);
	
	printf("Forneca a linha: \n\n");
	scanf("%d", &linha);

	preencherMatrizAleatoria (L, C, mat, 10);
	exibirMatriz (L, C, mat);
	
    if (funcao(mat, L, C, num, linha) == 1)
	{
		printf ("\n\nO valor %d foi encontrado na linha %d!", num, linha);
	}
	else
	{
		printf ("\n\nO valor %d NAO foi encontrado na linha %d!", num, linha);
	}	
}

int funcao(int linha, int coluna, int matriz[linha][coluna], int numero, int l)
{
	int j;
	
	for(j=0;j<coluna;j++)
	{
		
		if(numero == matriz[linha][j])
		{
			return 1;
		}
	}
	return 0;
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
