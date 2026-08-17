#include <stdio.h>
/*QUESTÃO 05:
Fazer uma função que calcule o MMC (mínimo
múltiplo comum) entre dois números.*/

/* parametro = os dois numeros /// retorno = o mmc*/

int funcao (int n1, int n2)
{
	int i=1, mmc;
	
	do
	{
		i++;
		if((i%n1 == 0) && (i%n2 == 0))
		{
			mmc = i;
		}
	}while(i!=mmc);
	
	return mmc;
}

void main()
{
	int a,b, minimoMultiploComum;
	
	
	printf("Forneca um numero: \n");
	scanf("%d", &a);
	
	printf("Forneca um numero: \n");
	scanf("%d", &b);
	
	minimoMultiploComum = funcao (a, b);
	printf("%d", minimoMultiploComum);
}
