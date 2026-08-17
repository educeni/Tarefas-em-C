#include <stdio.h>
/* FAETERJ-Rio
	Fundamentos de Programação - FPR - Manhã
	Data: 19/03/2026

	Lista de Exercícios VI:
	
	QUESTÃO 06:
	Considere uma loja que mantém em uma matriz o total vendido por 
	cada funcionário pelos diversos meses do ano. Ou seja, uma matriz 
	de 12 linhas (uma por mês) e 10 colunas (10 funcionários). Pede-se 
	o desenvolvimento de uma função para cada item abaixo:

	a.	Calcular o total vendido durante o ano;
	b.	Dado um mês fornecido pelo usuário, determinar o total vendido 
	    nesse mês;
	c.	Dado um funcionário fornecido pelo usuário, determinar o total 
	    vendido por ele durante o ano;
	d.	Determinar o mês com maior índice de vendas;
	e.	Determinar o funcionário que menos vendeu durante o ano.
*/

#define L 12
#define C 10

float totalVendidoAno(float matriz[L][C], int linha, int coluna)
{
	int i,j;
	float totalAno=0;
	
	for(i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			totalAno += matriz[i][j];
		}	
	}
	return totalAno;
	
}

float totalVendidoMes(float matriz[L][C], int linha, int coluna, int m)
{
	int j;
	float totalMes=0;
	
	for(j=0;j<coluna;j++)
	{
		totalMes += matriz[m-1][j];
	}
	return totalMes;
}

float totalFuncionario (float matriz[L][C], int linha, int coluna, int funcionario)
{
	int i; 	
    float totalFunc=0;
	 
	for(i=0;i<linha;i++)
	{
		totalFunc += matriz[i][funcionario-1];
	}
	return; totalFunc;
}

int maiorMesVendido (float matriz[L][C], int linha, int coluna)
{
	int i, maiorMes;
	float resp, maior=0;
	
    for(i=1;i<=L;i++)	
    {
    	resp = totalVendidoMes(matriz, linha, coluna, i);
    	if(resp > maior)
    	{
    		maior = resp;
    		maiorMes = i;
		}
	}
	return maiorMes;
}


void exibirMatriz (int l, int c, float mat[l][c])
{
	//declaração de variáveis
	int i, j;
	
	for (i=0;i<l;i++)
	{
		for (j=0;j<c;j++)
		{
			printf ("\t%6.2f ", mat[i][j]);
		}
		
		printf ("\n");
	}
}

void preencherMatrizAleatoria (int l, int c, float mat[l][c], int limite)
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

void main()
{
   	float mat[L][C];
 	float totalVendido, totalMes, totalVendidoFuncionario;
 	int mes, f, maiorValorMes;
 	
	preencherMatrizAleatoria (L, C, mat, 1000);

    exibirMatriz (L, C, mat);
    
    //totalVendido = funcao(mat, L, C);
    //printf("Este e o total vendido no ano: R$ %.2f\n", totalVendido);
    
	
	//printf("Forneca um mes: \n");
    //scanf("%d", &mes);
    
    //totalMes = totalVendidoMes(mat, L, C, mes);
    //printf("Este e o total vendido no mes %d: R$ %.2f\n", mes, totalMes);
    
    //printf("Forneca o funcionario: \n");
    //scanf("%d", &f);
    
    //totalVendidoFuncionario = totalFuncionario (mat, L, C, f);
    //printf("Este e o total vendio pelo funcionario %d: R$ %.2f\n", f, totalVendidoFuncionario);
    
    //maiorValorMes = maiorMesVendido (mat, L, C);
    //printf("Este e o mes com maior valor vendido: %d", maiorValorMes);

}
