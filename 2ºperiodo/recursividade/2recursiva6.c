#include <stdio.h>
#define DIM 4
/* Questão 06:
Desenvolver uma função recursiva que determine se uma matriz quadrada, de ordem n, é simétrica ou
não.*/

// prototipo das funcoes
int simetria(int mat[DIM][DIM], int lin, int col);
int simetriaRec(int mat[DIM][DIM], int lin, int col, int i, int j);

// implementação das funcoes
int simetria(int mat[DIM][DIM], int lin, int col)
{
	int resp = simetriaRec(mat, lin, col, 0, 0);
	return resp;
}

int simetriaRec(int mat[DIM][DIM], int lin, int col, int i, int j)
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
			return simetriaRec(mat, lin, col, i+1, 0);	
		}
		else
		{
			return simetriaRec(mat, lin, col, i, j+1);
		}
	}
}

void main()
{
	int mat[DIM][DIM] = {{1,  5,  9, 13},
        				{ 5,  2,  6, 10},
        				{ 9,  6,  3,  7},
        				{13, 10,  7,  4}};
    	
	if((simetria(mat, DIM, DIM)==1))
	{
		printf("Essa matriz e simetrica. \n");
	}	
	else
	{
		printf("Essa matriz nao e simetrica. \n");
	}
}
