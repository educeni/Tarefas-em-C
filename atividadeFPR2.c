#include <stdio.h>
#define L 5
#define C 6
/* Dadas uma matriz Mmxn e uma coluna col,
desenvolver uma função que desloque todos os
elementos da coluna col para a última coluna
da matriz.
Consequentemente, as colunas col+1 à última
deverão serão deslocadas uma posição para a
esquerda, conforme ilustrado no exemplo
abaixo:

1 5 7 1 4 6
6 2 1 4 7 7
M = 3 6 9 7 0 1
2 4 5 7 2 4
2 4 8 9 1 2
col = 1 (ou seja, a 2a coluna)

1 7 1 4 6 5
6 1 4 7 7 2
M = 3 9 7 0 1 6
2 5 7 2 4 4
2 8 9 1 2 4
Nota: se o valor de col for válido, a função
fará o que foi solicitado e retornará 1, ao
final; caso contrário, apenas retornará 0. */

int funcao(int matriz[L][C], int l, int c, int col)
{
	int i, j, step;
	
	if((col<0)||(col>=c)){
		return 0;
	}
	else
	{
	   for(i=0;i<l;i++)
	   {
        step = matriz[i][col];
        for(j=col;j<c;j++)
        {
        	matriz[i][j] = matriz[i][j+1];
		}
		matriz[i][c-1] = step;
       }
    return 1;
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
	int mat[L][C] = {{1,5,7,1,4,6},
	                {6,2,1,4,7,7},            
				    {3,6,9,7,0,1},
					{2,4,5,7,2,4},
					{2,4,8,9,1,2}};					
	int coluna, resp;
	
	exibirMatriz (L, C, mat);
	
	printf("\n\nForneca a coluna: \n");
	scanf("%d", &coluna);
	
	resp = funcao(mat, L, C, coluna);
	exibirMatriz (L, C, mat);
    printf("\n\n%d", resp);
    
}
