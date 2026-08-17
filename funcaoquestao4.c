#include <stdio.h>
/* QUESTÃO 04:
Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números. */

/* parametro = os dois numeros /// retorno =  o mdc*/

int funcao (int a, int b)
{
	int i, mdc;
	
	for(i=1;i<=b && i<=a;i++)
	{
		if(a%i == 0 && b%i == 0)
	    {
	    	mdc = i;
		}
	}
	return mdc;
}

void main()
{
	int n1, n2, maiorDivisorComum;
	
	printf("Forneca um numero: \n");
	scanf("%d", &n1);
	printf("Forneca um numero: \n");
	scanf("%d", &n2);
	
	maiorDivisorComum = funcao (n1, n2);
	printf("Este e o maximo divisor comum entre %d e %d: %d\n", n1, n2, maiorDivisorComum);
}
