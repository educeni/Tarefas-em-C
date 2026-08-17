#include <stdio.h>
/* Questão 03:
O conceito de simetria de matrizes considera a diagonal principal como referencial. Porém, supondo que se deseja
determinar se uma matriz é simétrica em relação às colunas, pede-se o desenvolvimento de uma função que, dada uma
matriz de ordem n, verifique se é ou não “simétrica verticalmente”. */

#define L 5
#define C 5


int funcao(int matriz[L][C], int l, int c)
{
	int i,j=0,help;

    for(i=0;i<l;i++)
	{
		help = l;
      	for(j=0;j<c;j++,help--)
        {
     		if(matriz[help][j]!=matriz[i][j])
     		{
     		   return 0;	
			}
		i++;	
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
	int mat[L][C] = {{1,2,0,2,1},
			         {3,4,0,4,3},
					 {5,6,0,6,5},
					 {7,8,0,8,7},		
				     {9,1,0,1,9}};
	int resp;	
	//preencherMatrizAleatoria (L, C, mat, 10);
	exibirMatriz (L, C, mat);
	
	resp = funcao(mat, L, C);
	if(resp==1)
	{
		printf("Essa MATRIZ e simetrica verticalmente! \n");
		
	}
	else
	{
		printf("Essa MATRIZ nao e simetrica verticalmente. \n");
	}
}
