#include <stdio.h>
#define n 3
/* Questão 06:
Desenvolver uma função recursiva que determine se 
uma matriz quadrada, de ordem n, é simétrica ou
não. */

//protótipo das funções
int funcao(int m[n][n], int lin, int col);
int funcaoRec(int mat[n][n], int lin, int col, int i, int j);

//implementação das funções
int funcao(int m[n][n], int lin, int col)
{
	int resp = funcaoRec(m, lin, col, 0, 0);
	return resp;
}

int funcaoRec(int mat[n][n], int lin, int col, int i, int j)
{
	if(i==lin)
	{
		return 1;
	}
	else
	{
		if(mat[i][j]!=mat[j][i])
		{
			return 0;
		}
		else if(j==col-1)
		{
			return funcaoRec(mat, lin, col, i+1, 0);
		}
		else
		{
			return funcaoRec(mat, lin, col, i, j+1);
		}
	}
}

void main()
{
	int mat[n][n] = {{1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9}};
	
	if(funcao(mat, n, n)==1)
	{
		printf("Esta matriz e simetrica.\n");
	}	
	else
	{
		printf("Nao e simetrica.\n");
	}
}
