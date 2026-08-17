#include <stdio.h>
#define L 6
#define C 8
/* Questão 02:
Desenvolver uma função que, dada uma matriz Mmxn, crie uma submatriz contendo l linhas e c colunas, a partir do
elemento que se encontra na linha i e coluna j de M.
Exemplo:

0 1 2 3 4 5 6 7
0 5 7 0 4 1 0 8 9
1 5 7 5 3 2 6 8 5
2 4 3 2 9 0 8 0 9
3 6 5 1 8 7 3 8 5
4 4 8 0 7 4 2 0 9
5 8 4 7 9 4 8 7 1

0 1 2 3 4
0 3 2 9 0 8
1 5 1 8 7 3
2 8 0 7 4 2

Observação: se existirem as l linhas e as c colunas a partir do elemento mij, a operação será realizada e o valor 1
retornado; caso contrário, a função deverá retornar 0. */

int funcao(int matriz[L][C], int linha, int coluna, int lin, int col, int i, int j)
{
	int m[lin][col], u,v,k=0,l=0;
	
	if((lin<linha)&&(col<coluna)){
	
	for(u=i;u<linha;u++,k++)
	{
		l=0;
		for(v=j;v<coluna;v++,l++)
		{
			m[k][l] = matriz[u][v];
			
		}
	}
	return 1;
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


void main()
{
	int mat[L][C] = {{5,7,0,4,1,0,8,9},
{5,7,5,3,2,6,8,5},
{4,3,2,9,0,8,0,9},
{6,5,1,8,7,3,8,5},
{4,8,0,7,4,2,0,9},
{8,4,7,9,4,8,7,1}};
	int l,c,i,j, resp;
	
	exibirMatriz (L, C, mat);
	printf("Forneca quantas linhas: \n");
	scanf("%d", &l);
	printf("forneca quantas colunas: \n");
	scanf("%d", &c);
	printf("Forneca a posicao da linha matriz og:");
	scanf("%d", &i);
	printf("Forneca a posicao da coluna matriz og:");
	scanf("%d", &j);
	
	resp = funcao(mat, L, C, l, c, i, j);
	
	if(resp==1)
	{
		printf("a operacao foi realizada: 1");
	}
	else
	{
		printf("a operacao nao foi realizada: 0");
	}
}

