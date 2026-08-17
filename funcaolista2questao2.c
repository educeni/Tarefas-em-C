#include <stdio.h>

/*QUESTÃO 02:
Dados dois números inteiros A e B, fazer uma
função que determine o número de potências
de 2 existentes no intervalo definido pelos dois
valores, assim como a maior delas.*/
/*parametro = a,b ///// retorno = quantas potencias de dois e a maior delas*/

int funcao(int a, int b, int*maisGrande, int*quant)
{
	int i, min, max, maior=0, cont=0;
	
	min = (a>b)?b:a;
	max = (a>b)?a:b;
	
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		{
			cont++;
		}
		if(i>maior)
		{
			maior = i;
		}
	}
	*maisGrande = maior;
	*quant = cont;
}


void main()
{
	int termo1, termo2, m, quantidade;
	
	printf("Forneca o intervalo: \n");
	scanf("%d %d", &termo1, &termo2);
	
	funcao(termo1, termo2, &m, &quantidade);
	
	printf("Esta e a quantidade de potencias de dois: %d e esta a maior potencia no intervalo: %d\n", quantidade, m);
}
