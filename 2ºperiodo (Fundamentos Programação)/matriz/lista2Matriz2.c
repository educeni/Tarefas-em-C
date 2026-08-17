#include <stdio.h>
/* Questão 02:
Implementar uma função que, dadas uma matriz M de inteiros (com lin linhas e col colunas) e duas colunas c1 e c2, inverta
a ordem (por linha) dos elementos compreendidos entre estas colunas.
Exemplo:

1 2 4 8 6 2 0
9 7 4 0 3 1 0
8 8 4 1 2 0 1
4 7 2 1 5 4 8
2 1 2 4 0 1 0
1 8 7 2 1 3 6
9 4 5 2 0 3 2
0 1 3 5 6 9 8
7 4 1 2 3 5 0

1 6 8 4 2 2 0
9 3 0 4 7 1 0
8 2 1 4 8 0 1
4 5 1 2 7 4 8
2 0 4 2 1 1 0
1 1 2 7 8 3 6
9 0 2 5 4 3 2
0 6 5 3 1 9 8
7 3 2 1 4 5 0

Nota: se as colunas c1 e c2 forem inválidas, nada será realizado e o valor 0 retornado pela função; caso contrário,
a inversão dos elementos será feita e o código 1 retornado.

*/

#define L 10
#define C 10

int funcao(int mat[L][C], int lin, int col, int c1, int c2)
{
	int i, j, step, help;
	
	if((c1>col)||(c1<0)||(c2>col)||(c2<0)||(c1==c2))
	{
		return 0;
	}
	else
	{
		  for(i=0;i<lin;i++)
		  {
		  	help = c2;
		  	for(j=c1;j<help;j++,help--)
			{  
             step =  mat[i][j];
             mat[i][j] = mat[i][help];
             mat[i][help] = step;
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
	int mat[L][C], resp, coluna1, coluna2;
	
	printf("Forneca a primeira coluna: \n");
	scanf("%d", &coluna1);
	
	printf("Forneca a segunda coluna: \n");
	scanf("%d", &coluna2);
	
	printf("Esta e MATRIZ original: \n\n");
	preencherMatrizAleatoria (L, C, mat, 10);
	exibirMatriz (L, C, mat);

    
	resp = funcao(mat, L, C, coluna1, coluna2);
    printf("\nEste e o retorno: %d\n\n", resp);
    
    printf("Esta e a MATRIZ alterada: \n\n");
    exibirMatriz (L, C, mat);
}
