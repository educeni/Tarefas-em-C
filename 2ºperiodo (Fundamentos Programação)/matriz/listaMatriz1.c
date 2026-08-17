/*#include <stdio.h>
/* QUESTÃO 01:
Faça uma função que, dada uma matriz Mm×n de
reais, gere a matriz Mt, sua transposta. */

void main ()
{
	int mat[4][3] = {{3,6,2},
	                {7,8,9},
	                {3,5,1},
	                {1,4,8}};
	int mat2[3][4];
	            
	funcao(mat, 4, 3, mat2);			
	printf("\n\nMatriz Original: \n\n");			
	exibirMatriz (4, 3, mat);

	printf ("\n\nMatriz transposta: \n\n");
	exibirMatriz (3, 4, mat2);	               
}


void funcao(int linha, int coluna, int matriz[linha][coluna], int matriz2[coluna][linha])
{
	int i,j;
	
	for(i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			matriz2[j][i] = matriz[i][j];
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




