#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 18/03/2026

	Lista de Exercícios VI:
	
	QUESTÃO 03:
	Desenvolver uma função que gere uma matriz Mnxn, nos moldes do 
	exemplo apresentado a seguir (que consiste em uma matriz de ordem 5)

						1	2	3	4	5	
						2	3	4	5	6	
						3	4	5	6	7	
						4	5	6	7	8	
						5	6	7	8	9
*/

#define L 5 
#define C 5
 
void funcao(int mat[L][C], int l, int c)
{
	int i,j;
	
    for(i=0;i<l;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		mat[i][j] = i+j+1;
    		
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
	int matriz[L][C];
		
	funcao(matriz, L, C);
	exibirMatriz (L, C, matriz);
}
