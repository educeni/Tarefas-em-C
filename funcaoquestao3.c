#include <stdio.h>
/* QUESTÃO 03:
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci. */

/* parametro = qual o numero //// retorno = numero na fibonacci*/

//função
int funcao(numero)
{
	int i, t1=0, t2=1 , t3;
	
	if(numero==1)
	{
		t3 = 0;
	}
	else if (numero == 2)
	{
		t3 = 1;
	}
	else
	{
		for(i=3;i<=numero;i++)
		{
			t3 = t1 + t2;
			t1 = t2;
			t2 = t3;
			
		}
		return t3;
	}
	
}
void main()
{
	int n, fibonacci;
	
	printf("Forneca um numero: \n");
	scanf("%d", &n);
	
	fibonacci = funcao(n);
	printf("\n%d", fibonacci);
}
