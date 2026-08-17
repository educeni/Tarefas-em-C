#include <stdio.h>

/*QUESTÃO 05:
Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.*/
/* parametro = n ///// retorno = 0 ou 1*/

int funcao(int num)
{
	int i, j;
	int potencia=1;
	
	if((num>=1)&&(num<=9))
	{
		for(i=0;i<=9;i++)
		{
			for(j=1;j<=i;j++)
			{
				potencia*=num;
				printf("\t%d^%d = %d\n", num, i, potencia);
				break;
			}
	    }
	}
	else
	{
		return 0;
	}
}
void main()
{   int retorno, numero;

	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	
	retorno = funcao(numero);
	printf("\n%d", retorno);
}
