#include <stdio.h>
/* QUESTÃO 04:
Fazer uma função que, dada uma matriz Mn×n,
determine se ela é simétrica. */

#define L 5
#define C 5

int funcao(int l, int c, int mat[L][C])
{
	int i, j;
	
	if(l==c)
	{
	  for(i=0;i<l;i++)
	  {
		for(j=0;j<c;j++)
		{
			if(mat[i][j] != mat[j][i])
			{
				return 0;
			}
		}
	  }
    }
    return 1;
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
	int matriz[L][C] = {{1,2,3,4,5},
	                   {2,1,8,7,3},
	                   {3,8,1,5,9},
					   {4,7,5,1,0},
	                   {5,3,9,0,1}};
	
	
	//preencherMatrizAleatoria (L, C, matriz, 10);
	exibirMatriz (L, C, matriz);
	
	
	if(funcao(L, C, matriz) == 0)
	{
		printf("Esta matriz nao e simetrica. \n\n");
	}
	else
	{
		printf("Esta matriz e simetrica. \n\n");
	}
}
