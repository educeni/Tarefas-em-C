#include <stdio.h>

/*QUESTÃO 07:
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.*/

/* parametro = n, a, b //// retorno = divisores */

int funcao(int n, int a, int b)
{
	int i, j, quant=0;
	
	for (i=a;i<=b;i++)
	{
		for(j=2;j<=i;j++)
		{
			if((i%j==0)&&(n%j==0))
			{
				quant++;	
			}
		}
	}
	return quant;
}

void main()
{
	int numero, t1, t2, divisor;
	
	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	printf("Forneca o intervalo: ");
	scanf("%d %d", &t1, &t2);
	divisor = funcao (numero, t1, t2);
	printf("\n%d", divisor);
}
